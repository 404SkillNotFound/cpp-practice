#include <cassert> // for assert
#include <cstdint> // for std::int64_t
#include <iostream>
#include <limits> // for std::numeric_limits

// -----------------------------------------------------------------------------
// Algorithm: Modular Exponentiation (Safe Version)
// -----------------------------------------------------------------------------
// This function calculates (base^exp) efficiently using O(log n) complexity.
// unlike standard pow(), this checks for integer overflow before it happens.
// -----------------------------------------------------------------------------

// Returns std::numeric_limits<std::int64_t>::max() if overflow occurs
constexpr std::int64_t powint_safe(std::int64_t base, int exp)
{
    assert(exp >= 0 && "powint_safe: exp parameter has negative value");

    // Handle 0 case
    if (base == 0)
        return (exp == 0) ? 1 : 0;

    std::int64_t result { 1 };

    // Handle negative bases (Make positive for easy checking, flip sign later)
    bool negativeResult{ false };
    if (base < 0)
    {
        base = -base;
        negativeResult = (exp & 1); // Result is negative only if exponent is odd
    }

    while (exp > 0)
    {
        // 1. If the current bit is 1 (odd), multiply into result
        if (exp & 1)
        {
            // -----------------------------------------------------------------
            // 🔥 INTERVIEW GEM: The Overflow Check
            // -----------------------------------------------------------------
            // Question: Why do we write (result > max / base) ?
            // Why not just write (result * base > max) ?
            //
            // Answer: Because if we do (result * base), the overflow happens
            // INSTANTLY before the if-statement can even check it.
            // We must use Algebra to move 'base' to the right side to check
            // safely *before* the crash occurs.
            // -----------------------------------------------------------------
            if (result > std::numeric_limits<std::int64_t>::max() / base)
            {
                std::cerr << "powint_safe(): result overflowed\n";
                return std::numeric_limits<std::int64_t>::max();
            }

            result *= base;
        }

        // 2. Move to next bit
        exp /= 2;

        // If we are done, break early so we don't overflow the 'base' calculation below
        if (exp <= 0)
            break;

        // 3. Square the base for the next round (base^2 -> base^4 -> base^8)

        // Same "Interview Gem" logic applies here: Check using division
        if (base > std::numeric_limits<std::int64_t>::max() / base)
        {
            std::cerr << "powint_safe(): base overflowed\n";
            return std::numeric_limits<std::int64_t>::max();
        }

        base *= base;
    }

    if (negativeResult)
        return -result;

    return result;
}

int main()
{
    std::cout << "7^12 = " << powint_safe(7, 12) << '\n';

    // Test the safety mechanism
    std::cout << "70^12 (Overflow Test) = " << powint_safe(70, 12) << '\n';

    return 0;
}
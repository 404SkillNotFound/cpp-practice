//A pointer is a variable that stores the memory address of another variable.
#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
  int temp = *a;
  *a = *a+*b;
  int temp1 = *b;
  *b = abs(temp - *b);

//we simply had to do a =a+b(using pointer thing)
    //mistake i did were:
    //1.used abs without #include <stdlib.h>
    //2.I was using the new created value of '*a' instead of the temp the new value


}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
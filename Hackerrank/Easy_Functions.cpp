#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int num1, int num2, int num3, int num4){
  if(num1>num2 && num1>num3 && num1>num4){
    return num1;
    }else if(num2>num3 && num2>num4){
      return num2;

  }else if(num3>num4){
    return num3;
  }else {
    return num4;


  }
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

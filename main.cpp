//
// Created by hp on 28-0


#include <iostream>
using namespace std;

int avg(int a,int b)
{
    int sum = a+b;
    sum = sum/2;
    return sum;
}

int main() {
    int a,b;
    cin>>a>>b;
    int result =  avg(a,b);
    cout<<"resutlt:  "<<result;
    return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double i=2;
    double sum=0;
    while(i<=69){
        sum+=1/i;
        i++;
    }
    cout << sum;
    return 0;
}
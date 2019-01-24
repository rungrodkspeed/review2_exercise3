#include<iostream>
using namespace std;

int main()
{
    double i=6;
    double sum = 0;
    while(i<=19){
        sum+=1/i;
        i++;
    }
    cout << sum;
    return 0;
}
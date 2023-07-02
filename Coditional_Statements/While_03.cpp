// Addition of even numbers.
// Incompete
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;

    int i = 2;
    int sum = 2;

    while (i<=n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout<<"The sum of even n numbers is :"<<sum;
    return 0;
}
// Simple program to find the power without (FUNCTION)

#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    cout<<"Enter the values of A and B :";
    cin>>a>>b;

    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans*a;
    }
    cout<<"Answer is :"<<ans;
    return 0;
}

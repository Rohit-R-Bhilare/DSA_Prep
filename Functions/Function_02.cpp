// Simple program to find the power with (FUNCTION)

#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;

    for(int i=1; i<=b; i++){
        ans = ans*a;
    }
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter the values of A and B:";
    cin>>a>>b;

    int answer = power(a,b);
    cout<<"The power is :"<<answer;
    return 0;
}
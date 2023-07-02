// CALCUALTOR USING SWITCH CASE

#include<iostream>
using namespace std;

int main(){
    int a , b;

    cout<<"Enter the value of A:";
    cin>>a;

    cout<<"Enter the value of B:";
    cin>>b;

    char op;

    cout<<"Enter the operation you want to perform:";
    cin>>op;

    switch (op)
    {
    case '+': cout<<"The sum of a and B is :"<<(a+b)<<endl;
        break;
    case '-': cout<<"The substraction of a and B is :"<<(a-b)<<endl;
        break;
    case '*': cout<<"The multiplication of a and B is :"<<(a*b)<<endl;
        break;
    case '/': cout<<"The division of a and B is :"<<(a/b)<<endl;
        break;
    
    default: cout<<"Please enter the valid operation.";
        break;
    }
    return 0;
}
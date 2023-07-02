// IF ELSE IF CONDITION 
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter your number:";
    cin>>num;

    if (num>0)
    {
        cout<<"Your number is positive.";
    }
    else if (num<0)
    {
        cout<<"Your nmber is negative.";
    }
    else{
        cout<<"Number is equal to zero.";
    }
    return 0;
}
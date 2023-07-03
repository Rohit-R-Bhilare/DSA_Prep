// Find the Even OR Odd number

#include<iostream>
using namespace std;

bool isEven(int a){
    if(a & 1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){

    int num;
    cout<<"Enter the value of Num:";
    cin>>num;

    if(isEven (num)){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is Odd";
    }
    return 0;
}
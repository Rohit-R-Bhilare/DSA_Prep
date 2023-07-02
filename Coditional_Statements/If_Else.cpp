// IF ELSE CONDITION TO CHECK THE USER IS ELIGIBLE FOR VOTING.
#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Your Age:";
    cin>>age;

    if (age>18)
    {
        cout<<"You are eligible for Voting";
    }
    else{
        cout<<"You are not eligible for voting";
    }
    return 0;
}
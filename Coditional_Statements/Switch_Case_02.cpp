#include<iostream>
using namespace std;

int main(){
    char ch = '1';
    cout<<endl;

    switch (ch)
    {
    case 1: cout<<"First"<<endl;
        break;
    case '1': cout<<"Character One"<<endl;
        break;    
    default: cout<<"It Is Deafault";
        break;
    }
    cout<<endl;

    return 0;
}
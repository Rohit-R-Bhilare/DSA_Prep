// Printing the elements of ARRAY in different ways.

#include<iostream>
using namespace std;

int main(){
    int second[3]={5,7,11};
    cout<<"Value at 2 idex is:"<<second[2]<<endl;

    int third[10]={10,15,18,19,21,22,23,29,30,31};

    int n ;
    cout<<"Enter the value of N:";
    cin>>n;

    for (int i = 0; i <=n; i++)
    {
        cout<<third[i]<<" ";
    }
        return 0;
}
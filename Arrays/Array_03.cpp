// Array using function.

#include<iostream>
using namespace std;

int printArray(int array[] , int size){
    cout<<"Printing the array element:";

    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    } 
    cout<<endl<<"Printing DONE <(*_*)>";
    return 0;
}

int main(){
    int array[10]={1,5,6,7,10,20,19,21,22,45};
    printArray(array,10);

    return 0;
}

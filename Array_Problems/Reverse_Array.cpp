/* Reverse the array

#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n - 1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end++;
    }   
}

void printArray(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};

    reverse(arr,6);
    reverse(brr,5);
     
    printArray(arr,6);
    printArray(brr,5);

    return 0;
}
*/

#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[],int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[], int n){
    reverse(arr, arr + n );
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverse(arr,n);
    print(arr,n);

    return 0;
}


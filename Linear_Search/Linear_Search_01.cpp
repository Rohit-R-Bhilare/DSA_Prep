// Finding an element

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 7, 22, -3, 0, 15, 22, 45, 56, 7};

    cout << "Enter the key to search in array:";
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Key is present" << endl;
    }
    else
    {
        cout << "Key is absent" << endl;
    }
    return 0;
}
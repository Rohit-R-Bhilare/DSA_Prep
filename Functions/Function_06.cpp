// Prime or Not Prime
// Incomplete
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 1)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter value for n:";
    cin >> n;

    if (isPrime(n))
    {
        cout << "The number is Prime";
    }
    else
    {
        cout << "The number is Not Prime";
    }

    return 0;
}
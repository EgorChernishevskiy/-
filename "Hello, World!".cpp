#include <iostream>

using namespace std;

int fib(int n)
{
    int a = 1;
    int b = 1;
    for (int i = 0; i < n - 2; i++)
    {
        a = a + b;
        b = a - b;
    }
    return a;
}

int main() 
{ 
    cout << "Hello, world!" << endl;
    
    int n;
    cout << "n="; cin >> n;
    cout << fib(n) << " ";
    cout << endl;
    
    return 0; 
}

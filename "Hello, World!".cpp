#include <iostream>

using namespace std;

int fib(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        cout << a << endl;
        a = a + b;
        b = a - b;
        
    }
    cout << a << endl;
    return a;
}

int main() 
{ 
    cout << "Hello, world!" << endl;
    
    int n;
    cout << "n="; cin >> n;
    fib(n);
    cout << endl;
    
    return 0; 
}

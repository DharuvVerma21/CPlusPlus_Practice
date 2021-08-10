// Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
// F(n) = F(n-1) + F(n-2), 
// Where, F(1) = F(2) = 1
// Provided N you have to find out the Nth Fibonacci Number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n == 0 || n == 1)
        cout << n;
    else{
        int a = 0, b = 1;
        int c = a+b;
        for (int i=3; i<=n; i++){
            a = b;
            b = c;
            c = a+b;
        }
        cout << c;
    }
    return 0;
}

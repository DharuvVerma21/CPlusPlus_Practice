// Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
// Note : If a number has trailing zeros, then its reverse will not include them. For e.g., reverse of 10400 will be 401 instead of 00401.
#include<iostream>
using namespace std;
int main(){
    int n, x = 0;
    cin >> n;
    while (n > 0){
        x = (x*10)+(n%10);
        n /= 10;
    }
    cout << x;
    return 0;
}

// Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
// If C is equal to -
// 1, then print the sum
// 2, then print the product
// Any other number, then print '-1' (without the quotes)
#include<iostream>
using namespace std;
int main(){
    int n, c;
    cin >> n >> c;
    if (c == 1){
        int sum = 0;
        for (int i=1; i<=n; i++){
            sum += i;
        }
        cout << sum;
    }
    else if (c == 2){
        int product = 1;
        for (int i=1; i<=n; i++){
            product *= i;
        }
        cout << product;
    }
    else{
        cout << -1;
    }
    return 0;
}

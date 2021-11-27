// Given an integer N, count and return the number of zeros that are present in the given integer using recursion.

#include <iostream>
using namespace std;
int helperFunction(int n){
    if (n == 0){
        return 0;
    }
    if (n%10 == 0){
        return 1 + helperFunction(n/10);
    }
    return helperFunction(n/10);
}
int countZeros(int n) {
    if (n == 0){
        return 1;
    }
    return helperFunction(n);
}
int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}

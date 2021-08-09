// Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
// Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
#include<iostream>
using namespace std;
int main() {
	int n, even_sum = 0, odd_sum = 0;
    cin >> n;
    while(n > 0){
        int a = n%10;
        if (a%2 == 0){
            even_sum = even_sum + a;
        }
        else{
            odd_sum = odd_sum + a;
        }
        n = n/10;
    }
    cout << even_sum << " " << odd_sum;
}

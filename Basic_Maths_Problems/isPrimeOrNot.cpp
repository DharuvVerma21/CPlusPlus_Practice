// Code to check whether a number N (N>=2) is prime or not
#include<iostream>
using namespace std;
// function declaration
bool isPrime(int n){
	for (int i=2; i<=n/2; i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	// n = number that we want to check
	int n;
	cin >> n;
	if (isPrime(n)){
		cout << "Yes, the given number, " << n << ", is a prime number.";
	}
	else{
		cout << "No, the given number, " << n << ", is not a prime number.";
	}
	return 0;
}

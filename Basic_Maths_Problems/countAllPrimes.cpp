// Code to count total number of prime numbers ranging from 2 to N (N>=2)
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
	int count = 0;
	for (int i=2; i<=n; i++){
		if (isPrime(i)){
			count++;
		}
	}
	cout << count;
	return 0;
}

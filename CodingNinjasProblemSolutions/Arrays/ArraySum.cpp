// Given an array of length N, you need to find and print the sum of all elements of the array.
#include<iostream>
#define max 1000000
using namespace std;
int main(){
	int n, sum = 0;
	cin >> n;
	int arr[max];
	for (int i=0; i<n; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	cout << sum << endl;
}

// This code will check if a given element is present in the array or not and if present, then the index value of that element will be printed. In case of repeated numbers, the very first index value that will be encountered will be printed.
// Linear Search Algorithm on an Array with a worst time complexity of O(n)
#include<iostream>
#include<climits>
#define max 100000
using namespace std;
int linearSearch(int *arr, int size, int x){
	for (int i=0; i<size; i++){
		if (arr[i] == x){
			return i;
		}
	}
	return INT32_MIN;
}
int main(){
	// n = total number of elements that the user wants to enter in the array (n <= 10^5)
	int n;
	cin >> n;
	// Array declaration
	int arr[max];
	// Filling the array with numbers entered by the user
	for (int i=0; i<n; i++){
		cin >> arr[i];	
	}
	// x = number that we want to search in the array
	int x;
	cin >> x;
	int argument = linearSearch(arr, n, x);
	if (argument == INT32_MIN){
		cout << "The given element, " << x << ", is not present in the given array." << endl;
	}
	else{
		cout << "The given element, " << x << ", is present at the index value, " << argument << ", in the given array." << endl;
	}
}

// Implementation of Bubble Sort Algorithm
// Worst Case time complexity --- O(n^2)
// Total n-1 rounds to be covered in order to sort the array and each round involves taking the largest element to the index corresponding to the end position
#include<iostream>
#define max 100000
#define printArray(arrayName, start, end) for(int i=start; i<end; i++){cout << arrayName[i] << " ";}
using namespace std;
void bubbleSort(int *arr, int n){
	for (int end=n-1; end>=1; end--){
		for (int i=0; i<end; i++){
			if (arr[i] > arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
}
int main(){
	int n;
	cin >> n;
	int arr[max];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	bubbleSort(arr, n);
	printArray(arr, 0, n);
}

// Implementation of Selection Sort Algorithm
// Worst Case time complexity --- O(n^2)
// Total n-1 rounds to be covered in order to sort the array and each round involves searching for minimum value and swapping it with starting index value
#include<iostream>
#define max 100000
#define printArray(arrayName, start, end) for(int i=start; i<end; i++){cout << arrayName[i] << " ";}
using namespace std;
void selectionSort(int *arr, int n){
	for (int start=0; start<(n-1); start++){
		int min = arr[start], index = start;
		// Searching for the minimum value in the array starting from start
		for (int i=start+1; i<n; i++){
			if (arr[i] < min){
				min = arr[i];
				index = i;
			}
		}
		// Swapping with the start index value
		int temp = arr[index];
		arr[index] = arr[start];
		arr[start] = temp;
	}
}
int main(){
	int n;
	cin >> n;
	int arr[max];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	selectionSort(arr, n);
	printArray(arr, 0, n);
}

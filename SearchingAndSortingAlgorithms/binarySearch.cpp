// This code will check if a given element is present in the array or not and if present, then the index value of that element will be printed.
// Binary Search Algorithm on a Sorted Array with a worst time complexity of O(logn)
#include<iostream>
#define max 100000
using namespace std;
int BinarySearch(int *array, int size, int num){
	int start = 0, end = size-1;
	while(start <= end){
		int mid = (start+end)/2;
		if (array[mid] == num)
			return mid;
		else{
			if (array[mid] > num)
				end = mid-1;
			else
				start = mid+1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin >> n;
	int array[max];
	for (int i=0; i<n; i++){
		cin >> array[i];
	}
	// Assuming the array to be sorted one
	// x = value that we need to search in the array
	int x;
	cin >> x;
	int ans = BinarySearch(array, n, x);
	cout << ans << endl;
}

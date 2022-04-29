// You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and then rotated by some number 'K' in the right hand direction.
// Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has been rotated.

#include <iostream>
using namespace std;
int check(int arr[], int start, int end){
    if (start >= end){
        return 0;
    }
    if ((end-start) == 1){
        if (arr[start] <= arr[end]){
            return 0;
        }
        return end;
    }
    int mid = (start+end)/2;
    if (arr[mid] >= arr[start]){
        return check(arr, mid, end);
    }
    if (arr[mid-1] <= arr[mid]){
        return check(arr, start, mid);
    }
    return mid;
}
int arrayRotateCheck(int *input, int size){
    return check(input, 0, size-1);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; i++){
			cin >> input[i];
		}
		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	return 0;
}

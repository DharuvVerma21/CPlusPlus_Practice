// You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).

#include <iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void reverse(int arr[], int start, int end){
    while(start < end){
        swap(arr[start++], arr[end--]);
    }
}
void rotate(int *input, int d, int n){
    reverse(input, 0, n-1);
    reverse(input, 0, n-d-1);
    reverse(input, n-d, n-1);
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; ++i){
			cin >> input[i];
		}
		int d;
		cin >> d;
		rotate(input, d, size);
		for (int i = 0; i < size; ++i){
			cout << input[i] << " ";
		}
		delete[] input;
		cout << endl;
	}
	return 0;
}

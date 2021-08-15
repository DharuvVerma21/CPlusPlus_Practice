// You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).
#include <iostream>
using namespace std;
void swapArr(int *arr, int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end--;
        start++;
    }
}
void rotate(int *input, int d, int n)
{
    swapArr(input, 0, n-1);
    swapArr(input, n-d, n-1);
    swapArr(input, 0, n-d-1);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}
		int d;
		cin >> d;
		rotate(input, d, size);
		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}		
		delete[] input;
		cout << endl;
	}
	return 0;
}

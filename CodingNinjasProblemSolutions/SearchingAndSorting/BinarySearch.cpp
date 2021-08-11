// You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X. Write a function to search this element in the given input array/list using 'Binary Search'. Return the index of the element in the input array/list. In case the element is not present in the array/list, then return -1.
#include <iostream>
using namespace std;
int binarySearch(int *input, int n, int val)
{
    int start = 0, end = n-1;
    while (start <= end){
        int mid = (start+end)/2;
        if (input[mid] == val){
            return mid;
        }
        else{
            if (input[mid] > val){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
    }
    return -1;
}
int main()
{
	int size;
	cin >> size;
	int *input = new int[size];
	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	int t;
	cin >> t;
	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}	
	delete [] input;
	return 0;
}

// You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. Write a function to sort this array/list. Think of a solution which scans the array/list only once and don't require use of an extra array/list.
#include <iostream>
using namespace std;
void sortZeroesAndOne(int *input, int size)
{
    int start = 0, end = size-1;
    bool flag1 = false, flag2 = false;
    while (start < end){
        if (input[start] == 1){
            flag1 = true;
        }
        else{
            start++;
        }
        if (input[end] == 0){
            flag2 = true;
        }
        else{
            end--;
        }
        if (flag1 && flag2){
            int temp = input[start];
            input[start] = input[end];
            input[end] = temp;
            flag1 = false;
            flag2 = false;
            start++;
            end--;
        }
    }
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
		sortZeroesAndOne(input, size);
		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		cout << endl;
		delete[] input;
	}
	return 0;
}

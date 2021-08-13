// Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Bubble Sort'.
#include <iostream>
using namespace std;
void bubbleSort(int *input, int size)
{
    int end = size-1;
    while(end >= 1){
        for (int i=0; i<end; i++){
            if (input[i] > input[i+1]){
                int temp = input[i];
                input[i] = input[i+1];
                input[i+1] = temp;
            }
        }
        end--;
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
		bubbleSort(input, size);
		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		delete[] input;
		cout << endl;
	}
}

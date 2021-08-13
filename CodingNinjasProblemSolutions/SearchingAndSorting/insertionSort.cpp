// Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.
#include <iostream>
using namespace std;
void insertionSort(int *input, int size)
{
    for (int start=1; start<size; start++){
        int temp = input[start];
        for (int j=start-1; j>=0; j--){
            if (temp < input[j]){
                input[j+1] = input[j];
                if (j == 0){
                    input[j] = temp;
                }
            }
            else{
                input[j+1] = temp;
                break;
            }
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
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		insertionSort(input, size);
		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}
		delete[] input;
		cout << endl;
	}
	return 0;
}

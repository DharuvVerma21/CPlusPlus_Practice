// You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that are present in the array/list to the end of it. Also, make sure to maintain the relative order of the non-zero elements.
#include <iostream>
using namespace std;
void pushZeroesEnd(int *input, int size)
{
    int ptr = 0;
    for (int i=0; i<size; i++){
        if (input[i] != 0){
            int temp = input[ptr];
            input[ptr] = input[i];
            input[i] = temp;
            ptr++;
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
		pushZeroesEnd(input, size);
		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}
		cout << endl;
		delete[] input;
	}
	return 0;
}

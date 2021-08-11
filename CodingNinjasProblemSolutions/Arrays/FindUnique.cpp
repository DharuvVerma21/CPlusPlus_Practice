// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.
#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    bool unique = false;
    for (int i=0; i<size; i++){
        for (int j=0; j<size; j++){
            if (arr[i] == arr[j] && i!=j){
                unique = false;
                break;
            }
            else{
                unique = true;
            }
        }
        if (unique){
            return arr[i];
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
		cout << findUnique(input, size) << endl;
	}
	return 0;
}

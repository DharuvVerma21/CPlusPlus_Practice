// Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the arrays/lists contain numbers from 0 to 9(i.e. single digit integer is present at every index). The idea here is to represent each array/list as an integer in itself of digits N and M.
// You need to find the sum of both the input arrays/list treating them as two integers and put the result in another array/list i.e. output array/list will also contain only single digit at every index.
#include <iostream>
using namespace std;
void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
	int size = 1 + max(size1, size2);
    output[size] = {};
    int carry = 0;
    int i = size - 1;
    while (size1 > 0 && size2 > 0){
        int ans = input1[size1-1] + input2[size2-1];
        output[i--] = (carry + ans)%10;
        carry = (carry + ans)/10;
        size1--;
        size2--;
    }
    while (size1 > 0){
        output[i--] = (carry + input1[size1-1])%10;
        carry = (carry + input1[size1-1])/10;
        size1--;
    }
    while (size2 > 0){
        output[i--] = (carry + input2[size2-1])%10;
        carry = (carry + input2[size2-1])/10;
        size2--;
    }
    output[0] = carry;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size1;
		cin >> size1;
		int *input1 = new int[size1];
		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}
		int size2;
		cin >> size2;
		int *input2 = new int[size2];
		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}
		int outsize = 1 + max(size1, size2);
		int *output = new int[outsize];
		sumOfTwoArrays(input1, size1, input2, size2, output);
		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}
		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}
	return 0;
}

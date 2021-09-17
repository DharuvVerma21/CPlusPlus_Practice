// For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the largest sum(sum of all the elements in a row/column) amongst all the rows and columns.
// Note: If there are more than one rows/columns with maximum sum, consider the row/column that comes first. And if ith row and jth column has the same largest sum, consider the ith row as answer.
#include <iostream>
#include<climits>
#include<cstring>
using namespace std;
void findLargest(int **input, int nRows, int mCols)
{
    char ans[10] = "row";
    int rowIndex = 0, maxRowSum = INT32_MIN;
    for (int i=0; i<nRows; i++){
        int sum = 0;
        for (int j=0; j<mCols; j++){
            sum += input[i][j];
        }
        if (maxRowSum < sum){
            maxRowSum = sum;
            rowIndex = i;
        }
    }
    int colIndex = 0, maxColSum = INT32_MIN;
    for (int j=0; j<mCols; j++){
        int sum = 0;
        for (int i=0; i<nRows; i++){
            sum += input[i][j];
        }
        if (maxColSum < sum){
            maxColSum = sum;
            colIndex = j;
        }
    }
    if (maxColSum > maxRowSum){
        strcpy(ans, "column");
        cout << ans << " " << colIndex << " " << maxColSum << '\n';
    }
    else{
        cout << ans << " " << rowIndex << " " << maxRowSum << '\n';
    }
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}

		findLargest(input, row, col);
		cout << endl;
	}
}

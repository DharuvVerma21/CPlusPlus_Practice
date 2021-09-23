// Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 times…..(n-1)th row will be printed 1 time.
#include <iostream>
using namespace std;
void print2DArray(int **input, int row, int col) {
	for (int i=0; i<row; i++){
        for (int k=0; k<(row-i); k++){
            for (int j=0; j<col; j++){
                std::cout << input[i][j] << " ";
            }
            std::cout << '\n';
        }
    }
}
int main() {
    int row, col;
    cin >> row >> col;

    int **input = new int*[row];
    for(int i = 0; i < row; i++) {
	    input[i] = new int[col];
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    print2DArray(input, row, col);
}

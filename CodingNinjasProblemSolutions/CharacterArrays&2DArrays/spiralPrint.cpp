// For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:
// a. First row(left to right)
// b. Last column(top to bottom)
// c. Last row(right to left)
// d. First column(bottom to top)
// Mind that every element will be printed only once.
#include<iostream>
#define max 1000
using namespace std;
int input[max][max];
void printSpiral(int input[][max], int nRows, int nCols){
    int rowCount = 0, colCount = 0, count = 0, end = nRows*nCols;
    bool flag = false;
    while(count < end){
        for (int j=colCount; j<nCols-colCount; j++){
            if (count >= end){
                flag = true;
                break;
            }
            cout << input[rowCount][j] << " ";
            count++;
        }
        if (flag){
            break;
        }
        rowCount++;
        for (int i=rowCount; i<=nRows-rowCount; i++){
            if (count >= end){
                flag = true;
                break;
            }
            cout << input[i][nCols-colCount-1] << " ";
            count++;
        }
        if (flag){
            break;
        }
        colCount++;
        for (int j=nCols-colCount-1; j>=colCount-1; j--){
            if (count >= end){
                flag = true;
                break;
            }
            cout << input[nRows-rowCount][j] << " ";
            count++;
        }
        if (flag){
            break;
        }
        for (int i=nRows-rowCount-1; i>=rowCount; i--){
            if (count >= end){
                flag = true;
                break;
            }
            cout << input[i][colCount-1] << " ";
            count++;
        }
        if (flag){
            break;
        }
    }
}
int main(){
    int m, n;
    cin >> m >> n;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> input[i][j];
        }
    }
    printSpiral(input, m, n);
}

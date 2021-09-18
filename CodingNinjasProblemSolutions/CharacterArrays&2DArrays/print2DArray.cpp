// Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 times.....(n-1)th row will be printed 1 time.
#include<iostream>
#define max 1000
using namespace std;
int arr[max][max];
void printArray(int arr[][max], int rows, int cols){
   for (int i=0; i<rows; i++){
      for (int k=0; k<rows-i; k++){
         for (int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
         }
         cout << '\n';
      }
   }
}
int main(){
   int n, m;
   cin >> n >> m;
   for (int i=0; i<n; i++){
      for (int j=0; j<m; j++){
         cin >> arr[i][j];
      }
   }
   printArray(arr, n, m);
}

// Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
#include<iostream>
using namespace std;
int arr[1000][1000];
int main(){
   int m, n;
   cin >> m >> n;
   for (int i=0; i<m; i++){
      for (int j=0; j<n; j++){
         cin >> arr[i][j];
      }
   }
   for (int j=0; j<n; j++){
      int sum = 0;
      for (int i=0; i<m; i++){
         sum += arr[i][j];
      }
      cout << sum << " ";
   }
}

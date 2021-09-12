// You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.
// 'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
// Note: You need to change in the given array/list itself. Hence, no need to return or print anything. 
#include<iostream>
using namespace std;
void printArray(int *arr, int n){
   for (int i=0; i<n; i++){
      cout << arr[i] << " ";
   }
}
void sort012(int *arr, int n){
   int one = 0, zero = 0, two = 0;
   for (int i=0; i<n; i++){
      if (arr[i] == 0){
         zero++;
      }
      else if (arr[i] == 1){
         one++;
      }
      else{
         two++;
      }
   }
   int i = 0;
   while(zero--){
      arr[i++] = 0;
   }
   while(one--){
      arr[i++] = 1;
   }
   while(two--){
      arr[i++] = 2;
   }
}
int main(){
   int t;
   cin >> t;
   while(t--){
      int n;
      cin >> n;
      int *arr = new int[n];
      for (int i=0; i<n; i++){
         cin >> arr[i];
      }
      sort012(arr, n);
      printArray(arr, n);
   }
}

// Given an integer array A of size n. Find and print all the leaders present in the input array. An array element A[i] is called Leader, if all the elements following it (i.e. present at its right) are less than or equal to A[i].
// Print all the leader elements separated by space and in the same order they are present in the input array.
#include<iostream>
using namespace std;
void leadersInTheArray(int arr[], int n){
   for (int i=0; i<n; i++){
      bool isLeader = true;
      for (int j=i+1; j<n; j++){
         if (arr[i] < arr[j]){
            isLeader = false;
            break;
         }
      }
      if (isLeader){
         cout << arr[i] << " ";
      }
   }
}
int main(){
   int n;
   cin >> n;
   int *arr = new int[n];
   for (int i=0; i<n; i++){
      cin >> arr[i];
   }
   leadersInTheArray(arr, n);
}

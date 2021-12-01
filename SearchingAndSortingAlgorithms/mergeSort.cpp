// Implementation of Merge Sort Algorithm
// Worst Case time complexity --- O(nlogn)
// Worst Case space complexity --- O(n)
// It is a recursive algorithm that works on on Divide and Conquer Approach to split an Array into two halves and sorting them indivisually and then merging them to form the sorted array.

#include<iostream>
using namespace std;
void merge(int input[], int start, int end){
    int mid = (start+end)/2;
    int size = (end-start+1);
    int *arr = new int[size];
    int k = 0;
    int i = start, j = mid+1;
    while(i <= mid && j <= end){
        if (input[i] < input[j]){
            arr[k] = input[i];
            k++;
            i++;
        }
        else if (input[i] > input[j]){
            arr[k] = input[j];
            k++;
            j++;
        }
        else{
            arr[k] = input[i];
            k++;
            arr[k] = input[j];
            k++;
            j++;
            i++;
        }
    }
    while(i <= mid){
        arr[k] = input[i];
        i++;
        k++;
    }
    while(j <= end){
        arr[k] = input[j];
        j++;
        k++;
    }
    for (int i=start, k=0; i<=end; i++, k++){
        input[i] = arr[k];
    }
    delete [] arr;
}
void merge_sort(int input[], int start, int end){
    if (start >= end){
        return;
    }
    int mid = (start+end)/2;
    merge_sort(input, start, mid);
    merge_sort(input, mid+1, end);
    merge(input, start, end);
}
void mergeSort(int input[], int size){
    merge_sort(input, 0, size-1);
}
int main(){
  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i=0; i<n; i++){
    cin >> arr[i];
  }
  mergeSort(arr, n);
  for (int i=0; i<n; i++){
    cout << arr[i] << ' ';
  }
  delete [] arr;
}

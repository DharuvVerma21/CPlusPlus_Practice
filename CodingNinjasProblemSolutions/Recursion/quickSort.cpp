// Sort an array A using Quick Sort.
// Worst Case Time Complexity - O(n^2)
// Average Case Time Complexity - O(nlogn)
// Extra Space - O(1)
// Unstable Sorting Algorithm
// A part of GCC Sort - The algorithm using in STL Sort Function

#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
	b = temp;
}
int partition(int input[], int start, int end){
    int pivot = input[start];
    int count = 0;
    for (int i=start+1; i<=end; i++){
        if (input[i] < pivot){
            count++;
        }
    }
    swap(input[start], input[start+count]);
    int i = start, j = end;
    while(i != (start+count) && j != (start+count)){
        if (input[i] < pivot){
            i++;
        }
        else if (input[j] >= pivot){
            j--;
        }
        else{
            swap(input[i], input[j]);
            i++;
            j--;
        }
    }
    return (start+count);
}
void quick_sort(int input[], int start, int end){
    if (start >= end){
        return;
    }
    int index = partition(input, start, end);
    quick_sort(input, start, index-1);
    quick_sort(input, index+1, end);
}
void quickSort(int input[], int size) {
	quick_sort(input, 0, size-1);
}
int main(){
    int n;
    cin >> n;
    int *input = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    delete [] input;
}

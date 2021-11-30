// Sort an array A using Merge Sort.
// Change in the input array itself. So no need to return or print anything.

#include <iostream>
using namespace std;
void mergeTwoSortedArrays(int arr[], int arr1[], int size1, int arr2[], int size2){
    int size = size1 + size2;
    int ptr1 = 0, ptr2 = 0, i;
    for (i=0; i<size && ptr1<size1 && ptr2<size2; i++){
        if (arr1[ptr1] > arr2[ptr2]){
            arr[i] = arr2[ptr2];
            ptr2++;
        }
        else if (arr1[ptr1] < arr2[ptr2]){
            arr[i] = arr1[ptr1];
            ptr1++;
        }
        else{
            arr[i] = arr1[ptr1];
            i++;
            arr[i] = arr2[ptr2];
            ptr1++;
            ptr2++;
        }
    }
    while(ptr1 < size1){
        arr[i++] = arr1[ptr1++];
    }
    while(ptr2 < size2){
        arr[i++] = arr2[ptr2++];
    }
}

void mergeSort(int input[], int size){
    if (size == 0 || size == 1){
        return;
    }
    int n;
    if (size%2 == 0){
        n = size/2;
        mergeSort(input, n);
        mergeSort(input+n, n);
    }
    else{
        n = (size/2)+1;
        mergeSort(input, n);
        mergeSort(input+n, n-1);
    }
    int *arr = new int[size];
    if (size%2 == 0){
        mergeTwoSortedArrays(arr, input, n, input+n, n);
    }
    else{
        mergeTwoSortedArrays(arr, input, n, input+n, n-1);
    }
    for (int i=0; i<size; i++){
        input[i] = arr[i];
    }
    delete [] arr;
}

int main() {
  	int length;
  	cin >> length;
  	int* input = new int[length];
  	for(int i=0; i < length; i++)
    	cin >> input[i];
  	mergeSort(input, length);
  	for(int i = 0; i < length; i++) {
    	cout << input[i] << " ";
  	}
}

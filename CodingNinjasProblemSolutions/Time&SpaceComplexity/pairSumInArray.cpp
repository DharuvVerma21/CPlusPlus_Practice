// You have been given an integer array/list(ARR) and a number 'num'. Find and return the total number of pairs in the array/list which sum to 'num'.

#include <iostream>
#include <algorithm>
using namespace std;
void merge(int arr[], int arr1[], int n, int arr2[], int m){
    int i = 0, j = 0, k = 0;
    while(j < n && k < m){
        if (arr1[j] < arr2[k]){
            arr[i++] = arr1[j++];
        }
        else if (arr1[j] > arr2[k]){
            arr[i++] = arr2[k++];
        }
        else{
            arr[i++] = arr1[j++];
            arr[i++] = arr2[k++];
        }
    }
    while(j < n){
        arr[i++] = arr1[j++];
    }
    while(k < m){
        arr[i++] = arr2[k++];
    }
}
void mergeSort(int arr[], int start, int end){
    if (start >= end){
        return;
    }
    int mid = (start + end)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    int* aux = new int[end-start+1];
    merge(aux, arr+start, mid-start+1, arr+mid+1, end-mid);
    int i = 0;
    for (int j=start; j<=end; j++){
        arr[j] = aux[i++];
    }
    delete [] aux;
}
bool binarySearch(int arr[], int n, int x){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start+end)/2;
        if (arr[mid] == x){
            return true;
        }
        else if (arr[mid] > x){
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return false;
}
int lowerBound(int arr[], int n, int x){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start+end)/2;
        if (arr[mid] == x){
            if (arr[mid-1] == x){
                end = mid-1;
            }
            else{
                return mid;
            }
        }
        else if (arr[mid] > x){
            end = mid-1;
        }
        else {
            start = mid+1;
        }
    }
    return -1;
}
int upperBound(int arr[], int n, int x){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start+end)/2;
        if (arr[mid] == x){
            if (arr[mid+1] == x){
                start = mid+1;
            }
            else{
                return mid;
            }
        }
        else if (arr[mid] > x){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int pairSum(int *arr, int n, int num)
{
	mergeSort(arr, 0, n-1);
    int count = 0;
    for (int i=0; i<n; i++){
        int a = num - arr[i];
        if (a != arr[i]){
            if (binarySearch(arr, n, a)){
                int x = upperBound(arr, n, a) - lowerBound(arr, n, a) + 1;
                count += x;
            }
        }
        else{
            if (binarySearch(arr, n, a)){
                int x = upperBound(arr, n, a) - lowerBound(arr, n, a) + 1;
                x = x-1;
                count += x;
            }
        }
    }
    return count/2;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int size;
		int x;
		cin >> size;
		int *input = new int[size];
		for (int i = 0; i < size; i++){
			cin >> input[i];
		}
		cin >> x;
		cout << pairSum(input, size, x) << endl;
		delete[] input;
	}
	return 0;
}

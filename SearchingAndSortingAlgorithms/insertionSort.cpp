// Implementation of Insertion Sort Algorithm
// Worst Case time complexity --- O(n^2)
// Total n-1 rounds to be covered in order to sort the array and each round involves placing the element in a previously assumed sorted array containing only one element initially in such a way that it remains sorted
#include<iostream>
#define max 100000
#define printArray(arrayName, start, end) for(int i=start; i<end; i++){cout << arrayName[i] << " ";}
using namespace std;
void insertionSort(int *arr, int n){
    for (int start=1; start<n; start++){
        int temp = arr[start];
        for (int j=start-1; j>=0; j--){
            if (temp < arr[j]){
                arr[j+1] = arr[j];
                if (j == 0){
                    arr[j] = temp;
                }
            }
            else{
                arr[j+1] = temp;
                break;
            }
        }
    }
}
int main(){
	int n;
	cin >> n;
	int arr[max];
	for (int i=0; i<n; i++){
		cin >> arr[i];
	}
	insertionSort(arr, n);
	printArray(arr, 0, n);
}

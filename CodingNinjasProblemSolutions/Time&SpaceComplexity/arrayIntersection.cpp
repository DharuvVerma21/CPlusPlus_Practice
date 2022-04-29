// You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.

#include <iostream>
#include <algorithm>
using namespace std;
void intersection(int *arr1, int *arr2, int n, int m) {
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
    for (int i=0; i<n; i++){
        if (binary_search(arr2, arr2+m, arr1[i])){
            int a = upper_bound(arr1, arr1+n, arr1[i]) - lower_bound(arr1, arr1+n, arr1[i]);
            int b = upper_bound(arr2, arr2+m, arr1[i]) - lower_bound(arr2, arr2+m, arr1[i]);
            for (int j=0; j<min(a,b); j++){
                cout << arr1[i] << ' ';
            }
            i = (upper_bound(arr1, arr1+n, arr1[i]) - arr1) - 1;
        }
    }
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int size1, size2;
		cin >> size1;
		int *input1 = new int[size1];
		for (int i = 0; i < size1; i++){
			cin >> input1[i];
		}
		cin >> size2;
		int *input2 = new int[size2];
		for (int i = 0; i < size2; i++){
			cin >> input2[i];
		}
		intersection(input1, input2, size1, size2);
		delete[] input1;
		delete[] input2;	
		cout << endl;
	}
	return 0;
}

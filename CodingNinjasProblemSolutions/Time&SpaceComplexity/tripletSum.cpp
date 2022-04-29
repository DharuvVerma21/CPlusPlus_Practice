// You have been given a random integer array/list(ARR) and a number X. Find and return the triplet(s) in the array/list which sum to X.

#include <iostream>
#include <algorithm>
using namespace std;
int tripletSum(int *arr, int n, int num){
    sort(arr, arr+n);
    int count = 0;
    for (int i=0; i<n; i++){
        int sum = num - arr[i];
        int start = i+1;
        int end = n-1;
        while(start < end){
            int x = arr[start] + arr[end];
            if (x == sum){
                if (arr[start] == arr[end]){
                    count += ((end-start+1)*(end-start))/2;
                    break;
                }
                else{
                    int count1 = (upper_bound(arr+start, arr+end+1, arr[start]) - lower_bound(arr+start, arr+end+1, arr[start]));
                    int count2 = (upper_bound(arr+start, arr+end+1, arr[end]) - lower_bound(arr+start, arr+end+1, arr[end]));
                    count += (count1*count2);
                    start = upper_bound(arr+start, arr+end+1, arr[start]) - arr;
                    end = (lower_bound(arr+start, arr+end+1, arr[end]) - arr) - 1;
                }
            }
            else if (x < sum){
                start++;
            }
            else{
                end--;
            }
        }
    }
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
		cout << tripletSum(input, size, x) << endl;
		delete[] input;
	}
	return 0;
}

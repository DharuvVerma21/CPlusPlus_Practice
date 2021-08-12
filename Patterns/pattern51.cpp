/*
 *	Code to print the following pattern for n = 4
 *	1
 *	2 5
 *	3 6 8
 *	4 7 9 10
 *	This code belongs to @DharuvVerma21	
 */
#include<iostream>
using namespace std;
int main(){
	// n = number of rows
    int n;
	cin >> n;
	// i = counter for number of rows
	int i = 1;
	while(i <= n){
		// j = counter for number of columns
		int j = 1;
		int k = i;
		while (j <= i){
			cout << k << " ";
			j++;
			k += (n-j+1);
		}
		cout << "\n";
		i++;
	}
	return 0;
}

/*
 *	Code to print the following pattern for n = 4
 *	****
 *	***
 *	**
 *	*
 *	**
 *	***
 *	****
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
	// for upper half
	while(i <= n){
		// j = counter for number of columns
		int j = 1;
		while(j <= (n-i+1)){
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
	i = 1;
	n = n - 1;
	// for lower half
	while(i <= n){
		// j = counter for number of columns
		int j = 1;
		while(j <= (i+1)){
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}
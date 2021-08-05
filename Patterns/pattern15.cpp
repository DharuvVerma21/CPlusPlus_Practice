/*
 *	Code to print the following pattern for n = 4
 *	   *
 *	  ***
 *	 *****
 *	*******
 *	 *****
 *	  ***
 *	   *
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
		// for spaces
		while(j <= (n-i)){
			cout << " ";
			j++;
		}
		// for stars
		j = 1;
		while(j <= i){
			cout << "* ";
			j++;
		}
		cout << endl;
		i++;
	}
	// for lower half
	i = 1;
	n = n - 1;
	while(i <= n){
		// j = counter for number of columns
		int j = 1;
		// for spaces
		while(j <= i){
			cout << " ";
			j++;
		}
		// for stars
		j = 1;
		while(j <= (n-i+1)){
			cout << "* ";
			j++;
		}
		cout << "\n";
		i++;
	}
	return 0;
}
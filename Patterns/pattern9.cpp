/*
 *	Code to print the following pattern for n = 4
 *	   *
 *	  ***
 *	 *****
 *	*******
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
		// for spaces
		int j = 1;
		while(j <= (n-i)){
			cout << " ";
			j++;
		}
		// for stars
		j = 1;
		while(j <= (2*i-1)){
			cout << "*";
			j++;
		}
		cout << "\n";
		i++;
	}
	return 0;
}

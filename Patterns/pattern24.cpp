/*
 *	Code to print the following pattern for n = 4
 *	*******
 *	*** ***
 *	**   **
 *	*     *
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
		// for left side stars
		while(j <= (n-i+1)){
			cout << "*";
			j++;
		}
		j = 1;
		// for spaces
		while(j <= (2*(i-1)-1)){
			cout << " ";
			j++;
		}
		// for right side stars
		if (i == 1){
			int j = 1;
			while(j < n){
				cout << "*";
				j++;
			}
		}
		else{
			int j = 1;
			while(j <= (n-i+1)){
				cout << "*";
				j++;
			}
		}
		cout << endl;
		i++;
	}
	return 0;
}
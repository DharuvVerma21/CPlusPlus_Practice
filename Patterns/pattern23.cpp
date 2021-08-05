/*
 *	Code to print the following pattern for n = 4
 *	*     *
 *	 *   *
 *	  * *
 *	   *
 *	  * *
 *	 *   *
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
	// for upper half
	while(i <= (2*n-1)){
		// j = counter for number of columns
		int j = 1;
		while(j <= (2*n-1)){
			if (i == j || i+j == 2*n){
				cout << "*";
			}
			else{
				cout << " ";
			}
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}
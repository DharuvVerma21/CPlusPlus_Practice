/*
 *	Code to print the following pattern for n = 4
 *	   *
 *	  * *
 *	 *   *
 *	*     *
 *	 *   *
 *	  * *
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
	// for upper part
	while(i <= n){
		// j = counter for number of columns
		int j = 1;
		// for spaces
		while(j <= (n-i)){
			cout << " ";
			j++;
		}
		j = 1;
		// for bordering stars
		while(j <= (2*i-1)){
			if (j == 1 || j == (2*i-1)){
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
	i = 1;
	n = n - 1;
	// for lower half
	while(i <= n){
		// j = counter for number of columns
		int j = 1;
		// for spaces
		while(j <= i){
			cout << " ";
			j++;
		}
		j = 1;
		// for bordering stars
		while(j <= (2*(n-i+1)-1)){
			if (j == 1 || j == (2*(n-i+1)-1)){
				cout << "*";
			}
			else{
				cout << " ";
			}
			j++;
		}
		cout << "\n";
		i++;
	}
	return 0;
}
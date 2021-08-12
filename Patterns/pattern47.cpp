/*
 *	Code to print the following pattern for n = 4
 *	1357
 *	357
 *	57
 *	7
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
		int k = (2*i - 1);
		while (j <= (n-i+1)){
			cout << k;
			k += 2;
			j++;
		}
		cout << "\n";
		i++;
	}
	return 0;
}

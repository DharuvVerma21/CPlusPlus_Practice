/*
 *	Code to print the following pattern for n = 4
 *	4321
 *	432
 *	43
 *	4
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
		int k = n;
		while(j <= (n-i+1)){
			cout << k;
			j++;
			k--;
		}
		cout << "\n";
		i++;
	}
	return 0;
}

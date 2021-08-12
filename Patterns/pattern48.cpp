/*
 *	Code to print the following pattern for n = 4
 *	1
 *	2 4
 *	1 3 5
 *	2 4 6 8
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
		int k;
		if (i%2 == 0){
			k = 2;
		}
		else{
			k = 1;
		}
		while (j <= i){
			cout << k << " ";
			k += 2;
			j++;
		}
		cout << "\n";
		i++;
	}
	return 0;
}

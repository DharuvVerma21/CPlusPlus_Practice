/*
 *	Code to print the following pattern for n = 4
 *	1
 *	23
 *	456
 *	78910
 *	This code belongs to @DharuvVerma21	
 */
#include<iostream>
using namespace std;
int main(){
	// n = number of rows
    int n;
	cin >> n;
	// i = counter for number of rows
	int i = 1, k = 1;
	while(i <= n){
		// j = counter for number of columns
		int j = 1;
		while (j <= i){
			cout << k;
			k++;
			j++;
		}
		cout << "\n";
		i++;
	}
	return 0;
}

/*
 *	Code to print the following pattern for n = 4
 *	1
 *	10
 *	101
 *	1010
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
		while (j <= i){
			if (j%2 == 0){
				cout << 0;
			}
			else{
				cout << 1;
			}
			j++;
		}
		cout << "\n";
		i++;
	}
	return 0;
}

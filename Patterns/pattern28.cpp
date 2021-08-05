/*
 *	Code to print the following pattern for n = 4
 *	1
 *	AB
 *	123
 *	ABCD
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
		char ch = 64;
		while(j <= i){
			if (i%2 == 0){
				cout << char(ch+j);
			}
			else{
				cout << j;
			}
			j++;
		}
		cout << "\n";
		i++;
	}
	return 0;
}
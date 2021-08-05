/*
 *	Code to print the following pattern for n = 4
 *	1 A A A A
 *	2 2 B B B
 *	3 3 3 C C
 *	4 4 4 4 D
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
		// for number part
		while(j <= i){
			cout << i << " ";
			j++;
		}
		j = 1;
		// for character part
		while(j <= (n-i+1)){
			cout << char(ch+i) << " ";
			j++;
		}
		cout << "\n";
		i++;
	}
	return 0;
}
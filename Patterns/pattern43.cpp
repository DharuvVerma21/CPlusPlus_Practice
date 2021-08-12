/*
 *	Code to print the following pattern for n = 4
 *	4321
 *	123
 *	21
 *	1
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
		int j;
		if (i%2 == 0){
			j = 1;
			while (j <= (n-i+1)){
				cout << j;
				j++;
			}
		}
		else{
			j = (n-i+1);
			while (j > 0){
				cout << j;
				j--;
			}
		}
		cout << "\n";
		i++;
	}
	return 0;
}

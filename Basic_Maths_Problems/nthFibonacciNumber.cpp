// Code to find Nth number in the fibonacci series. (given that f(0) = 0 and f(1) = 1)
#include<iostream>
using namespace std;
int fibonacci(int n){
	if (n == 0 || n == 1)
		return n;
	else{
		int count = 1;
		int a = 0, b = 1;
		int c = a + b;
		while(count <= n){
			a = b;
			b = c;
			c = a + b;
			count++;
		}
		return a;
	}
}
int main(){
	// n = Nth number in the series
	int n;
	cin >> n;
	int ans = fibonacci(n);
	cout << ans << endl;
}

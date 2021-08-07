// Code to check whether a given number is a part of fibonacci sequence or not
#include<iostream>
using namespace std;
int main(){
	// n = number that we want to check
	int n;
	cin >> n;
    int a = 0, b = 1;
    if (n == a || n == b){
        cout << "Yes, the given number, " << n << ", is a part of Fibonacci Sequence." << "\n";
    }
    else{
        int c = a + b;
        bool flag = false;
        while (c <= n){
            if (c == n){
                cout << "Yes, the given number, " << n << ", is a part of Fibonacci Sequence." << "\n";
                flag = true;
                break;
            }
            else{
                a = b;
                b = c;
                c = a + b;
            }
        }
        if (!flag)
            cout << "No, the given number, " << n << ", is not a part of Fibonacci Sequence." << "\n";
    }
	return 0;
}

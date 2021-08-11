// Given a decimal number (integer N), convert it into binary and print.
// The binary number should be in the form of an integer.
// Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for C++ and Java.
// Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.
#include<iostream>
using namespace std;
unsigned long long power(int a, int x){
    if (a == 0){
        if (x == 0){
            return INT32_MIN;
        }
        else{
            return 0;
        }
	}
    else if (a == 1 || x == 0){
        return 1;
    }
	else if (x == 1)
		return a;
    else{
        if ((x & 1) == 0){
            unsigned long long var = power(a, x/2);
            return var*var;
        }
        else{
            unsigned long long var = power(a, x/2);
            return a*var*var;
        }   
    }
}
int main(){
    int n;
    unsigned long long ans = 0; 
    cin >> n;
    while (n > 0){
        unsigned long long highestPower = 0;
        while (power(2, highestPower) <= n){
            highestPower++;
        }
        int i = highestPower;
        unsigned long long answer = 1;
        while (--i){
            answer *= 10;
        }
        ans += answer;
        n -= power(2, highestPower-1);
    }
    cout << ans;
    return 0;
}

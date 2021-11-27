// Given k, find the geometric sum i.e.
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double power(double a, int n){
    if (n == 0){
        if (a == 0){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        if (a == 1 || n == 1){
            return a;
        }
        else{
            if (n%2 == 0){
                double ans = power(a, n/2);
                return ans*ans;
            }
            else{
                double ans = power(a, n/2);
                return a*ans*ans;
            }
        }
    }
}
double geometricSum(int k) {
	if (k == 0){
        return 1;
    }
    return power(0.5, k) + geometricSum(k-1);
}
int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}

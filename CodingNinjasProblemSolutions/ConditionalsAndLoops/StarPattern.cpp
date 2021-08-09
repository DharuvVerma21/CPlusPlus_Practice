/* 
 * Print the following pattern
 * Pattern for N = 4
 *    *
 *   ***
 *  *****
 * *******
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1, k;
    while(i <= n){
        k = n-i;
        while(k--){
            cout << " ";
        }
        int j = 1;
        while(j <= (2*i)-1){
            cout << "*";
            j = j+1;
        }
        cout << "\n";
        i = i+1;
    }
    return 0;
}

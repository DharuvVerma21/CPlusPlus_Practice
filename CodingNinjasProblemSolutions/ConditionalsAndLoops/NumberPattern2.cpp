/* 
 * Print the following pattern
 * Pattern for N = 4
 *    1
 *   23
 *  345
 * 4567
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    int a, k;
    while(i <= n){
        k = n-i;
        while(k--){
            cout << " ";
        }
        a = i;
        int j = 1;
        while(j <= i){
            cout << a;
            a = a+1;
            j = j+1;
        }
        cout << "\n";
        i = i+1;
    }
    return 0;
}

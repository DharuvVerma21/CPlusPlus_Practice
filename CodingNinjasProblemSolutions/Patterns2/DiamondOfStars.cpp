/* 
 * Print the following pattern for the given number of rows.
 * Note: N is always odd.
 * Pattern for N = 5
 *   *
 *  ***
 * *****
 *  ***
 *   *
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int n1, n2, j;
    n1 = n/2 +1;
    n2 = n - n1;
    n = n1;
    int i = 1;
    while(i <= n){
        j = 1;
        while(j <= (n-i)){
            cout << " ";
            j++;
        }
        j = 1;
        while(j <= (2*i - 1)){
            cout << "*";
            j++;
        }
        cout << "\n";
        i++;
    }
    i = 1;
    n = n2;
    while(i <= n){
        j = 1;
        while(j <= i){
            cout << " ";
            j++;
        }
        j = 2*(n-i+1)-1;
        while(j > 0){
            cout << "*";
            j--;
        }
        cout << "\n";
        i++;
    }
    return 0;
}

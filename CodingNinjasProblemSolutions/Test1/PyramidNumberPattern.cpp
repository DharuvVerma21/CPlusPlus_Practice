/*
 * Print the following pattern for the given number of rows.
 * Pattern for N = 4
 *    1
 *   212
 *  32123
 * 4321234
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int k = 1;
        while(k <= (n-i)){
            cout << " ";
            k++;
        }
        int j = 1;
        k = i;
        while(j <= i){
            cout << k;
            k--;
            j++;
        }
        j = 1;
        k = 2;
        while(j < i){
            cout << k;
            j++;
            k++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}

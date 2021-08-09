/* 
 * Print the following pattern
 * Pattern for N = 4
 * 1
 * 23
 * 345
 * 4567
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    int k;
    while(i <= n){
        k = i;
        int j = 1;
        while(j <= i){
            cout << k;
            j = j+1;
            k = k+1;
        }
        cout << "\n";
        i = i+1;
    }
}

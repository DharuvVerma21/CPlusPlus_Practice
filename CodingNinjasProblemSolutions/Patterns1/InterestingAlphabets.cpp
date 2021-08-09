/*
 * Print the following pattern for the given number of rows.
 * Pattern for N = 5
 * E
 * DE
 * CDE
 * BCDE
 * ABCDE
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= i){
            cout << char('A'+n+j-i-1);
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

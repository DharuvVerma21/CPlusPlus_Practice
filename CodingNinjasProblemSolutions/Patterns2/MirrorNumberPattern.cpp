/* 
 * Print the following pattern for the given N number of rows.
 * Pattern for N = 4
 *    1
 *   12
 *  123
 * 1234
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
        while(j <= i){
            cout << j;
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}

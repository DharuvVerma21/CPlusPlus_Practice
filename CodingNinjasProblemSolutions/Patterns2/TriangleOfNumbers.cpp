/*
 * Print the following pattern for the given number of rows.
 * Pattern for N = 4
 *    1
 *   232
 *  34543
 * 4567654
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= (n-i)){
            cout << " ";
            j++;
        }
        j = 1;
        int flag = i;
        while(j <= i){
            cout << flag;
            flag++;
            j++;
        }
        j = 2*i-2;
        while(j >= i){
            cout << j;
            j--;
        }
        cout << "\n";
        i++;
    }
    return 0;
}

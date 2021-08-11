/* 
 * Print the following pattern for given number of rows.
 * For N = 5
 * 1234554321
 * 1234**4321
 * 123****321
 * 12******21
 * 1********1
 */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        while(j <= (n-i+1)){
            cout << j;
            j++;
        }
        j = 1;
        while(j <= (2*i - 2)){
            cout << "*";
            j++;
        }
        j = (n-i+1);
        while(j > 0){
            cout << j;
            j--;
        }
        cout << "\n";
        i++;
    }
    return 0;
}

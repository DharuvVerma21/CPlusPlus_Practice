// Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int count = 1;
    for (int i=1; count<=x; i++){
        int num = (3*i)+2;
        if (num%4 != 0){
            cout << num << " ";
            count++;
        }
    }
    return 0;
}

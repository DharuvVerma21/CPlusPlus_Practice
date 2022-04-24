// Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
// Note : The order of strings are not important. Just print different strings in new lines.
#include<iostream>
#include<string>
using namespace std;
string arr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void print_keypad(int n, string output){
    if (n == 0 || n == 1){
        cout << output << '\n';
        return;
    }
    if (n >= 2 && n <= 9){
        for (int i=0; i<arr[n].size(); i++){
            cout << arr[n][i] + output << '\n';
        }
        return;
    }
    int a = n%10;
    if (a == 1 || a == 0){
        cout << "" << '\n';
        return;
    }
    for (int i=0; i<arr[a].size(); i++){
        print_keypad(n/10, arr[a][i]+output);
    }
}
void printKeypad(int num){
    string output = "";
    print_keypad(num, output);
}
int main(){
    int num;
    cin >> num;
    printKeypad(num);
    return 0;
}

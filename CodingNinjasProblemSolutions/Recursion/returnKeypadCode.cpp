// Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
// Return empty string for numbers 0 and 1.
// Note : 1. The order of strings are not important.
//        2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
#include <iostream>
#include <string>
using namespace std;
string arr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
int keypad(int n, string output[]){
    if (n == 0 || n == 1){
        output[0] = "";
        return 1;
    }
    if (n >= 2 && n <= 9){
        for (int i=0; i<arr[n].size(); i++){
            output[i] = arr[n][i];
        }
        return arr[n].size();
    }
    int smallAns = keypad(n/10, output);
    if (smallAns == 1){
        return 1;
    }
    int a = n%10;
    if (a == 0 || a == 1){
        output[0] = "";
        return 1;
    }
    string *aux = new string[smallAns];
    for (int i=0; i<smallAns; i++){
        aux[i] = output[i];
    }
    int k = 0;
    for (int i=0; i<arr[a].size(); i++){
        for (int j=0; j<smallAns; j++){
            output[j+k] = aux[j] + arr[a][i];
        }
        k = k + smallAns;
    }
    delete [] aux;
    return (smallAns*arr[a].size());
}
int main(){
    int num;
    cin >> num;
    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}

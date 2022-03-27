// Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
// For Example - If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".
// The string is compressed only when the repeated character count is more than 1.
#include <iostream>
#include <cstring>
#include<string>
using namespace std;
string getCompressedString(string &input) {
    string str = "";
    int j = 0;
    for (int i=0; i<input.length(); i++){
        if (input[i] != input[j]){
            int diff = i-j;
            if (diff > 1){
                char ch = '0' + diff;
                str = str + input[j] + ch;
                j = j + diff;
                i = j;
            }
            else{
                str = str + input[j];
                j++;
            }
        }
    }
    int diff = input.length()-j;
    if (diff > 1){
        char ch = '0' + diff;
        str = str + input[j] + ch;
    }
    return str;
}
int main() {
    int size = 1e6;
    string str;
    getline(cin, str);
    str = getCompressedString(str);
    cout << str << endl;
}

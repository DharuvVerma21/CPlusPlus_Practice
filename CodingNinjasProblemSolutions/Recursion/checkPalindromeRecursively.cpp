// Check whether a given String S is a palindrome using recursion. Return true or false.

#include <iostream>
using namespace std;
int strlen(char input[]){
    int ans = 0;
    for (int i=0; input[i] != '\0'; i++){
        ans++;
    }
    return ans;
}
bool checkPalindrome(char input[]) {
    int a = strlen(input);
    if (a == 0 || a == 1){
        return true;
    }
    if (input[0] == input[a-1]){
        input[a-1] = '\0';
        return checkPalindrome(input+1);
    }
    return false;
}
int main() {
    char input[50];
    cin >> input;
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

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
bool helperFunction(char input[], int start, int end){
    if ((end-start) == 0 || (end-start) == 1){
        return true;
    }
    if (input[start] == input[end]){
        return helperFunction(input, ++start, --end);
    }
    return false;
}
bool checkPalindrome(char input[]) {
    return helperFunction(input, 0, strlen(input)-1);
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

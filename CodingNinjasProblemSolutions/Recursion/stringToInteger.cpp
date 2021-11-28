// Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.

#include <iostream>
#include<cmath>
using namespace std;
int length(char input[]){
    int ans = 0;
    for (int i=0; input[i] != '\0'; i++){
        ans++;
    }
    return ans;
}
int stringToNumber(char input[]) {
    if (input[0] == '\0'){
        return 0;
    }
    if (input[0] == '0'){
        return stringToNumber(input+1);
    }
    int ans = input[0] - 48;
    int len = length(input)-1;
    ans = ans*(int)pow(10, len);
    return ans + stringToNumber(input+1);
}
int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}

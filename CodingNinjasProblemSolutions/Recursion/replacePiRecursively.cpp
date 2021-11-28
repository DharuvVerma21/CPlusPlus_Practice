// Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

#include <iostream>
using namespace std;
int length(char input[]){
    int ans = 0;
    for (int i=0; input[i] != '\0'; i++){
        ans++;
    }
    return ans;
}
void shiftTwoDigits(char input[]){
    int len = length(input);
    input[len+2] = '\0';
    for (int i=len-1; i>=0; i--){
        input[i+2] = input[i];
    }
}
void replacePi(char input[]) {
    if (input[0] == '\0'){
        return;
    }
    if (input[0] == 'p' && input[1] == 'i'){
        input[0] = '3';
        input[1] = '.';
        shiftTwoDigits(input+2);
        input[2] = '1';
        input[3] = '4';
        return replacePi(input+4);
    }
    return replacePi(input+1);
}
int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}

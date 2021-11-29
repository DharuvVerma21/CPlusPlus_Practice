// Given a string S, remove consecutive duplicates from it recursively.

#include <iostream>
using namespace std;
void shiftBackCharacters(char input[]){
    int i;
    for (i=1; input[i] != '\0'; i++){
        input[i-1] = input[i];
    }
    input[i-1] = '\0';
}
void removeConsecutiveDuplicates(char *input) {
    if (input[0] == '\0'){
        return;
    }
    if (input[0] == input[1]){
        shiftBackCharacters(input);
        return removeConsecutiveDuplicates(input);
    }
    return removeConsecutiveDuplicates(input+1);
}
int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}

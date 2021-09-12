// Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
// There can be multiple spaces present after any word.
#include <iostream>
using namespace std;
void trimSpaces(char input[]) {
    int ptr = 0;
    for (int i=0; input[i] != '\0'; i++){
        if (input[i] != ' '){
            char temp = input[i];
            input[i] = input[ptr];
            input[ptr] = temp;
            ptr++;
        }
    }
    for (int i=0; input[i] != '\0'; i++){
        if (input[i] == ' '){
            input[i] = '\0';
            break;
        }
    }
}
int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

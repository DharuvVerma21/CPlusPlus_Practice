// Given a string, compute recursively a new string where all 'x' chars have been removed.

#include <iostream>
using namespace std;
void shiftCharacters(char input[]){
    int i;
    for (i=1; input[i] != '\0'; i++){
        input[i-1] = input[i];
    }
    input[i-1] = '\0';
}
void removeX(char input[]) {
    if (input[0] == '\0'){
        return;
    }
    if (input[0] == 'x'){
        shiftCharacters(input);
        return removeX(input);
    }
    return removeX(input+1);
}
int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}

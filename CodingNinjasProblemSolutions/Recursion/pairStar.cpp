// Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".

#include <iostream>
#include<cstring>
using namespace std;
void shiftCharacters(char input[]){
    int len = strlen(input);
    input[len+1] = '\0';
    for (int i=len-1; i>=0; i--){
        input[i+1] = input[i];
    }
}
void pairStar(char input[]) {
    if (input[0] == '\0'){
        return;
    }
    if (input[0] == input[1]){
        shiftCharacters(input+1);
        input[1] = '*';
        return pairStar(input+2);
    }
    return pairStar(input+1);
}
int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}

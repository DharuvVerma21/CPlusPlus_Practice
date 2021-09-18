// For a given a string(str) and a character X, write a function to remove all the occurrences of X from the given string.
#include<iostream>
#include<climits>
#define max 1000001
using namespace std;
void removeCharacter(char string[], char x){
    int ptr = 0;
    for (int i=0; string[i] != '\0'; i++){
        if (string[i] != x){
            char temp = string[i];
            string[i] = string[ptr];
            string[ptr] = temp;
            ptr++;
        }
    }
    string[ptr] = '\0';
}
int main(){
    char *string = new char[max];
    cin.getline(string, max);
    char x;
    cin >> x;
    removeCharacter(string, x);
    cout << string << endl;
}

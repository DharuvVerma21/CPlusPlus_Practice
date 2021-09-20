// For a given string(str), remove all the consecutive duplicate characters.
#include<iostream>
#define max 1000001
using namespace std;
void deleteElement(char *string, int index){
    while(string[index] != '\0'){
        string[index] = string[index+1];
        index++;
    }
}
void removeConsecutiveDuplicates(char string[]){
    int i = 0;
    while(string[i] != '\0'){
        if (string[i] == string[i+1]){
            deleteElement(string, i+1);
            continue;
        }
        i++;
    }
}
int main(){
    char *string = new char[max];
    cin.getline(string, max);
    removeConsecutiveDuplicates(string);
    cout << string;
}

// For a given a string(str), find and return the highest occurring character.
#include<iostream>
#include<climits>
#define max 1000001
using namespace std;
int highestOccuringCharacter(char string[]){
    int arr[256] = {};
    for (int i=0; string[i] != '\0'; i++){
        arr[string[i]]++;
    }
    int maximum = arr[0], index = 0;
    for (int i=1; i<256; i++){
        if (arr[i] > maximum){
            maximum = arr[i];
            index = i;
        }
    }
    return index;
}
int main(){
    char *string = new char[max];
    cin.getline(string, max);
    char a = highestOccuringCharacter(string);
    cout << a << endl;
}

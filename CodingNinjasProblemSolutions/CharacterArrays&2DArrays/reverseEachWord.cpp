//Aadil has been provided with a sentence in the form of a string as a function parameter. The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.
#include<iostream>
#include<cstring>
#define max 1000001
using namespace std;
void reverse(char string[], int start, int end){
    while(start < end){
        char temp = string[start];
        string[start] = string[end];
        string[end] = temp;
        start++;
        end--;
    }
}
void reverseEachWord(char string[]){
    int i = 0, j = 0;
    while(string[i] != '\0'){
        if (string[i] == ' '){
            reverse(string, j, i-1);
            j = i + 1;
        }
        i++;
    }
    reverse(string, j, strlen(string)-1);
}
int main(){
    char *string = new char[max];
    cin.getline(string, max);
    reverseEachWord(string);
    cout << string;
}

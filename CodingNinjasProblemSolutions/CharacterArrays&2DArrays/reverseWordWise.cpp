// Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
#include<iostream>
#define max 10000001
using namespace std;
char str[max];
int length(char *string){
   int i = 0;
   while(string[i] != '\0'){
      i++;
   }
   return i;
}
void reverseString(char *string, int start, int end){
   while(start < end){
      char temp = string[start];
      string[start] = string[end];
      string[end] = temp;
      start++;
      end--;
   }
}
void reverseWordByWord(char *string){
   reverseString(string, 0, length(string)-1);
   int i = 0, j = 0;
   while(string[i] != '\0'){
      if (string[i] == ' '){
         reverseString(string, j, i-1);
         j = ++i;
         continue;
      }
      i++;
   }
   reverseString(string, j, length(string)-1);
}
int main(){
   cin.getline(str, max);
   reverseWordByWord(str);
   cout << str;
}

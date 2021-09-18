// Given a string S (that can contain multiple words), you need to find the word which has minimum length.
// Note : If multiple words are of same length, then answer will be first minimum length word in the string.
// Note : Words are seperated by single space only.
#include<iostream>
#include<climits>
#define max 100001
using namespace std;
void minimumLengthWord(char string[]){
   int min = INT32_MAX, minIndex = -1;
   int j = 0, i = 0;
   while(string[i] != '\0'){
      if (string[i] == ' '){
         if ((i-j) < min){
            min = (i-j);
            minIndex = j;
         }
         j = i+1;
      }
      i++;
   }
   for (int i=minIndex; i<(minIndex+min); i++){
      cout << string[i];
   }
}
int main(){
   char *string = new char[max];
   cin.getline(string, max);
   minimumLengthWord(string);
}

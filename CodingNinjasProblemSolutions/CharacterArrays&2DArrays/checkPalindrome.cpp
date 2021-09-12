// Given a string, determine if it is a palindrome, considering only alphanumeric characters.
#include<iostream>
using namespace std;
int length(char *string){
   int i = 0;
   while(string[i] != '\0'){
      i++;
   }
   return i;
}
void lowerCaseString(char *string){
   for (int i=0; string[i] != '\0'; i++){
      if ((string[i] >= 65) && (string[i] <= 90)){
         string[i] += 32;
      }
   }
}
bool isPalin(char *string, int len){
   lowerCaseString(string);
   int start = 0, end = len-1;
   while(start < end){
      if (string[start] != string[end])
         return false;
      start++;
      end--;
   }
   return true;
}
int main(){
   char str[1000000];
   cin >> str;
   int len = length(str);
   if (isPalin(str, len)){
      cout << "True";
      return 0;
   }
   cout << "False";
}

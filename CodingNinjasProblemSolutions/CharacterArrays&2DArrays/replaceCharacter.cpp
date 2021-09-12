// Given an input string S and two characters c1 and c2, you need to replace every occurence of character c1 with character c2 in the given string.
#include<iostream>
using namespace std;
void updateString(char *string, char c1, char c2){
   for (int i=0; string[i] != '\0'; i++){
      if (string[i] == c1){
         string[i] = c2;
      }
   }
}
int main(){
   char str[1000000];
   cin >> str;
   char c1, c2;
   cin >> c1 >> c2;
   updateString(str, c1, c2);
   cout << str;
}

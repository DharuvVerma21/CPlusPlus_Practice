// For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
#include<iostream>
#define max 1000001
using namespace std;
bool stringPermutation(char *string1, char *string2){
   int freqArr[256] = {};
   for (int i=0; string1[i] != '\0'; i++){
      freqArr[string1[i]]++;
   }
   for (int i=0; string2[i] != '\0'; i++){
      freqArr[string2[i]]--;
   }
   for (int i=0; i<256; i++){
      if (freqArr[i] != 0){
         return false;
      }
   }
   return true;
}
int main(){
   char *string1 = new char[max];
   cin.getline(string1, max);
   char *string2 = new char[max];
   cin.getline(string2, max);
   if (stringPermutation(string1, string2)){
      cout << "true";
      return 0;
   }
   cout << "false";
}

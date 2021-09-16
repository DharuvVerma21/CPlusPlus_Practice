// For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
#include<iostream>
#include<cstring>
#define max 1000001
using namespace std;
bool stringPermutation(char *string1, char *string2){
   if (strlen(string1) != strlen(string2)){
      return false;
   }
   bool flag;
   for (int i=0; string1[i] != '\0'; i++){
      flag = false;
      for (int j=0; string2[j] != '\0'; j++){
         if (string1[i] == string2[j]){
            string2[j] = 'A';
            flag = true;
            break;
         }
      }
      if (!flag){
         return false;
      }
   }
   return true;
}
void lowerCase(char *string){
   for (int i=0; string[i] != '\0'; i++){
      if (string[i] >= 'A' && string[i] <= 'Z'){
         string[i] = string[i] + 32;
      }
   }
}
int main(){
   char *string1 = new char[max];
   cin.getline(string1, max);
   char *string2 = new char[max];
   cin.getline(string2, max);
   lowerCase(string1);
   lowerCase(string2);
   if (stringPermutation(string1, string2)){
      cout << "true";
      return 0;
   }
   cout << "false";
}

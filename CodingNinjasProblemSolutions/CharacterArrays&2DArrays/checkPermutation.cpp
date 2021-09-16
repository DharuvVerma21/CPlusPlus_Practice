// For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
#include<iostream>
#include<cstring>
#define max 1000001
using namespace std;
void selectionSort(char *string){
   int start = 0;
   while(string[start+1] != '\0'){
      int index = start, min = string[start];
      for (int i=start+1; string[i] != '\0'; i++){
         if (min > string[i]){
            min = string[i];
            index = i;
         }
      }
      char temp = string[index];
      string[index] = string[start];
      string[start] = temp;
      start++;
   }
}
bool stringPermutation(char *string1, char *string2){
   if (strlen(string1) != strlen(string2)){
      return false;
   }
   selectionSort(string1);
   selectionSort(string2);
   for (int i=0; string1[i] != '\0'; i++){
      if (string1[i] != string2[i]){
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

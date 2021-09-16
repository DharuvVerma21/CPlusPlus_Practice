// For a given input string, write a function to print all the possible substrings.
#include<iostream>
#define max 1000001
using namespace std;
void printString(char *string, int start, int end){
   for (int i=start; i<=end; i++){
      cout << string[i];
   }
   cout << endl;
}
void printAllSubstrings(char *string){
   for (int i=0; string[i] != '\0'; i++){
      for (int j=i; string[j] != '\0'; j++){
         printString(string, i, j);
      }
   }
}
int main(){
   char *string = new char[max];
   cin.getline(string, max);
   printAllSubstrings(string);
}

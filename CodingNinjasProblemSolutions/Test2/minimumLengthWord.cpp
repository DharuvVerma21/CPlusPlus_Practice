// Given a string S (that can contain multiple words), you need to find the word which has minimum length.
#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
void minLengthWord(char input[], char output[]){
    int j = 0, i = 0;
    int min = INT32_MAX, minIndex = -1;
    while(input[i] != '\0'){
        if (input[i] == ' '){
            if (min > (i-j)){
                min = (i-j);
                minIndex = j;
            }
            j = i+1;
        }
        i++;
    }
    if (min > (strlen(input)-j)){
        min = (strlen(input)-j);
        minIndex = j;
    }
    int k = 0;
    for (int i=minIndex; i<(minIndex+min); i++){
        output[k++] = input[i];
    }
    output[k] = '\0';
}
int main(){
  char ch[10000], output[10000];
  cin.getline(ch, 10000);
  minLengthWord(ch, output);
  cout << output << endl;
}

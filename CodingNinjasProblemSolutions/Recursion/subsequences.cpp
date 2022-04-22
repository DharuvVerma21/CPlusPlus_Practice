// Given a string, print all possible subsequences of that string.
#include<iostream>
#define ll long long
using namespace std;
ll power(int a, int x){
    if (a == 0){
        if (x == 0){
            return INT32_MIN;
        }
        return a;
    }
    if (x == 0 || a == 1){
        return 1;
    }
    ll shortAns = power(a, x/2);
    if (x%2 == 0){
        return shortAns*shortAns;
    }
    return a*shortAns*shortAns;
}
ll subsequences(string s, string arr[]){
    if (s.empty()){
        arr[0] = "";
        return 1;
    }
    string s1 = s.substr(1);
    ll size = subsequences(s1, arr);
    for (ll i=0; i<size; i++){
        arr[i+size] = s[0] + arr[i];
    }
    return (2*size);
}
int main(){
    string s;
    cin >> s;
    ll size = power(2, s.size());
    string *arr = new string[size];
    size = subsequences(s, arr);
    for (ll i=0; i<size; i++){
        cout << arr[i] << '\n';
    }
    delete [] arr;
}

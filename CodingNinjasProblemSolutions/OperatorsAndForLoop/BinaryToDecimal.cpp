// Given a binary number as an integer N, convert it into decimal and print.
#include<iostream>
using namespace std;
int power(int a, int x){
    if (a == 0){
        if (x == 0){
            return INT32_MIN;
        }
        else{
            return 0;
        }
    }
    else if (a == 1 || x == 0){
        return 1;
    }
    else if (x == 1){
        return a;
    }
    else{
        if ((x & 1) == 0){
            int var = power(a, x/2);
            return var*var;
        }
        else{
            int var = power(a, x/2);
            return var*var*a;
        }
    }
}
int main(){
    int bin, count = 0;
    int num = 0;
    cin >> bin;
    while (bin > 0){
        if(bin%10 == 1){
            num += (power(2, count));
        }
        count++;
        bin /= 10;
    }
    cout << num;
    return 0;
}

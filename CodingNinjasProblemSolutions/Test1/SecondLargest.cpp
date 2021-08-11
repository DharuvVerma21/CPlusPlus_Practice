// Take input a stream of n integer elements, find the second largest element present.
// The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
#include<iostream>
using namespace std;
int main(){
    int n, a, max, sec_max = INT32_MIN;
    cin >> n;
    int i = 1;
    while(i <= n){
        cin >> a;
        if (i == 1){
            max = a;
        }
        else{
            if (a > max){
                sec_max = max;
                max = a;
            }
            else if (a > sec_max && a != max)
                sec_max = a;
        }
        i++;
    }
    cout << sec_max;
    return 0;
}

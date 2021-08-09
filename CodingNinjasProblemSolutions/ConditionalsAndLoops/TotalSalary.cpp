// Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
// totalSalary = basic + hra + da + allow – pf
#include<iostream>
using namespace std;
int roundoff(double x){
    if (x >= 0)
        int a = x;
    else
        int a = x - 1;
    double b = x-a;
    b = b*100;
    if (b < 50){
        return a;
    }
    else{
        return a+1;
    }
}
int main(){
    int basic;
    char grade;
    cin >> basic >> grade;
    double hra = basic/5.0;
    double da = basic/2.0;
    double pf = basic*0.11;
    int allow;
    switch(grade){
        case 65:
            allow = 1700;
            break;
        case 66:
            allow = 1500;
            break;
        default:
            allow = 1300;
    }
    double total_sal = basic + hra + da + allow - pf;
    cout << roundoff(total_sal);
    return 0;
}

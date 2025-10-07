//reverse the digits of a number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number you want to reverse: ";
    cin>>num;
    while(num>0){
    int last_digit=num%10;
    num=num/10;
    int reverse=0;
    reverse+=last_digit;
    cout<<reverse;
}
    return 0;
}

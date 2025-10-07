//finding the sum of digits in a given number n
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number you want the sum of digits of: ";
    cin>>num;
    int sum=0;
    while(num>0){
       int last_digit=num%10;
       sum+=last_digit;
       num=num/10;
    }
    cout<<sum<<endl;
    return 0;
}

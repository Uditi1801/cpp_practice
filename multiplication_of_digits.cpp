//finding the multiplication of the digits of a number
#include<iostream>
using namespace std;
int main(){
    int n, multiplication=1;
    cout<<"enter a number you want the multiplication of digits of:";
    cin>>n;
    if(n<0){
        n=-n;
    }
    if(n==0){
        multiplication=0;
    }
    else{
        while(n>0){
           int digit= n%10;
            n=n/10;
            multiplication*=digit;
        }
    }
    cout<<"the multplication of the digits is:"<<multiplication<<endl;
    return 0;
}

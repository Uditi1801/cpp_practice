#include<iostream>
using namespace std;
bool isPrime(int n){
    if (n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout<<"enter a number you want to check if it is prime or not:";
    cin>>num;
    if(isPrime(num)){
        cout<<num <<"the given number is a prime number"<<endl;
    }
    else{
        cout<<num<<"the given number is not a prime number"<<endl;
    }
}

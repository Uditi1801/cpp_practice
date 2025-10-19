#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"enter a number: ";
    cin>>n;
    if(n<0){
        n=-n;
    }
    if( n==0){
        count=1;
    }
    else{
        while(n>0){
            n=n/10;
            count++;
        }
    }
    cout<<"no. of digits:"<< count<<endl;
    return 0;
}

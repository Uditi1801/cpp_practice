#include<iostream>
using namespace std;
int main(){
    cout<<"enter the number: ";
    int num;
    cin>>num;
    int digit=0;
    while(num>0){
        digit++;
        num=num/10;
    }
    cout<<digit<<endl;
}

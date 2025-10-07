//sum of a series even numbers get subtracted whereas the odd ones get added
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number till where you want to find the sum:";
    cin>>num;
    int sum=0;
    for(int i=0;i<=num;i++){
     if(i%2==0){
        sum-=i;
    }
    else{
        sum+=i;   
    }
    
    }
    cout<<sum;
    return 0;
}

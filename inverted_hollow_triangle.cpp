//hollow inverted right angled triangle
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number of rows you want your rectangle to have:";
    cin>>num;
    for (int i=1; i<=num; i++){
        for(int j=1; j<=num-i+1;j++){
            if(i==1||j==num-i+1||j==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

//Pattern 2-Row number repeats
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the number of rows: ";
    cin>>m;
    cout<<"enter the number of columns: ";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1; j<=n; j++){
            cout<<i;
        }
        cout<<endl;
    }
}

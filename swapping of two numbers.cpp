#include <iostream>
using namespace std;
int main(){
    int a=12,b=123;
    int temp=a;
    a=b;
    b=temp;
    cout<<"a:"<< a<<",b:"<<b<<endl;
    return 0;
}

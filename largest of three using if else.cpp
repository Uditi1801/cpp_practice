#include<iostream>
using namespace std;
int main(){
  int num1,num2,num3;
cout<<"enter the first number:";
cin>>num1;
cout<<"enter the second numeber:";
cin>>num2;
cout<<"enter the third number:";
cin>>num3;
if(num1>num2 && num2>num3){
cout<<"the first number is the greatest";
}
else if (num2>num3 && num2>num1){
cout<<"the second number is the greatest";
}
else{
cout<<"the third number is the greatest";
}
return 0;
}

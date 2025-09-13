//checking if a string is palindrome or not 
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string str;
 cout<<"enter a string:";
cin>>str;
string rev=str;
reverse(rev.begin(),rev.end());
if (str==rev){
cout<<"the given string is a palindrome";
}
else {
  cout<<"the given string is not a palindrome";
}
return 0;
}

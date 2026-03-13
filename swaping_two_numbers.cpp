#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"what is the value of a:\n";
    cin>>a;
    cout<<"what is the value of b:\n";
    cin>>b;
   int c;
   c=b;
   b=a;
   a=c;
  
cout<<"the value of a :\n"<<a;
cout<<"\nthe value of b:\n"<<b;


    return 0;
}
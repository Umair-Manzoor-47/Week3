#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"enter age"<<endl;
cin>>a;
int b;
cout<<"price of machine"<<endl;
cin>>b;
int c;
cout<<"enter price of toy"<<endl;
cin>>c;
int r=0;
int s=0;
int z;
int h;
for(int x=1; x<=a; x=x+1){
if(a%2==0){
r=r+10;
s=(s+r)-1;
if(a%2!=0){
r=r+c;
}}}
z=s+r;
if(z>=b){
h=z-b;
cout<<h<<endl;;
cout<<"amount is enough"<<endl;
}else{cout<<"amount is not enough"<<endl;}
return 0;
}
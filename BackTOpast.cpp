#include<iostream>
using namespace std;
int main()
{
float x;
cout<<"enter amount"<<endl;
cin>>x;
int ny;
cout<<"enter year"<<endl;
cin>>ny;
int s=19;
int r;
float m,n;
for(int y=1801; y<=ny; y=y+1){
if(ny%2==0){
x=x-12000;
if(ny%2!=0){
x=x-(12000+(50*s));
s=s+2;
}}}cout<<r<<endl;
if(r>=0){cout<<"m"<<endl;
}else{cout<<"n"<<endl;}

return 0;
}
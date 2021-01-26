#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
cout<<"********************************"<<endl; 
cout<<"  univeristy managment system"<<endl;
cout<<"********************************"<<endl;
cout<<endl;
string n1,n2,n3;
float m1,f1,e1,a1,m2,f2,e2,a2,m3,f3,e3,a3;
int option=-1; //initializing with some value not equal
cin>>option;
while(option!=4){
int user=0; 
if(option==1){
system("CLS");
cout<<"add student record"<<endl;
int user=0;
user=user+1;
if(user==1){
cin>>n1;
cin>>m1;
cin>>f1;
cin>>e1;
a1=((m1/1100)*(0.25)+(f1/1100)*(0.45)+(e1/400)*(0.30))*100;
cout<<n1<<m1<<f1<<e1<<a1<<endl;}

if(user==2){
cin>>n2;
cin>>m2;
cin>>f2;
cin>>e2;
a2=((m2/1100)*(0.25)+(f2/1100)*(0.45)+(e2/400)*(0.30))*100;
cout<<n2<<m2<<f2<<e2<<a2<<endl;}

if(user==3){
cin>>n3;
cin>>m3;
cin>>f3;
cin>>e3;
a3=((m3/1100)*(0.25)+(f3/1100)*(0.45)+(e3/400)*(0.30))*100;
cout<<n3<<m3<<f3<<e3<<a3<<endl;}

getch();}

if(option==2){
system("CLS");
cout<<"view all records"<<endl;
cout<<n1<<m1<<f1<<e1<<a1<<endl;
cout<<n2<<m2<<f2<<e2<<a2<<endl;
cout<<n3<<m3<<f3<<e3<<a3<<endl;
}
}
return 0;
}
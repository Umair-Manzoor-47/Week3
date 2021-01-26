#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
    system("CLS");
    cout<<endl;
    cout<<"***********************************"<<endl;
    cout<<"  Secret Services Portal"<<endl;
    cout<<"***********************************"<<endl;
    string an,n1,n2,n3,am,m1,m2,m3;
    string ap, p1, p2,p3; 
    string admin="admin";
    string Pin="123";
    int option=1;
    int first=1;
    while(true){
cout<<"Enter Username"<<endl;
cin>>an;
cout<<"pin"<<endl;
cin>>ap;

if(admin==an && Pin==ap){

while(option!=4){
system("CLS");
    cout<<"1.add new agent"<<endl;
cout<<"2.view all record"<<endl;
cout<<"3.changes"<<endl;
cout<<"4.log out"<<endl;
cin>>option;

getch();
if(option==1){
system("CLS");
    cout<<"add new agent"<<endl;
    if(first==1){
    cout<<" user name"<<endl;
    cin>>n1;
    cout<<"password"<<endl;
    cin>>p1;
first=first+1;
getch();
    }

      if(first==2){
    cout<<" user name"<<endl;
    cin>>n2;
    cout<<"password"<<endl;
    cin>>p2;
    first=first+1;
getch();
}
      if(first==3){
    cout<<" user name"<<endl;
    cin>>n3;
    cout<<"password"<<endl;
    cin>>p1;
    getch();}
}  
      if(option==2){
          cout<<"1.view all record"<<endl;
          cout<<n1<<"\t"<<p1<<endl;
          cout<<n2<<"\t"<<p2<<endl;
           cout<<n3<<"\t"<<p3<<endl;
      }
      if(option==3){
string changename;
cout<<"enter name"<<endl;
cin>>changename;
if(changename==n1){
string newpin;
cout<<"enter the new pin"<<endl;
cin>>newpin;
p1=newpin;}
else if(changename==n2){
string newpin;
cout<<"enter the new pin"<<endl;
cin>>newpin;
p2=newpin;
}
else if(changename==n3){
string newpin;
cout<<"enter the new pin"<<endl;
cin>>newpin;
p3=newpin;}
else{cout<<"user is not correct"<<endl;
}      
cout<<"press any key to continue"<<endl;
getch();
}
if(option==4){
getch();
}
  
}
}
else{
cout<<"invalid login id"<<endl;}
}
}
#include<iostream>
using namespace std;
int main(){
int number;
int Binary;
cout<<"enter the number ->";
cin>>number;
while(number!=0){
Binary=number%2;
cout<<Binary;
number=number/2;
}
}
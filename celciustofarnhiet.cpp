#include<iostream>
#include<string>
using namespace std;
int main(){
    string Lahore,ISB,ShakP,FSBD,Mltn,Peshawar,Kohat,Khn,Gjrt,bhl;
    float Lahoret,ISBt,ShakPt,FSBDt,Mltnt,Peshawart,Kohatt,Khnt,Gjrtt,bhlt;
    float x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
    float y1,y2,y3,y4,y5,y6,y7,y8,y9,y10;
    int option;
    cout<<"Enter OPtion ->";
    cin>>option;
 
if(option==1){
    cout<<"farhite to celcius"<<endl;
    cout<<"enter city ->"<<endl;
    cin>>Lahore;
    cout<<"enter temperature"<<endl;
    cin>>Lahoret;
x1=5/9*(Lahoret-32);
    cout<<Lahore<<"\t"<<x1<<endl;
    cout<<"enter city"<<endl;
    cin>>ISB;
    cout<<"enter temperature"<<endl;
    cin>>ISBt;
x2=5/9*(ISBt-32);
    cout<<ISB<<"\t"<<x2<<endl;  
     cout<<"enter city"<<endl;
    cin>>ShakP;
    cout<<"enter temperature"<<endl;
    cin>>ShakPt;
x3=5/9*(ShakPt-32);
    cout<<ShakP<<"\t"<<x2<<endl; 
     
     cout<<"enter city"<<endl;
    cin>>FSBD;
    cout<<"enter temperature"<<endl;
    cin>>FSBDt;
x4=5/9*(FSBDt-32);
    cout<<FSBD<<"\t"<<x2<<endl; 
     cout<<"enter city"<<endl;
    cin>>Mltn;
    cout<<"enter temperature"<<endl;
    cin>>Mltnt;
x5=5/9*(Mltnt-32);
    cout<<Mltn<<"\t"<<x2<<endl; 
     cout<<"enter city"<<endl;
    cin>>Peshawar;
    cout<<"enter temperature"<<endl;
    cin>>Peshawart;
x6=5/9*(Peshawart-32);
    cout<<Peshawar<<"\t"<<x2<<endl; 
     cout<<"enter city"<<endl;
    cin>>Kohat;
    cout<<"enter temperature"<<endl;
    cin>>Kohatt;
x7=5/9*(Kohatt-32);
    cout<<Kohat<<"\t"<<x2<<endl; 
     cout<<"enter city"<<endl;
    cin>>Khn;
    cout<<"enter temperature"<<endl;
    cin>>Khnt;
x8=5/9*(Khnt-32);
    cout<<Khn<<"\t"<<x2<<endl; 
     cout<<"enter city"<<endl;
    cin>>Gjrt;
    cout<<"enter temperature"<<endl;
    cin>>Gjrtt;
x9=5/9*(Gjrtt-32);
    cout<<"Gjrt"<<"\t"<<x2<<endl; 
     cout<<"enter city"<<endl;
    cin>>bhl;
    cout<<"enter temperature"<<endl;
    cin>>bhlt;
x10=5/9*(bhlt-32);
    cout<<bhl<<"\t"<<x2<<endl; 
if(x1>x2 && x1>x3 && x1>4 && x1>x5 && x1>x6 && x1>x7 && x1>x8 && x1>x9 && x1>x10){
cout<<x1<<endl;}
else if(x2>x1 && x2>x3 && x2>x4 && x2>x5 && x2>x6 && x2>x7 && x2>x8 && x2>x9 && x2>x10){
cout<<x2<<endl;}
else if(x3>x1 && x3>x2 && x3>x4 && x3>x5 && x3>x6 && x3>x7 && x3>x8 && x3>x9 && x3>x10){
cout<<x3<<endl;}
else if(x4>x1 && x4>x3 && x4>x2 && x4>x5 && x4>x6 && x4>x7 && x4>x8 && x4>x9 && x4>x10){
cout<<x4<<endl;}
else if(x5>x1 && x5>x3 && x5>x4 && x5>x2 && x5>x6 && x5>x7 && x5>x8 && x5>x9 && x5>x10){
cout<<x5<<endl;}
else if(x6>x1 && x6>x3 && x6>x4 && x6>x5 && x6>x2 && x6>x7 && x6>x8 && x6>x9 && x6>x10){
cout<<x6<<endl;}
else if(x7>x1 && x7>x3 && x7>x4 && x7>x5 && x7>x6 && x7>x2 && x7>x8 && x7>x9 && x7>x10){
cout<<x7<<endl;}
else if(x8>x1 && x8>x3 && x8>x4 && x8>x5 && x8>x6 && x8>x7 && x8>x2 && x8>x9 && x8>x10){
cout<<x8<<endl;}
else if(x9>x1 && x9>x3 && x9>x4 && x9>x5 && x9>x6 && x9>x7 && x9>x8 && x9>x2 && x9>x10){
cout<<x9<<endl;}
else if(x10>x1 && x10>x3 && x10>x4 && x10>x5 && x10>x6 && x10>x7 && x10>x8 && x10>x9 && x10>x2){
cout<<x10<<endl;}

}
if(option==2){
cout<<"celcius to farnhite"<<endl;
cout<<"enter city";
    cin>>Lahore;
    cout<<"enter temperature"<<endl;
    cin>>Lahoret;
y1=9/5*Lahoret+32;
    cout<<Lahore<<"\t"<<x1<<endl;
    cout<<"enter city"<<endl;
    cin>>ISB;
    cout<<"enter temperature"<<endl;
    cin>>ISBt;
y2=9/5*ISBt+32;
    cout<<ISB<<"\t"<<x2<<endl;  
     cout<<"enter city"<<endl;
    cin>>ShakP;
    cout<<"enter temperature"<<endl;
    cin>>ShakPt;
y3=9/5*ShakPt+32;
    cout<<ShakP<<"\t"<<x2<<endl; 
     cout<<"enter city"<<endl;
    cin>>FSBD;
    cout<<"enter temperature"<<endl;
    cin>>FSBDt;
y4=9/5*FSBDt+32;
    cout<<FSBD<<"\t"<<x2<<endl; 
      
     cout<<"enter city"<<endl;
    cin>>Mltn;
    cout<<"enter temperature"<<endl;
    cin>>Mltnt;
y5=9/5*Mltnt+32;
    cout<<"Mltn"<<"\t"<<x2<<endl; 
     cout<<"enter city"<<endl;
    cin>>Peshawar;
    cout<<"enter temperature"<<endl;
    cin>>Peshawart;
y6=9/5*Peshawart+32;
    cout<<"Peshawar"<<"\t"<<x2<<endl; 
     cout<<"enter city"<<endl;
    cin>>Kohat;
    cout<<"enter temperature"<<endl;
    cin>>Kohatt;
y7=9/5*Kohatt+32;
    cout<<"Kohat"<<"\t"<<x2<<endl;
     cout<<"enter city"<<endl;
    cin>>Khn;
    cout<<"enter temperature"<<endl;
    cin>>Khnt;
y8=9/5*Khnt-32;
    cout<<"Khn"<<"\t"<<x2<<endl; 
     cout<<"enter city"<<endl;
    cin>>Gjrt;
    cout<<"enter temperature"<<endl;
    cin>>Gjrtt;
y9=9/5*Gjrtt+32;
    cout<<"Gjrt"<<"\t"<<x2<<endl; 
     cout<<"enter city"<<endl;
    cin>>bhl;
    cout<<"enter temperature"<<endl;
    cin>>bhlt;
y10=9/5*bhlt+32;
    cout<<"bhl"<<"\t"<<x2<<endl; 
if(y1>y2 && y1>y3 && y1>y4 && y1>y5 && y1>y6 && y1>y7 && y1>y8 && y1>y9 && y1>y10){
cout<<y1<<endl;}
else if(y2>y1 && y2>y3 && y2>y4 && y2>y5 && y2>y6 && y2>y7 && y2>y8 && y2>y9 && y2>y10){
cout<<y2<<endl;}
else if(y3>y1 && y3>y2 && y3>y4 && y3>y5 && y3>y6 && y3>y7 && y3>y8 && y3>y9 && y3>y10){
cout<<y3<<endl;}
else if(y4>y1 && y4>y3 && y4>y2 && y4>y5 && y4>y6 && y4>y7 && y4>y8 && y4>y9 && y4>y10){
cout<<y2<<endl;}
else if(y5>y1 && y5>y3 && y5>y4 && y5>y2 && y5>y6 && y5>y7 && y5>y8 && y5>y9 && y5>y10){
cout<<y5<<endl;}
else if(y6>y1 && y6>y3 && y6>y4 && y6>y5 && y6>y2 && y6>y7 && y6>y8 && y6>y9 && y6>y10){
cout<<y6<<endl;}
else if(y7>y1 && y7>y3 && y7>y4 && y7>y5 && y7>y6 && y7>y2 && y7>y8 && y7>y9 && y7>y10){
cout<<y7<<endl;}
else if(y8>y1 && y8>y3 && y8>y4 && y8>y5 && y8>y6 && y8>y7 && y8>y2 && y8>y9 && y8>y10){
cout<<y8<<endl;}
else if(y9>y1 && y9>y3 && y9>y4 && y9>y5 && y9>y6 && y9>y7 && y9>y8 && y9>y2 && y9>y10){
cout<<y2<<endl;}
else if(y10>y1 && y10>y3 && y10>y4 && y10>y5 && y10>y6 && y10>y7 && y10>y8 && y10>y9 && y10>y2){
cout<<y10<<endl;}
}
return 0;
}

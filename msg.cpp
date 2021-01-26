#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    int total=1,tmessages=1;
    string username,superagent="admin",agent1,agent2,agent3,user,user1,user2,user3,message,message1,message2,message3,agen="";
    string re1="",re2="",re3="";
    string se1="",se2="",se3="";
    int pass,opt,pass1,pass2,pass3,newpass1,newpass2,newpass3;
	while(true){    
        system("CLS");
        cout<<"****************************************************************"<<endl;
        cout<<"Enter Username = ";
        cin>>username;
        cout<<"Pin = ";
        cin>>pass;
        cout<<"****************************************************************"<<endl;
    if(username==superagent && pass==1234){
	
    while (opt!=4)
    {
        
    system("CLS");
        
        cout<<"1:Add new AGENT.."<<endl;
        cout<<"2:view all AGENTS.."<<endl;
        cout<<"3:Change Password.."<<endl;        
        cout<<"4:Logout.."<<endl;
        cout<<"Enter command..";
        cin>>opt;
        if(opt==1){
            if(total==1){
                    cout<<"Name(username) of Agent..";
                    cin>>agent1;
                    cout<<"Password for agent..";
                    cin>>pass1;
                    cout<<"AGENT Status:ACTIVE.."<<endl;
                    getch();
                    total=total+1;
            }  
          else if(total==2){
                cout<<"Name(username) of Agent..";
                    cin>>agent2;
                    cout<<"Password for agent..";
                    cin>>pass2;
                    cout<<"AGENT Status:ACTIVE.."<<endl;
                    getch();
                    total=total+1;
            }
          else if(total==3){cout<<"Name(username) of Agent..";
                    cin>>agent3;
                    cout<<"Password for agent..";
                    cin>>pass3;
                    cout<<"AGENT Status:ACTIVE.."<<endl;
                    getch();
                    total=total+1;}
           else if (total==4)
            {
            total=1;
            }

		}


    
if(opt==2){

          cout<<"NAME"<<"\t"<<"PASSWORD"<<endl;
          cout<<agent1<<"\t"<<pass1<<endl;
	      cout<<agent2<<"\t"<<pass2<<endl;
	      cout<<agent3<<"\t"<<pass3<<endl;
	cout<<"Press any key";
	getch();
 
}
if(opt==3){
cout<<"Enter agent's name:";
cin>>user;
if(user==agent1){
cout<<"Enter new password";
cin>>pass1;
cout<<"password changed"<<endl;}
if(user==agent2){
cout<<"Enter new password..";
cin>>pass2;
cout<<"password changed"<<endl;}
if(user==agent3){
cout<<"Enter new password";
cin>>pass3;
cout<<"password changed"<<endl;
}
getch();


}
  
          } 
    }     
else{

    
if(username==agent1 && pass==pass1){
    agen=agent1;
}
 if(username==agent2 && pass==pass2){
    agen=agent2;
}
 if(username==agent3 && pass==pass3){
    agen=agent3;
}
 if (agen=="")
 {
    cout<<"NOT AUTHORIZED"<<endl; 
 }
 if(agen!=""){
system("CLS");
while (opt!=3)
{
system("CLS");
    cout<<"Welcome AGENT"<<endl;
    cout<<"1.Send Message.."<<endl;
    cout<<"2.Read Message.."<<endl;
    cout<<"3.Log out.."<<endl;
    cout<<"Enter Command..";
    cin>>opt; 
if (opt==1)
{ 
    string msg,receiver;
    cout<<"Enter Receiver's Name..";
    cin>>receiver;
    cout <<"Enter Message ..";
    cin>>msg;
    tmessages=tmessages+1;
    
    if(tmessages==1){
        message1=msg;
        re1=receiver;
        se1=agen;
        tmessages=tmessages + 1;

    }
    if(tmessages==2){
        message2=msg;
        re2=receiver;
        se2=agen;
    tmessages=tmessages + 1;
    }
    if(tmessages==3){
        message3=msg;
        re3=receiver;
        se3=agen;
    tmessages=tmessages + 1;
    }
    if(tmessages==4){
        tmessages=1;
    }
}
if (opt==2)
{
if (agen==re1)
{cout<<se1<<" Says --";
cout<<message1<<endl;
}
if (agen==re2)
{cout<<se2<<" Says --";
cout<<message2<<endl;
    
}
if (agen==re3)
{cout<<se3<<" Says --";
cout<<message3<<endl;
    
}
cout<<"Press any key to continue.."<<endl;
getch();

    
      }
     }
    }
   }
  }
}




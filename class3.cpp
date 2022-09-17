//Vedarth khandve 
//SE B AI&DS 26
#include<iostream>
#include<string>
using namespace std;

class data
{
       char n[50],g[6],add[50];
       int r,a;
               void getdata();
               void display();
}c;

       
       public :
void data :: getdata()
{s
           cout<<"Enter name : ";
     		  cin.getline(n,50);
           
           cout<<"Enter add : ";
     		  cin.getline(add,50);
           
            cout<<"Enter age : ";
           cin>>a;
           
            cout<<"Enter roll no. : ";
           cin>>r;
           
            cout<<"Enter gender : ";
           cin>>g;
}
void data :: display()
{
          cout<<"\nName : "<<n;
          cout<<"\naddress : "<<add;
          cout<<"\nAge : "<<a;
          cout<<"\nRoll no. : "<<r;
          cout<<"\nGender : "<<g<<endl;
}

int main()
{
        c.getdata();
        c.display();
        
        return 0;
}
//done


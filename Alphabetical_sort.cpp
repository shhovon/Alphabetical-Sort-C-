/*

MAKE SURE TO CHECK OUT MY SOCIAL MEDIAS

WWW.LINKTR.EE/SHHOVON

*/



#include <iostream>
#include<string.h>
using namespace std;

struct emp
{
     char name[50];
     char gender[50];
     char salary[50];
}s[100];

int main()
{
     struct emp t;
     int i=0,j=0,n;
     cout<<"Number of Employees: ";
     cin>>n;
     cout<<endl;
     for(i=0;i<n;i++)
     {
          cout<<"\nEnter The Following Details For Employee"<<" "<<i+1<<" :";
          cout<<endl;
          cout<<"Name: ";
          cin>>s[i].name;
          cout<<"Gender:(M/F) ";
          cin>>s[i].gender;
          cout<<"Salary: ";
          cin>>s[i].salary;
     }
     cout<<endl;

     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
               if(strcmp(s[i].name,s[j].name)>0)
               {
                    t=s[i];
                    s[i]=s[j];
                    s[j]=t;
               }
          }
     }
     cout<<"Employee Information After Rearranging Alphabetically:";
     cout<<"\n\n";

     for(i=0;i<n;i++)
     {
          cout<<"Name: "<<s[i].name<<"\n"<<"Gender: "<<s[i].gender<<"\n"<<"Salary: "<<s[i].salary<<"\n\n";
     }
     return 0;
}



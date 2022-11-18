#include <iostream>
#include<string.h>
using namespace std;
int main()
{
   int i,j,t;
   char s[10];
   cout<<"enter s"<<endl;
   cin>>s;
   for(i=0;s[i];i++);
   for(i=i-1,j=0;i>j;i--,j++)
   {
       t=s[i];
       s[i]=s[j];
       s[j]=t;
   }
   cout<<s<<endl;
}

#include<iostream>
#include<math.h>
using namespace std;

 
bool ispoweroftwo(int n){
  
cin>>n;
for (int i = 0; i <=30; i++)
{
   int ans=pow(2,i);
   if (ans==n)
   {
       return true;
   }
   
}
return false;
}

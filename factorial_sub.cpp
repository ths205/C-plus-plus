//This is a program used to calculate the subfactorial of a positive
//integer using Recursion
 
#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
    
int factorial_sub(int n);
   
int main()
{
//cout<<factorial_sub(6)<<"\n";
int x;
cout<<"Enter a positive integer greater than 1"<<"\n";
cin>>x;
cout<<factorial_sub(x)<<"\n";
   
return 0;
}
    
int factorial_sub(int n)
{
   if(!cin || n<1)
   {
   cout<<"You entered an integer less than 1 or wrong input\n";
   exit(0);
   }

   if(n==1)
   {
     return 0;
   }

   if (n==2)
   {
     return 1;
   }
   return n*factorial_sub(n-1) +pow(-1,n);

}

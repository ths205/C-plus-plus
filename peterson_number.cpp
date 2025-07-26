//This program checks if a user types in a Peterson number or not
#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;
int factorial( int n);
string peterson_num(vector<int> d, int n);
int main() 
{ 

int num; 
cout<<"Enter a positive integer to check if a number is a peterson number"<<"\n";
cin>>num;  
  
if(num<=0 || !cin)
{
cout<<"You either entered a negative integer or invalid input.";
exit(0);
}
 
 string num_str=to_string(num);
 vector<int> peterson_vect;
 peterson_vect.clear();
 for( int i=0; i<num_str.length(); i++)
 { 
   peterson_vect.push_back(num_str[i]);
   //cout<<num_str[i]<<"\n";
   
 }
cout<<peterson_num(peterson_vect,num);
return 0;
}

int factorial(int n)
{
 if(n==0 || n==1)
 {
  return 1;
 }

 if(n==2)
 {
  return 2;
 }

 return n*factorial(n-1);
}

string peterson_num(vector<int> d, int n)
{
  int total_num_fact=0;
  int p_size=d.size();
  //vector<int>:: iterator j;
  for(int j=0; j < p_size; j++)
  {
   //cout<<int(d[j])<<"\n";
   //Minus '0' from d[j] to get the integer number
   total_num_fact += factorial(d[j]-'0');
  

  }
 

  if(n==total_num_fact)
  {
   return to_string(n)+" is a Peterson number.";
  }
  //cout<<total_num_fact<<"\n";
  return to_string(n)+" is not a Peterson number.";
}

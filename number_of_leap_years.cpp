#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{

int num_of_leap_years=0;

int year_input;
cout<<"Please type in a year\n";
cin>>year_input;

if( !cin || year_input <0)
{
cout<<"Please type a integer that is positive\n";
exit(1);
}

while(num_of_leap_years < 20)
{
  if((year_input%4==0 && year_input%100 !=0) || year_input%400==0)
  {

     cout<<year_input<<"\n";
     num_of_leap_years+=1;



  }




        year_input+=1;

}


return 0;
}

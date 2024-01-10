#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

float babylonian_find_square_root(int x_0,int  s, int decimal_places);

int main()
{
  int s;
  cout<<"Please enter a positive interger you wish to get the square root of\n";
  cin>>s;

  int x_0;
   cout<<"Please enter a positive interger you wish to make as your initial guess\n";
  cin>>x_0;

  int decimal_places;
   cout<<"Please enter a positive interger you wish to make as the number of decimal places\n";
  cin>>decimal_places;

  if( !cin)
  {
   cout<<"You've entered bad data as your root.Please enter a positive inter to get the square root of.\n";
   exit(0);
  }

  cout<<babylonian_find_square_root( x_0,s, decimal_places);

return 0;
}

float babylonian_find_square_root(int x_0,int  s, int decimal_places)
{
  if( x_0==0)
  {
   cout<<"You entered zero as your guess.Please enter a positive integer as your guess.\n";
   exit(0);
  }
  
  if( !cin )
  {
   cout<<"You've entered either an initial guess, root you want the square root of or decimal places that are not positive integers.\n";
   exit(0);
  }

  if( x_0 < 0 || s < 0 || decimal_places < 0)
  {
   cout<<"You've entered either an initial guess, root you want the square root of or decimal places that are negative integers.\n";
   exit(0);
  }
   
   float x_new = float( (x_0 + (s / x_0 ) )/2 );
   if ( abs(x_0 - x_new) < pow( 10, -decimal_places) )
   {
      return x_new;
   }

   return babylonian_find_square_root(x_new, s, decimal_places);
 

}

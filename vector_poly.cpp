#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
void add_polynomials(vector<int> p_1, vector<int> p_2);
void subtract_polynomials(vector<int> p_1, vector<int> p_2);
void scalar_multiplication(vector<int> p_1, const int scalar);
void poly_multiplication(vector<int> p_1, vector<int> p_2 );
int main()
{
int order;
cout<<"Enter an integer that will represent an nth order polynoial"<<"\n";
cin>>order;
int order_2;
cout<<"Enter an integer that will represent an nth order of a second polynoial"<<"\n";
cin>>order_2;
if(order< 0|| order_2 <0 || !cin)
{
 cout<<"Either you entered a negative order,"<<
       "very large int input, or non integer input"<<"\n";
        exit(1);
}
vector<int>poly_1;
int coefficient;
cout<<"Enter coefficients for polynomial_1"<<"\n";
for(int i=0; i< order+1; i++)
{
   cin>>coefficient;
   if(!cin)
   {
     cout<<"Either you entered a negative order,"<<
       "very large int input, or non integer input"<<"\n";
        exit(1);

   }
   poly_1.push_back(coefficient);
}
vector<int>poly_2;
int coefficient_2;
cout<<"Enter coefficients for polynomial_2"<<"\n";
for(int j=0; j<=order_2; j++)
{
  cin>>coefficient_2;

  if(!cin)
  {
   cout<<"Either you entered a negative order,"<<
       "very large int input, or non integer input"<<"\n";
        exit(1);
       
  }
   //cin>>coefficient_2;
poly_2.push_back(coefficient_2);
}
add_polynomials(poly_1,poly_2);
subtract_polynomials(poly_1,poly_2);
scalar_multiplication(poly_1,5);
return 0;
}

void add_polynomials(vector<int> p_1, vector<int> p_2)
{
   int max_size=p_1.size();
   int min_size=p_2.size();
      if(p_1.size()<p_2.size())
      {
         max_size=p_2.size();
         min_size=p_1.size();
      }
      
      int temp;
      vector<int>add_vector;
      for(int i=0; i < max_size; i++)
      {
        temp=p_1[i];
        add_vector.push_back(temp);
      }
       int temp_2;
      for(int j=0; j< min_size; j++)
      {
      add_vector[j]+=p_2[j];
      //add_vector.push_back(temp_2);
      }
   vector<int>::iterator p1;
   int i=0;
 cout<<"sum of two polynomials"<<"\n";
   for(p1=add_vector.begin(); p1!=add_vector.end(); p1++)
   {
    cout<<*p1<<"X"<<"^"<<i<<"+";
     i++;
   }
   cout<<"\n";
}

void subtract_polynomials(vector<int> p_1, vector<int> p_2)
{
   int max_size=p_1.size();
   int min_size=p_2.size();
      if(p_1.size()<p_2.size())
      {
         max_size=p_2.size();
         min_size=p_1.size();
      }

      int temp;
      vector<int>subtract_vector;
      for(int i=0; i < max_size; i++)
      {
        temp=p_1[i];
        subtract_vector.push_back(temp);
      }
       int temp_2;
      for(int j=0; j< min_size; j++)
      {
      subtract_vector[j]-=p_2[j];
      //add_vector.push_back(temp_2);
      }
   vector<int>::iterator p3;
   int i=0;
   cout<<"difference of two polynomials"<<"\n";
   for(p3=subtract_vector.begin(); p3!=subtract_vector.end(); p3++)
   {
    cout<<*p3<<"X"<<"^"<<i<<"+";
     i++;
   }
   cout<<"\n";
}

void scalar_multiplication(vector<int> p_1, const int scalar)
{
 int size=p_1.size();
 for(int i=0; i < size+1; i++)
 {
     p_1[i]=p_1[i]*scalar;
 }
  vector<int>::iterator p1;
   int i=0;
cout<<"scalar multiplication"<<"\n";
    for(p1=p_1.begin(); p1 !=p_1.end();p1++)
    {
     cout<<*p1<<"X"<<"^"<<i<<"+";
     i++;

    }
   cout<<"\n";
}

void poly_multiplication(vector<int> p_1,vector<int> p_2 )
{
int size=(p_1.size()-1)+(p_2.size()-1);
vector<int>product;
  for(int i=0; i< size+1; i++)
  {
   product[i]=0;
  }

  for(int j=0; j<p_1.size();j++)
  {
   for(int k=0; k<p_2.size();k++)
   {
    product[j+k]+=p_1[j]*p_2[k];
   } 


  }

  vector<int>::iterator m;
   int i=0;
  for(m=product.begin(); m !=product.end(); m++)
  {
   cout<<*m<<"X"<<"^"<<i<<"+";
 
  }
  cout<<"\n";

}


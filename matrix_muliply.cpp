//Tiffany Schiff
//program: final_matrix.cpp
//12/9/2012
//synopsis: This program ouputs the product of two matrices
#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int main()
{
cout<<"Enter a positive number representing the number of rows of matrix A"<<"\n";
int row_a;
cin >>row_a;

cout<<"Enter a positive number representing the number of columns of matrix A"<<"\n";

int col_a;
cin >> col_a;


if( row_a < 0 || col_a < 0 || !cin)
{
 cout<<"The row entered for Matrix A is either a negative integer or a non integer input"<<"\n";
 exit(1);
}

vector<vector<int> >Matrix_A(row_a,vector<int>(col_a,0));
int i_r_a, i_c_a;

for(i_r_a=0; i_r_a < row_a; i_r_a++)
{
  for(i_c_a=0; i_c_a < col_a; i_c_a++)
  {
     Matrix_A[i_r_a][i_c_a]= i_r_a+1;
   
  }
}
//Print Results
for(i_r_a=0; i_r_a < row_a; i_r_a++)
{
  for(i_c_a=0; i_c_a < col_a; i_c_a++)
  {
    cout<< Matrix_A[i_r_a][i_c_a];
    
   
  }
  cout<<"\n";
}

cout<<"Enter a positive number representing the number of rows of matrix B"<<"\n";
int row_b;
cin >>row_b;

cout<<"Enter a positive number representing the number of columns of matrix B"<<"\n";

int col_b;
cin >> col_b;

if( row_b < 0|| col_b<0 || !cin)
{
 cout<<"The row entered for Matrix B is either a negative integer or a non integer input"<<"\n";
 exit(1);
}

vector<vector<int> >Matrix_B(row_b,vector<int>(col_b,0));
int i_r_b, i_c_b;

for(i_c_b=0; i_c_b < row_b; i_c_b++)
{
  for(i_r_b=0; i_r_b < col_b; i_r_b++)
  {
     Matrix_B[i_c_b][i_r_b]= i_r_b+1;
  }


}
//Print results
for(i_r_b=0; i_r_b < row_b; i_r_b++)
{
  for(i_c_b=0; i_c_b < col_b; i_c_b++)
  {
    cout<< Matrix_B[i_r_b][i_c_b];
  }
   cout<<"\n";

}

if(col_a != row_b)
  {
   cout<<"These matrices cannot be multiplied because the number of columns in Matrix A"
       <<"is not equal to the number of rows in Matrix B\n";
        exit(1);
  }
    vector< vector<int> >Matrix_C(row_a,vector<int>(col_b,0));
   
   cout<<"Matrix Multiply"<<"\n";
      for(int k=0; k<row_a; k++)
      {   
   
          for(int i=0; i <col_b; i++)
          {
           int sum=0;
           //Matrix_C[k][i]=0;
           for(int j=0; j < row_b; j++)
           {
            sum +=Matrix_A[k][j]*Matrix_B[j][i];
                    //Matrix_C[i][k] +=a[i][j]*b[j][i];
                  
           }
            Matrix_C[k][i]=sum;
           
          }
     }
cout<<"Indexes\n";

      for(int i=0; i<row_a; i++)
      {

        for(int j=0; j<col_b; j++)
        {
         cout<<Matrix_C[i][j]<<" ";
        }
        cout<<"\n";
      }
   
cout<<"Iterators\n";
vector< vector<int> >::iterator x;

vector<int>:: iterator y;

  for(x=Matrix_C.begin(); x !=Matrix_C.end(); x++)
  {
   for(y= (*x).begin(); y !=(*x).end(); y++)
   {
     cout<< *y<<" ";
   }
     cout<<"\n";
  }


return 0;

}

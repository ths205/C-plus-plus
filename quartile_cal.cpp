//Calculates the first,second and third Quartiles of an array
//q1 stands for 25 percentile, q2, stands for 50  percentile
// and q3 stands for 75 percentile

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;

    if( !cin || n<=0)
    {
        cout<<"You either gave bad input or an integer that is 0 or less.\n";
        exit(0);

    }

    int x[n];

    for( int i=0; i<n; i++)
    {
        cin>>x[i];
        
        if(!cin)
        {
            cout<<"You gave bad input.\n";
            exit(0);

        }
    }
    //Sort the array
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++){

            if(x[i] > x[j])
            {
                int temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    
    //if the number of integers in an array is odd
    if(n%2 != 0)
    {
        int q2 = x[(n/2)];
        int q1 = (x[(n/4)-1]+x[(n/4)])/2;
        int q3 = (x[(3*n/4)]+x[(3*n/4)+1])/2;

        cout<<q1<<"\n";
        cout<<q2<<"\n";
        cout<<q3<<"\n";
    }

    //if the number of integers in an array is even and if the number of integers that make up half the array are odd
    else if (n%2==0 && n%4!=0) {
       int q2 = (x[(n/2)-1]+x[(n/2)])/2;
       int q1 = (x[(n/4)]);
       int q3 = (x[(3*n/4)]);
       cout<<q1<<"\n";
        cout<<q2<<"\n";
        cout<<q3<<"\n";
    }
   
    //if the number of integers in an array is even and if the number of integers that make up half the array are even
    else{
        int q2 =(x[(n/2)-1]+x[(n/2)])/2;
        int q1= (x[(n/4)-1]+x[(n/4)])/2;
        int q3 = (x[((3*n)/4)-1]+x[(3*n/4)])/2;
        cout<<q1<<"\n";

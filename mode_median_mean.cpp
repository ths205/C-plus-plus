//Calculates the mean , mode and median

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;






int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    //n is the length of the array
    cout<<"Enter a positive integer to stor in an array.\n";
    int n;
    cin>>n;
    if(n<=0 || !cin)
    {
        cout<<"You either entered a negative integer or invalid input.";
        exit(0);
    }

    int arr[n];

    for (int i=0; i<n; i++)
    {
        
        cin>> arr[i];

        if(!cin){

            cout<<"You entered invalid input.\n";
            exit(0);
            break;
        }


    }
    
    //Mean calculation
    int sum=0;
    int length=1;
    for(int j=0; j < n; j++)
       {
          sum+=arr[j];
          
       }

     cout<<"Mean is "<<float(sum)/n<<"\n";

     //Median calculation
    int temp=0;
    

    //this code sorts the array
    for(int k=0; k < n; k++)
    {
        for(int l=k+1; l < n; l++)
        {
            if(arr[k]>arr[l]){
               temp=arr[k];
               arr[k]=arr[l];
               arr[l]=temp; 
            }
        }
    }
   if(n%2==1){

      int z=round(n/2);
      //return arr[z];
      cout<<arr[z]<<"\n";
   }

    else{   
       int med_1=arr[(n/2)-1];
       int med_2=arr[(n/2)];
       float avg_med = float((med_1+med_2))/2;
   

       cout<<"The median is "<<avg_med<<"\n";

    }   

    //Calculates Mode
    int number = arr[0];
    int mode_int = number;
    int count = 1;
    int count_mode =1;

    for(int o=1; o<n; o++)
    {
        if(arr[o]==number){
            //count occurrences of the current number
            ++count;
        }

        else{
            //the number repeats itself in a given array
            if (count > count_mode){
                count_mode= count;
                mode_int=number;
            }
            count = 1; //reset count for the new number
            number = arr[o];
        }
    }

    cout<<"The mode is "<<mode_int<<"\n";

    return 0;
}

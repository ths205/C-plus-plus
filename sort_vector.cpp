//This file sorts an vector of integers in ascending order
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> v;
    //n is the number of integers to store in the vector
    int n;
    cin>>n;
    
    //checks that the user enters a positive integer
    if(!cin or n<=0){
        cout<<"You did not enter a positive integer or appropriate input";
        exit(0);
    }
    //x is the value that gets pushed into the vector
    int x;
    for(int i=0; i<n; i++){

        cin>>x;
        //checks that the users enters appropriate input
        if(!cin){
          cout<<"You did not enter a positive integer.";
          exit(0);
          }
    v.push_back(x);

    }
 
    //sort functions sorts the vector
    sort(v.begin(),v.end());
    
    //y is used to iterate through the vector
    vector<int>:: iterator y;

    for(y=v.begin(); y!=v.end(); y++){
        cout<<*y<<" ";
    }

    return 0;
}

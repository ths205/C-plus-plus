//reverses numbers in an array

#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

void reverse(int * pointer_1, int n);

int main()
{
int num[]={1,2,3,4,5};
int i=0;

while(num[i] !='\0')
{
 i++;

}

for(int k=0; k < i; k++)
{
cout<<num[k]<<"\n";
}
reverse(&num[0],i);
for(int j=0; j < i; j++)
{
cout<<num[j]<<"\n";
}
return 0;
}

void reverse(int * pointer_1, int n)
{
int temp;
int *pointer_2;
pointer_2= pointer_1+ n;
while(pointer_1 <pointer_2)
{
temp= *--pointer_2;
*pointer_2=*pointer_1;
*pointer_1=temp;

pointer_1++;

}

}

#include <iostream>
using namespace std;

int main() 
{
int a[40],size,i,j,temp;
cout<<"Enter array size";
cin>>size;
cout<<"Enter array element";
for(i=0;i<size;i++)
{
    cin>>a[i];
}
for(i=1;i<size;i++)
{
    for(j=0;j<(size-1);j++)
    if(a[j]>a[j-1])
{
  
  temp=a[j];
  a[j]=a[j-1];    
  a[j-1]=temp;
  }
  }
  cout<<"After bubble sort";
  for(i=0;i<size;i++)
  cout<<a[i]<<" ";
  return 0;
}
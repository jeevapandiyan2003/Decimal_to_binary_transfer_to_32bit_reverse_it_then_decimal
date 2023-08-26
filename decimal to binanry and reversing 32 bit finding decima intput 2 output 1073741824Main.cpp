#include <iostream>
#include<math.h>
using namespace std;


int main() 
{
    int a;
    int x=0;
    long long int sum=0;
    cin>>a;
    int arr[32];
    for(int i=0;i<32;i++)
    {
      arr[i]=0;
    }
    for(int j=0;j<a;j++)
    {
      if(arr[x]==0)
      {
        arr[x]=1;
      }
      else
      {
        while (arr[x]==1)
        {
         arr[x]=0;
         x+=1;
        }
        arr[x]=1;
        x=0;
        
      }
      
    }
    int zz=31;
    for(int k=0; k<32;k++)
    {
      sum+=(arr[k]*pow(2,zz));
      
      zz--;
      
    }
    cout<<sum;
    return 0;
}

  

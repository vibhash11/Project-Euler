#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    cin>>t;
    for(int a=0;a<t;a++)
   {
    int num;
    int prod=1;
    int smMul=0;
    cin>>num;
    for(int j=1;j<=num;j++)
     prod*=j;
    for(int i=num;i<=prod;i++)
    {
      int k;
      for(k=2;k<=num;k++)
        if(i%k!=0) break;

      if(k==num+1)
      { smMul=i;
        break;
      }
    }
   cout<<smMul<<"\n";
    }
   return 0;
}

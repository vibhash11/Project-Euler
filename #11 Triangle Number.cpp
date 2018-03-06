#include <iostream>
#include <algorithm>
#include<math.h>
using namespace std;


long int div(long int num)
{
    long int div=2;
    for(long int i=2;i<sqrt(num);i++)
     if(num%i==0)
      div+=2;
    int k=sqrt(num);
    if(k*k==num)
     div++;
    return div;
}

int main() {
    long int n=500;
    long int num=251*500;
    long int i=502;
    while(div(num)<=n)
    {
      num = (i*(i+1))/2;
      i+=100;
    }
    cout<<num<<"\n";
    return 0;
}




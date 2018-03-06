#include<iostream>
#include<math.h>

using namespace std;

long int divideEven(long int);
long int isPrime(long int);
long int divide(long int);

int main()
{
  int t;
  //cin>>t;
  /*for(int j=0;j<t;j++)
  {*/
   long int num=1987654589;
   //cin>>num;
   long int maxPrime;
   if(num%2==0)
    maxPrime = divideEven(num);
   else maxPrime = divide(num);
   cout<<maxPrime<<"\n";
   //}
  return 0;
}

long int divideEven(long int num)
{   if(num%2==0&&num!=2)
      divideEven(num/2);
    else if(isPrime(num)==1||num==2)
        return num;
    return divide(num);
}

long int divide(long int num)
{
    long int k = isPrime(num);
    if(k==1)
     return num;
    return divide(num/k);
}

long int isPrime(long int num)
{
   if(num%2==0)
     return 2;
   else
    for(long int i=3;i<=sqrt(num);i+=2)
      if(num%i==0) return i;
    return 1;
}


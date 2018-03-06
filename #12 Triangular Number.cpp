//The count of divisor a number has can be calculated by writing it in the terms of its prime factorisation
//then multiplying the (exponent+1) of the prime factors
#include<iostream>
#include<math.h>

using namespace std;

long int divide(long int,bool[]);
long int rgcd(long int x,long int y)
{
    if(y==0)
      return x;
    else
      rgcd(y,x%y);
}
int main()
{
    long int num=65000;
    long int sz = ((num-1)/2);
    if(num%2==0)
        sz++;
    bool prime[sz];
    long int crosslimit = (sqrt(num)-1)/2;
    for(long int j=0;j<sz;j++)
     prime[j]=true;
    //assume 3 is in position 1;
    for(long int i=1;i<=crosslimit;i++)
    {
        if(prime[i])
        {
            for(long int p=2*i*(i+1);p<sz;p+=2*i+1)
             prime[p]=false;
        }
    }

    long int n;
    cin>>n;
    long int i=n;
    long int cnt = 0;
    while(cnt<=n)
    {
      if(rgcd(i,i+1)==1)
      {
       if(i%2==0)
        cnt = divide(i/2,prime)+ divide(i+1,prime);
       else
        cnt = divide(i,prime) + divide((i+1)/2,prime);
      }
      i++;
    }
    cout<<((i-1)*i)/2;
}

long int divide(long int num,bool prime[])
{
    long int cnt;
    if(num>1)
    {
    long int exponent = 0;
    cnt = 1;
    while(num>1&&num%2==0)
    {
        num = num/2;
        exponent++;
    }
    cnt=cnt*(exponent+1);
    for(long int i=1;i<=num;i++)
    {
        if(prime[i])
        {
            if(num%(2*i+1)==0)
           {
               exponent = 0;
               while(num>1&&num%(2*i+1)==0)
               {
                   num=num/(2*i+1);
                   exponent++;
               }
               cnt = cnt*(exponent+1);
           }
        }

    }
    }
    else
    cnt = 0;

    return cnt;
}

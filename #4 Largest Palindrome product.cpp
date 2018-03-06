#include<iostream>
#include<Math.h>

using namespace std;
int isPalin(long int);
int isPrime(long int);
int isLarge(long int);
int checkDig(long int);
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
    long int num;
    long int maxPal=0;
    cin>>num;
    for(long int i=num-1;i>=101101;i--)
    {      if(isPalin(i))
             if(isLarge(i))
             {
              maxPal = i;
              break;
             }
    }
    cout<<maxPal<<"\n";
    }
    return 0;
}

int isPalin(long int num)
{
    long int org = num;
    long int temp = 0;
    while(num>0)
    {
        temp=temp*10+(num%10);
        num=num/10;
    }
    return org==temp;
}

int isLarge(long int num)
{
    for(int i=100;i<1000;i++)
     if(num%i==0)
      if(checkDig(num/i))
        return 1;
    return 0;
}

int checkDig(long int num)
{
    int i=0;
    while(num>0)
    {
        num=num/10;
        i++;
    }
    return i==3;
}

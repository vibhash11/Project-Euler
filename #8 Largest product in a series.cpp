#include<iostream>
#include<stdio.h>

using namespace std;

long long int cal(int[],int,int);
long long int maxProd(long long int prod[],int n);

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n;
    int k;
    cin>>n;
    cin>>k;
    int term[n];
    for(int m=0;m<n;m++)
     scanf("%1d",&term[m]);
    long long int ans = cal(term,n,k);
    cout<<ans<<"\n";
    }
    return 0;
}

long long int cal(int arr[],int n,int k)
{
    long long int prod[n-k+1];
    int j=0;
    for(int m=0;m<n-k+1;m++)
    {
        long long int mult = 1;
        for(int l=m;l<k+m&&l<n;l++)
          mult=mult*arr[l];
        prod[j]=mult;
        j++;
    }
    return maxProd(prod,j-1);
}

long long int maxProd(long long int prod[],int n)
{
    long long int maxP = prod[0];
    for(int i=1;i<n;i++)
     if(maxP<prod[i])
      maxP = prod[i];
    return maxP;
}

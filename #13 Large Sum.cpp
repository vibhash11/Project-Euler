#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n][50];
    int sumarr[50+n];
    for(int m=0;m<50+n;m++)
        sumarr[m]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<50;j++)
         scanf("%1d",&arr[i][j]);
    }
    int sum;
    int k=50+n-1;
    for(int j=49;j>=0;j--)
    {
        sum = 0;
        for(int i=0;i<n;i++)
         sum+=arr[i][j];

        sumarr[k]+=sum;
        int l = k;
        while(sumarr[l]>=10)
        {
           int temp = sumarr[l];
           sumarr[l] = temp%10;
           sumarr[--l]+= temp/10;
        }
        k--;
    }
    k = 0;
    while(sumarr[k]==0)
     k++;
    for(int j=k;j<k+10;j++)
     cout<<sumarr[j];
    cout<<"\n";
    return 0;
}

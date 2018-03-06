#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n;
    unsigned long long int maxProd=0;
    cin>>n;
    long long int a,b=1,c=1;
    for(a=1;a<n-a-b;a++)
    {
        b = (n*n-2*a*n)/(2*n-2*a);
        c = n - a - b;
        if(a*a+b*b==c*c&&c>0&&a>0&&b>0&&a*b*c>maxProd)
         maxProd = a*b*c;

    }
    if(maxProd!=0)
    cout<<maxProd<<"\n";
    else cout<<"-1"<<"\n";
    }
    return 0;
}

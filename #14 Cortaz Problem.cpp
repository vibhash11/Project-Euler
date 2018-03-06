#include<iostream>

using namespace std;

long int divide(long int num)
{
    static int cnt = 0;
    if(num==1)
     return cnt;
    else
      cnt++;
    if(num%2==0)
     divide(num/2);
    return divide(num*3+1);
}
int main()
{
    long int num;
    cin>>num;
    long int maxNum;
    long int maxCount=0;
    for(long int i=num;i>=2;i--)
    {
        long int cnt=0;
        cnt = divide(i);
        if(cnt>maxCount)
        {
            maxCount = cnt;
            maxNum = i;
        }

    }
    cout<<maxNum<<"\n";
}

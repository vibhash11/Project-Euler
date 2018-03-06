#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long int t;
    long long int num;
    cin>>t;
    for(long long int k=0;k<t;k++)
    {
        cin>>num;
        long long int term=2;
        long long int next = 0,sec=0;
        long long int sum=2;
       do
       {
            sec = term;
            term = term*4+next;
            next=sec;
            sum+=term;
        }while(term*4+next<=num);
        cout<<sum<<"\n";
    }
}

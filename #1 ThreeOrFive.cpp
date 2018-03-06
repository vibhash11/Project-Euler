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
    for(long long int j=0;j<t;j++){
            long long int sum=0;
            cin>>num;
            num--;
            long long int t3 = (num-num%3)/3;
            long long int t5 = (num-num%5)/5;
            long long int t15 = (num-num%15)/15;
            sum = t3*(3+t3*3)+t5*(5+t5*5)-t15*(15+t15*15);
            cout<<sum/2<<"\n";
    }

}

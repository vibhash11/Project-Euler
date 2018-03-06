    #include <iostream>
    #include <vector>
    using namespace std;
    const int N=1000000;
    bool mark[N+1000];
    int main()
    {
     vector<int> primes;
     vector<long long> sum;
     for(int i=2;i<=N/2;++i)
      if(mark[i]==false)
      {
       int b=i+i;
       while(b<=N)
       {
        mark[b]=true;
        b+=i;
       }
      }
     primes.push_back(2);
     sum.push_back(2);
     for(int i=3;i<=N;++i)
      if(mark[i]==false)
      {
       primes.push_back(i);
       sum.push_back( sum[sum.size()-1]+i);
      }
     int t;
     cin>>t;
     primes.push_back(10000000);
     for(int k=1;k<=t;++k)
     {
      int n;
      cin>>n;
      int i;
      for(i=0;primes[i]<=n;++i);
      cout<<sum[i-1]<<endl;
     }

    }

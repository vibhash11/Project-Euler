#include<iostream>

using namespace std;

void SieveOfEratosthenes(long int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    for(long int i=0;i<n+1;i++)
        prime[i]=true;

    unsigned long int sum=0;
    for (long int p=2; p<n+1; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            for (long int i=p*2; i<n+1; i += p)
                prime[i] = false;
            sum+=p;
        }
    }
   cout<<sum<<"\n";
}

// Driver Program to test above function
int main()
{
    long int t;
    cin>>t;
    for(long int i=0;i<t;i++)
    {
    long int n;
    cin>>n;
    SieveOfEratosthenes(n);
    }
    return 0;
}

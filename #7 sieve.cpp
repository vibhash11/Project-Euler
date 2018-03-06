#include<iostream>

using namespace std;

void SieveOfEratosthenes(int n,int pos)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    for(int i=0;i<n+1;i++)
        prime[i]=true;

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    int k=0;
    int i=2;
    while(k<pos)
    {
        if(prime[i]==true)
        {
            k++;
        }
        i++;
    }
    cout<<--i<<"\n";
}

// Driver Program to test above function
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n;
    cin>>n;
    SieveOfEratosthenes(10000,n);
    }
    return 0;
}

//in sqrt O(n);
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll sum_div(ll n)
{
    ll i,sum=n+1ll;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i!=(n/i))
            {
                sum+=i;
                sum+=(n/i);
            }
            else
                sum+=i;
        }
    }
    return sum;
}
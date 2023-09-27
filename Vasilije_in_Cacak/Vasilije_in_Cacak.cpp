#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,k,x;
        cin>>n>>k>>x;

        ll minimum_sum_of_k_numbers=(k*(k+1)/2);
        ll total_sum_of_n_numbers=(n*(n+1)/2);
        ll maximum_sum_of_remain_numbers=total_sum_of_n_numbers-((n-k)*(n-k+1)/2);

        if(minimum_sum_of_k_numbers <=x && maximum_sum_of_remain_numbers>=x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

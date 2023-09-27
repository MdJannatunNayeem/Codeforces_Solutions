#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int a[n],c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }

        for(int i=0;i<n;i++)
        {
            if(a[i]==k)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            cout<<"YES"<<endl;
        }
        else
            {
            cout<<"NO"<<endl;
        }
    }
}

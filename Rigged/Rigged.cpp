#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;

    ll weight;
    while(t--)
    {
        int number_of_athlets;
        cin>>number_of_athlets;

        for(int i=0;i<number_of_athlets;i++)
        {
            ll strength,endurance,endurance_of_polycrap, strenght_of_polycrap;
            cin>>strength>>endurance;



            if(i==0)
            {
                 strenght_of_polycrap=strength;
                 endurance_of_polycrap=endurance;

                 weight=strength;
            }
            else
            {
                if(strength >= strenght_of_polycrap && endurance >= endurance_of_polycrap)
                {
                    weight = -1;
                }
            }
        }
      cout<<weight<<endl;
    }
}

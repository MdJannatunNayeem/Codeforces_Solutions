#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll x, y, m;
    cin >> x >> y >> m;
    if (x >= m || y >= m)
    {
        cout << 0 << endl;
    }
    else
    {
        if (x <= 0 && y <= 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if (x < y)
            {
                swap(x, y);
            }
            ll result=0;
            if (y < 0)
            {
                ll n = (-y) / x + 1;
                result += n;
                y += x * n;
            }
            while (x < m)
            {
                y += x;
                swap(x, y);
                result += 1;
            }
            cout << result << endl;
        }
    }
    return 0;
}

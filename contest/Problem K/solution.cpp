#include <bits/stdc++.h>
using namespace std;

long long remainder(string s, long long m)
{
    long long mod = 0;
    for (int i = 0; i < s.size(); i++)
    {
        mod = mod * 10 + (s[i] - '0');
        mod %= m;
    }
    return mod;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("pair.in", "r", stdin);
    string a;
    long long k;
    int t;
    cin >> t;
    for (int w = 0; w < t; w++)
    {
        cin >> a;
        cin >> k;
        if (remainder(a, k) == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
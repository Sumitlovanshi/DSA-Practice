/*
author : Mr Rupesh Garhwal
id: rg_rupeee
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define MAX_N 1e5 + 1
#define INF 1e9
#define MOD 1e9 + 7
#define LINF 1e18

#define rep(i, n) for (i = 0; i < n; ++i)
#define REP(i, a, n) for (i = a; i <= n; ++i)
#define REPR(i, n, a) for (i = n; i >= a; --i)

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int t = 0, m = 0;
    string str1 = "TMT";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
        {
            t++;
        }
        else
        {
            m++;
        }
    }
    if (t == m * 2)
    {
        string str2 = "";
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T' && a == 0)
            {
                str2 + s[i];
                a++;
            }
            else if (s[i] == 'M' && a == 1)
            {
                str2 + s[i];
                a = 21;
            }
            else if (s[i] == 'T' && a == 21)
            {
                str2 + s[i];
                a = -1;
                break;
            }
        }
        if (str2 == str1)
        {
            cout << "yes" << endl;
            // break;
        }
        else
        {
            cout << "no" << endl;
            // break;
        }
    }
    else
    {
        cout << "no" << endl;
    }
}

int main()
{

    //fast_io;

    ull t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
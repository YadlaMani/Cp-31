#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (k > 1)
        {
            cout << "YES" << endl;
            continue;
        }
        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                flag = 1;
                cout << "NO" << endl;
                break;
            }
        }
        if (!flag)
        {
            cout << "YES" << endl;
        }
    }
}
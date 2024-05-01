#include <bits/stdc++.h>
#include <iostream>
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
        int n, x;
        cin >> n;
        cin >> x;
        int ans = 0, p = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans = max(ans, a[i] - p);
            p = a[i];
        }
        ans = max(ans, 2 * (x - p));
        cout << ans << endl;
    }
}
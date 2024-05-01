#include <iostream>
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
        int n;
        cin >> n;
        int a;
        vector<int> v;
        // we can also mention size here like
        // vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += abs(v[i]);
        }
        cout << sum << endl;
    }
    return 0;
}

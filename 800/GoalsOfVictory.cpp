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
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];

            sum += a[i];
        }
        cout << sum * -1 << endl;
    }
}
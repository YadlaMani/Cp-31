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
        int a, b, l;
        cin >> a >> b >> l;
        set<int> ans;
        long long int val1 = 1;
        for (int x = 0; x < 20 && val1 <= l; x++)
        {
            long long int val2 = 1;
            for (int y = 0; y < 20 && val1 * val2 <= l; y++)
            {
                if (l % (val1 * val2) == 0)
                    ans.insert(l / (val1 * val2));
                val2 *= b;
            }
            val1 *= a;
        }
        cout << ans.size() << endl;
    }
    return 0;
}

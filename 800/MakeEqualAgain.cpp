#include <iostream>
#include <vector>
#include <map>
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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        int k = 1;
        int ans = 0;

        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] == arr[i - 1])
            {
                k++;
                ans = max(ans, k);
            }
            else
            {
                k = 1;
            }
        }
        cout << ans << endl;
        // if (ans == 1)
        // {
        //     cout << n - 1 << endl;
        // }
        // else
        // {
        //     cout << n - ans << endl;
        // }
    }

    return 0;
}

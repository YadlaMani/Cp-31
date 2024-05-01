#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        int sum = 0;
        int cnt[3] = {0};
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            cnt[v[i] % 3]++;
        }
        if (sum % 3 == 0)
        {
            cout << 0 << endl;
        }
        else if (sum % 3 == 0)
        {
            cout << 1 << endl;
        }
        else
        {

            if (cnt[1] || (sum + 1) % 3 == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}
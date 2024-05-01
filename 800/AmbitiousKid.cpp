#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> a(n);
    int Min = 100000;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        Min = min(abs(a[i]), Min);
    }
    cout << Min << endl;
}
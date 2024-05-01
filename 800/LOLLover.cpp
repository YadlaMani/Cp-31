#include <iostream>

using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    string str;
    cin >> str;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'L')
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    if (c1 % 2 && c1 && c2 % 2 && c2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}

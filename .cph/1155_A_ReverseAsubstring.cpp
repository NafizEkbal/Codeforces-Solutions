#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool get = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] > s[i + 1])
            {
                cout << "YES" << endl;
                cout << i + 1 << " " << i + 2 << endl;
                get = true;
                break;
            }
        }
        if (!get)
        {
            cout << "NO" << endl;
        }
        return 0;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]])
            {
                sum += (n - i);
                mp[s[i]] = 0;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
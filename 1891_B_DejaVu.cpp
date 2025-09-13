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
        int n, q;
        cin >> n >> q;
        vector<long long> a(n), x;
        unordered_set<long long> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            long long temp;
            cin >> temp;
            if (s.find(temp) == s.end())
            {
                s.insert(temp);
                x.push_back(temp);
            }
        }
        for (int i = 0; i < x.size(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] % ((int)pow(2, x[i])) == 0)
                {
                    a[j] += pow(2, x[i] - 1);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
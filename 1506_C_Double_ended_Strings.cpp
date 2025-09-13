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
        string a, b;
        cin >> a >> b;
        if (a.size() < b.size())
        {
            swap(a, b);
        }
        int res = 0;

        for (int i = 1; i <= b.size(); i++)
        {
            for (int j = 0; j + i <= b.size(); j++)
            {
                for (int k = 0; k + i <= a.size(); k++)
                {
                    string sub_a = a.substr(k, i);
                    string sub_b = b.substr(j, i);
                    if (sub_a == sub_b)
                    {
                        res = max(res, i);
                    }
                }
            }
        }
        cout << a.length() + b.length() - 2 * res << endl;
    }

    return 0;
}

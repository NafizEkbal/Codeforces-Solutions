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
        int a, b;
        cin >> a >> b;
        int res = 0;
        int i = 0;
        while (i + 4 < a)
        {
            if (i + 4 > a)
            {
                break;
            }
            i += 4;
        }

        for (; i < a; i++)
        {
            res = res ^ i;
        }

        if (res == b)
        {
            cout << a << endl;
        }
        else if ((res ^ b) == a)
        {
            cout << a + 2 << endl;
        }
        else
        {
            cout << a + 1 << endl;
        }
    }

    return 0;
}
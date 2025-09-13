#include <bits/stdc++.h>
using namespace std;

int maxVal(int i, int arr[], int n)
{
    sort(arr, arr + i);
    return arr[n - 1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1], b[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }
        vector<int> preA(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            preA[i] = preA[i - 1] + a[i];
        }
        vector<int> preB(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            preB[i] = max(preB[i - 1], b[i]);
        }

        int res = 0;
        for (int i = 1; i <= min(k, n); i++)
        {
            res = max(res, preA[i] + preB[i] * (k - i));
        }
        cout << res << endl;
    }

    return 0;
}
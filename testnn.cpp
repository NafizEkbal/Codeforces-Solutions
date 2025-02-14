#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a, b, c, count = 0, count2 = 0, count3 = 0, f = 1;
    cin >> n >> a >> b >> c;
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    a = arr[0];
    b = arr[1];
    c = arr[2];
    long long int temp = n;

    for (int i = 0; i <= n / a; i++)
    {
        for (int j = 0; j <= n / b; j++)
        {
            int remaining_length = n - i * a - j * b;
            if (remaining_length >= 0 && remaining_length % c == 0)
            {
                int k = remaining_length / c;
                count = i + j + k;
                count3 = max(count, count3);
            }
        }
    }

    cout << count3 << endl;
}

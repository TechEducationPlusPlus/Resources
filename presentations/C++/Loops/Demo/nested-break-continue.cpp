/*
Дадено е естествено число N.
Да се изведат страните на всички
триъгълници с обиколка N.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;

    for (int a = 1; a <= n; ++ a)
    {
        if (a > n / 2) break;
        for (int b = 1; b <= n; ++ b)
        {
            if (b > n / 2) break;
            int c = n - a - b;

            if (a + b <= c) continue;
            if (a + c <= b) continue;
            if (b + c <= a) continue;

            cout << a << ' ' << b << ' ' << c << endl;
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}

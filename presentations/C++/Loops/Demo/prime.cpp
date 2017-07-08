#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "one" << endl;
        return 0;
    }

    bool fl = true;

    for (int i = 2; i * i <= n; ++ i)
    {
        if (n % i == 0)
        {
            fl = false;
            break;
        }
    }

    if (fl) cout << "prime";
    else cout << "composite";

    cout << endl;
    return 0;
}

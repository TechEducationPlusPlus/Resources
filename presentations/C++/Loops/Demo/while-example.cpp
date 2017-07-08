#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while (x > 0)
    {
        int a;
        cin >> a;
        if (x >= a) cout << "bought" << endl;
        x = x - a;
    }

    cout << "end" << endl;
    return 0;
}

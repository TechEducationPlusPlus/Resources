#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    for (int i = x; i <= y; ++ i)
    {
        if (i % 7 == 0) cout << i << endl;
    }

    cout << "end" << endl;
    return 0;
}

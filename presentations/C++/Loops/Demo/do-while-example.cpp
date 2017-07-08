#include <iostream>
using namespace std;

int main()
{
    int cnt = 0, num;

    do
    {
        cin >> num;
        if (num % 2 == 0 and num > 0) cnt++;
    }
    while (num >= 0);

    cout << cnt << endl;
    return 0;
}

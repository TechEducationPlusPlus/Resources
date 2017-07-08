#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int mini = 0, maxi = 0;

    while (cin.good())
    {
        if (num < 0)
        {
            if (maxi == 0) maxi = num;
            else maxi = max(maxi, num);
        }
        if (num > 0)
        {
            if (mini == 0) mini = num;
            else mini = min(mini, num);
        }

        cin >> num;
    }

    cout << mini << ' ' << maxi << endl;
    return 0;
}

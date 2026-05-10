#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int doors[1000];
        for (int i = 0; i < n; ++i)
        {
            cin >> doors[i];
        }

        bool used_button = false;
        int button_timer = 0;
        bool can_pass = true;

        for (int i = 0; i < n; ++i)
        {
            if (doors[i] == 0)
            {
                if (button_timer > 0)
                    button_timer--;
            }
            else
            {
                if (button_timer > 0)
                {
                    button_timer--;
                }
                else if (!used_button)
                {
                    used_button = true;
                    button_timer = x - 1;
                }
                else
                {
                    can_pass = false;
                    break;
                }
            }
        }

        if (can_pass)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int prog[5000], math[5000], pe[5000];
    int prog_count = 0, math_count = 0, pe_count = 0;

    for (int i = 1; i <= n; ++i)
    {
        int skill;
        cin >> skill;

        if (skill == 1)
            prog[prog_count++] = i;

        if (skill == 2)
            math[math_count++] = i;

        if (skill == 3)
            pe[pe_count++] = i;
    }

    int teams = prog_count;
    if (math_count < teams)
        teams = math_count;
    if (pe_count < teams)
        teams = pe_count;

    cout << teams << endl;

    for (int i = 0; i < teams; ++i)
    {
        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    }

    return 0;
}

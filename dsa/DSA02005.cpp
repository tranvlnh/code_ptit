#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        do
        {
            cout << s << ' ';
        } while (next_permutation(s.begin(), s.end()));
        cout << '\n';
    }
}
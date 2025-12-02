#include <iostream>

using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore(); // first line er por enter ke ignor korbe.
    char s[x];
    // cin >> s; // just for single word
    cin.getline(s, x); // for line input
    cout << x << " => " << s << endl;

    // string a; // variable declare by string
    // cin >> a;
    // cout << a;

    return 0;
}
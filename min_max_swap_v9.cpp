#include<iostream>
#include<algorithm>
using namespace std;
int main (){
    int a, b;
    cin >> a >> b;
    cout << min(a, b) << endl; // get min between 2 element
    cout << min({40, 30, 70, 100}) << endl; // get min between infinity element
    cout << max(a, b) << endl; // get max between 2 element
    cout << max({40, 30, 70, 100}) << endl; // get max between infinity element

    swap(a, b); // swap between tow variable
    cout << a << " " << b << endl;
    return 0;
}
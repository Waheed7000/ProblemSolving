#include <iostream>
using namespace std;

int main() 
{
    int w;
    cin >> w;
    if (2 < w && w % 2 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
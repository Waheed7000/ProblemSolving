#include <iostream>
using namespace std;

int main()
{
    int a, b, paw_a = 1, paw_b = 1;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
        paw_a *= a;
    for (int i = 0; i < a; i++)
        paw_b *= b;
    cout << paw_a + paw_b;
    return 0;
}
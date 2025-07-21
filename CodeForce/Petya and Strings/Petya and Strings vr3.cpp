#include <iostream>
using namespace std;

int main()
{
    string str_1, str_2;
    cin >> str_1 >> str_2;
    int st = 0, nd = 0;
    for (int i = 0; i < str_1.length(); i++)
        st += (tolower(str_1[i]) - 97);
    for (int i = 0; i < str_2.length(); i++)
        nd += (tolower(str_2[i]) - 97);
    if (st > nd)
        cout << 1;
    else if (st < nd)
        cout << -1;
    else
        cout << 0;
}
// aslkjlkasdd
// asdlkjdajwi

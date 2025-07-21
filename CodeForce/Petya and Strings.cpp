#include <iostream>
using namespace std;

int main()
{
    string str_1, str_2;
    cin >> str_1;
    int x = 0, y = 1;
    for (int i = 0; i < str_1.length(); i++)
    {
        for (char c = 'a'; c <= 'z'; c++)
        {
            if (c == str_1[i])
            {
                cout << int(c) << endl;
            }
        }
    }
}
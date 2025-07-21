#include <iostream>
using namespace std;

int main()
{
    string str_1, str_2;
    cin >> str_1 >> str_2;
    int result = 0;
    for (int i = 0; i < str_1.length(); i++)
    {
        if (tolower(str_1[i]) == tolower(str_2[i]))
            continue;
        else
        {
            if (tolower(str_1[i]) > tolower(str_2[i]))
                result = 1;
            if (tolower(str_2[i]) > tolower(str_1[i]))
                result = -1;
            break;
        }
    }
    cout << result;
}
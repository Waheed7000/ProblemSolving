#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i+=2)
    {
        cout << i << endl;
        for (int j = str.length() - 1; j >= 0; j-=2 )
        {
            if (str[j + 1] < str[i])
            {
                char temp = str[i];
                str[i] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    cout << str << str[str.length()] << endl;
}
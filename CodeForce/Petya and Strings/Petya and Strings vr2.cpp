#include <iostream>
using namespace std;

int main()
{
    char leatters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    // for (char c = 'A'; c <= 'Z'; c++) 
    //     cout << "'" << c << "', ";        
    string str_1, str_2;
    cin >> str_1;
    int x = 0, y = 1;
    cout << str_1[str_1.length()-1];
    for (char c = str_1[0]; c < str_1[-1]; c++)
    {
        cout << str_1[str_1.length()-1];
        // for (char c = 'a'; c <= 'z'; c++)
        // {
        //     cout << str_1[c];
        //     if (c == str_1[c])
        //     {
        //         cout << c;
        //     }
        // }
    }
    // for (int i = 0; i < str_2[i]; i++)
    //     y += i; 
    // cout << x << endl;

}
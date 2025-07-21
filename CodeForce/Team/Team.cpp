#include <iostream>
using namespace std;

int main() 
{
    int n, output = 0;
    cin >> n;
    int problems[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> problems[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        int result = 0;
        for (int j = 0; j < 3; j++)
            result += problems[i][j];
        if (result >= 2)
            output++;
    }
    cout << output;
}
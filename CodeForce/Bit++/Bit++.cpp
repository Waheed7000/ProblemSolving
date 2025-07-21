#include <iostream>
using namespace std;

int main() 
{
    int n, result = 0;
    cin >> n;
    string comands[n];
    for (int i = 0; i < n; i++)
        cin >> comands[i];
    for (int i = 0; i < n; i++)
    {
        if (comands[i] == "++X" || comands[i] == "X++")
            result++;
        if (comands[i] == "--X" || comands[i] == "X--")
            result--;
    }
    cout << result;
}
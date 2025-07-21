#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    string s = "ahmed";
    for (int i = (n-1); i > 0; i--) {
            char temp = s[i - 1];
            s[i - 1] = s[i];
            s[i] = temp;
            // cout << s[i] << endl << temp; 
        }
    cout << s;
}
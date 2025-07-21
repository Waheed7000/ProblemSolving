#include <iostream>
using namespace std;

int main()
{
    // n is the length of the string
    // s is the string
    // q is the number of the queries
    // t is the process type
    // x is the index of the string that will get the process 
    int n, q, t, x;
    string s;
    cin >> n >> q;
    cin >> s;
    for (int i = 0; i < q; i++) {
        cin >> t >> x;
        if (t == 1) {
            for (int i = 0; i < x; i++) {
                for (int i = (n-1); i > 0; i--) {
                    char temp = s[i - 1];
                    s[i - 1] = s[i];
                    s[i] = temp; 
                }
            }
        }
        else if (t == 2)
            cout << s[x]; 
    }
    return 0;
}
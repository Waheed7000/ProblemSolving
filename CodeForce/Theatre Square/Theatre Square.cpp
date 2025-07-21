#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    long double m, n, a;
    long long result;
    cin >> m >> n >> a;
    result = (ceil(m/a) * ceil(n/a)) ;
    cout << result << endl;
}
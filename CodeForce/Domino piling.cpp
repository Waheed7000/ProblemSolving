#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;
    int result = M * N;
    if (result % 2 != 0)
        result--;
    cout << result/2; 
}
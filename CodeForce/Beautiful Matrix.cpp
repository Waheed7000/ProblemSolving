#include <iostream>
using namespace std;

int main() 
    {
        int mat[5][5];
        int x, y, result = 0;
        for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                    {
                        cin >> mat[i][j];
                        if (mat[i][j] == 1)
                            {x = i;
                            y = j;}
                    }
            }
        while (x != 2 && y != 2)
            {
                if (x < 2)
                    {x++;
                    result++;}
                if (x > 2)
                    {x--;
                    result++;}
                if (y < 2)
                    {y++;
                    result++;}
                if (y > 2)
                    {y--;
                    result++;}
            }
            cout << result;
    }
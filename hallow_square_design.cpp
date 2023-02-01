#include <iostream>
using namespace std;

int main()
{

    /*
     ******
     *    *
     *    *
     *    *
     *    *
     *    *
     ******
     */

    for (int row = 0; row <= 5; row++)
    {
        for (int col = 0; col <= 5; col++)
        {
            if (row == 0 or row == 5 or col == 0 or col == 5)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
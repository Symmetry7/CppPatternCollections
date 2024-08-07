#include <iostream>
using namespace std;

int main ()
{
    int num;
    cout << "Enter any number here: ";
    cin >> num;

    // First pattern
    for(int row = 0; row < num; row++)
    {
        for(int col = 0; col < 2 * row + 1; col++)
        {
            if(col % 2 == 0)
            {
                cout << row + 1;
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }

    // Second pattern
    for(int row = 0; row < num; row++)
    {
        for(int col = 0; col < 2 * (num - row) - 1; col++)
        { 
            if(col % 2 == 0)
            {
                cout << num - row;
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }

    return 0;
}
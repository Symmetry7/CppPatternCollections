#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout << "Enter any number here : ";
    cin >> num;
    for(int row = 0; row < num; row++)
    {
        for(int col = 0; col < 2*row+1; col++)
        {
            if(col % 2 == 0)
            {
                cout << row + 1;
            }
            else
            {
                if(col == num-1)
                {
                    cout << " ";
                }
                else{
                    cout << " * ";
                }
            }
        }
        cout << endl;
    }

}
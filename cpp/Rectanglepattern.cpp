#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout << "Enter any number here : ";
    cin >> num;
    for(int row = 0; row < num; row++)
    {
        for(int col = 0; col < num+2; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

}
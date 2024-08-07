#include <iostream>
using namespace std;
int main()
{
    int num , n=0;
    cout << "Enter any number here : ";
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << n + 1 <<  " ";
            n = n + 1;
        }
        cout << endl;
    }
}

/*
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
*/
#include <iostream>
#include "assert.h"
using namespace std;
void starPyramidPattern(int n)
{
    assert(n<=9);
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 17 ; j++)
        {
            if(j >= (8 - i) && j <= (8 + i))
            {
                if(j == 8+i)
                    cout << i+1;
                else
                {
                    cout << i+1 << "*";
                    j++;
                }
            }
            else
                cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;
    starPyramidPattern(n);

    return 0;
}
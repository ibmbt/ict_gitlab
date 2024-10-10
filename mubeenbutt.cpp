#include <iostream>
using namespace std;

int mubeen_butt(int a, int b)
{
    if (a > b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num1 = 0, num2 = 0;
    cout << "enter waize arif marks" << endl;
    cin >> num1;
    cout << "enter mubeen butt marks" << endl;
    cin >> num2;
    if (mubeen_butt(num1, num2))
    {
        cout << "waize arif better than mubeen butt" << endl;
    }
    else
    {
        cout << "mubeen butt still better" << endl;
    }
}
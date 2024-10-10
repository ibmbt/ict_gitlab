#include <iostream>
using namespace std;

int waize_arif(int a, int b)
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
    // enter number for waize and mubeen
    int num1 = 0, num2 = 0;
    cout << "enter waize arif marks" << endl;
    cin >> num1;
    cout << "enter mubeen butt marks" << endl;
    cin >> num2;
    // calling function to calculate which is greater
    if (waize_arif(num1, num2))
    {
        cout << "waize arif better than mubeen butt" << endl;
    }
    else
    {
        cout << "mubeen butt still better" << endl;
    }
    // cout accordingly
    // return accordingly
    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

float ClampToOne(float value)  // &value pass by reference?
{
    if (value > 1)
    {
        value = 1;
    }

    if (value < -1)
    {
        value = -1;
    }

    return value;
}

float GetValue(float h)
{
    if (h > 1 && h < -1)
    {
        ClampToOne(h);
    }

    float result = asin(h + 2) + pow(h, 2);
    return h;
}

int main()
{
    float a,b;

    cout << "Enter a: ";
    cin >> a;

    if (cin.fail())
    {
        cout << "Wrong type in a";
        return 0;
    }

    cout << "Enter B: ";
    cin >> b;

    if (cin.fail())
    {
        cout << "Wrong type in b";
        return 0;
    }

    float h = (a - b) / 2;

    float result = GetValue(h);
    cout << "The final result is: " << result;
}
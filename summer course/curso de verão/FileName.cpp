#include <iostream>
using namespace std;
void main()
{
    int days, group;
    float cost, value, d;

    do
    {
        cin >> cost;
        cin >> days;
        cin >> group;
    } while (cost < 100 || cost > 100000);

    cost = cost / 100;
    cost = cost - cost * 0.25;
    d = cost - trunc(cost);

    if (d > 0.5)
    {
        value = trunc(cost) + 1;
    }
    else
    {
        value = trunc(cost) + 0.5;
    }
    cost = value;

    if ((days > 4) && (days < 9))
    {
        cost = cost - cost * 0.4;
        d = cost - trunc(cost);
        if (d > 0.5)
        {
            value = trunc(cost) + 1;
        }
        else
        {
            value = trunc(cost) + 0.5;
        }
        cost = value;
    }
    else if (days > 8)
    {
        cost = cost - cost * 0.65;
        d = cost - trunc(cost);
        if (d > 0.5)
        {
            value = trunc(cost) + 1;
        }
        else
        {
            value = trunc(cost) + 0.5;
        }
        cost = value;
    }
    if (group > 3)
    {
        cost = cost - cost * 0.5;
        d = cost - trunc(cost);
        if (d > 0.5)
        {
            value = trunc(cost) + 1;
        }
        else
        {
            value = trunc(cost) + 0.5;
        }
    }
    cost = value * 100;
    cout << cost;
}
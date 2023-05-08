#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int num = 0;
    while (num <= 1000)
    {
        num += c;
        if (num >= a && num <= b)
        {
            cout << num << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}
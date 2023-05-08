#include <iostream>
using namespace std;
int main()
{
	int h, w, r, c;
	cin >> h >> w >> r >> c;

	int num = 4;

	if (h == 1)
	{
		num--;
	}
	if (w == 1)
	{
		num--;
	}

	if (r == 1 || r == h)
	{
		num--;
	}

	if (c == 1 || c == w)
	{
		num--;
	}
	cout << num << endl;

	return 0;
}
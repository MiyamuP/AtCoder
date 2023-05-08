#include <iostream>
#include <stack>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; i++)

int main()
{
	ll n;
	cin >> n;
	stack<ll> st;
	ll num = 0;
	ll an = 1;
	ll nf = 0;
	bool ef = true;
	rep(i, n)
	{
		ll a;
		cin >> a;
		if (!ef && a == nf)
		{
			an++;
			st.push(a);
			num++;
		}
		else
		{
			ef = false;
			nf = a;
			an = 1;
			st.push(a);
			num++;
		}
		if (an == nf)
		{
			rep(i, nf)
			{
				num--;
				st.pop();
			}
			an = 1;
			stack<ll> tmp;
			if (!st.empty())
			{
				nf = st.top();

				tmp.push(st.top());
				st.pop();

				while (!st.empty() && st.top() == nf)
				{
					tmp.push(st.top());
					st.pop();
					an++;
				}
			}
			else
			{
				ef = true;
			}

			while (!tmp.empty())
			{
				st.push(tmp.top());
				tmp.pop();
			}
		}
		cout << num << endl;
	}
	return 0;
}
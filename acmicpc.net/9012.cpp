#include <iostream>
#include<stack>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	stack<char> stack;
	int t;
	cin >> t;
	string a;
	while (t > 0)
	{
		t--;
		cin >> a;
		for (int i = 0; i < a.size(); i++)
		{
			stack.push(a[i]);
		}
		int first = 0;
		int second = 0;
		for (int i = 0; i < a.size(); i++)
		{
			int tmp = stack.top();
			stack.pop();
			if (tmp == '(')
			{
				first++;
				if (first > second) break; // �Ųٷ� pop�ϴ� �������� '('�� �� ������ NO
			}
			else
			{
				second++;
			}
		}
		if (first == second) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
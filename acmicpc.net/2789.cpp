#include <iostream>
#include<string>

using namespace std;


int main()
{
	string s;
	cin >> s;
	char cam[9] = { 'C','A','M','B','R','I','D','G','E' };
	string ans;
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (s[i] == cam[j]) break;
			if (j == 8)  ans += s[i]; //������ ���ٸ� CAMBRIDGE�߿� �����Ƿ� ans�� �߰�
		}
	}
	cout << ans << endl;
}
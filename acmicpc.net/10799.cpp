#include <iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	stack<char> a;
	int ans = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(') //���� ��ȣ�� ���ÿ� �߰�
			a.push(s[i]);
		else if(s[i]==')') //�ݴ� ��ȣ�ϋ�
		{
			a.pop();
			if (s[i - 1] == '(') //���� ���°�ȣ �� ���������
			{
				ans += a.size(); //�߸� ���� �߰�
			}
			else if (s[i - 1] == ')') //�յ� �ݴ°�ȣ�̸�
			{
				ans++; // ������ �߷��� ���� �߰�
			}
		}
	}

	cout << ans << endl;
}
// 10798. 세로 읽기
// 2019.05.22
// 구현
#include<iostream>
#include<string>

using namespace std;

string s[5];
int main()
{
	for (int i = 0; i < 5; i++)
	{
		cin >> s[i];
	}
	// 세로로 읽기
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (s[j].size() > i)
			{
				cout << s[j][i];
			}
		}
	}
	cout << endl;
	return 0;
}

// 10815. 숫자카드
// 2019.05.22
// 이분 탐색
#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	// 이분 탐색을 위해 정렬
	sort(v.begin(), v.end());

	// m개의 숫자에 대해 이분 탐색
	for (int i = 0; i < m; i++)
	{
		int k = b[i];
		if (binary_search(v.begin(), v.end(), k))
		{
			cout << "1 ";
		}
		else
		{
			cout << "0 ";
		}
	}
	cout << endl;
	return 0;
}

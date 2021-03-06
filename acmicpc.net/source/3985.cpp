// 3985. 롤 케이크
// 2020.06.15
// 시뮬레이션
#include<iostream>
#include<vector>

using namespace std;

int cake[1001];
int audience[1001];
vector<pair<int, int>> v;
int first; // 가장 많은 조각을 받을 거승로 기대하고 있던 방청객의 번호
int second; // 실제로 가장 많은 조각을 받은 방청객의 번호
int tmp;
int main()
{
    int l, n;
    cin >> l >> n;
    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({ a,b });
        int c = b - a + 1;
        if (c > tmp)
        {
            first = i;
            tmp = c;
        }
    }

    // 뒤에서부터 케이크 먹으려고한거 체크
    for (int i = v.size() - 1; i >= 0; i--)
    {
        for (int j = v[i].first; j <= v[i].second; j++)
        {
            cake[j] = i + 1;
        }
    }

    // 케이크에 써있는 방청객의 조각 증가
    for (int i = 0; i <= l; i++)
    {
        audience[cake[i]]++;
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (audience[i] > cnt)
        {
            cnt = audience[i];
            second = i;
        }
    }
    cout << first << endl << second << endl;
    return 0;
}

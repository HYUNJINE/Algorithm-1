//���ڿ� ������������ ��ġ�ϱ�
// sort (s.begin(), s.end(), greater<char>());
// sort(s.rbegin(),s.rend());

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<char> v;
    for(int i=0;i<s.size();i++)
    {
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end(),greater<char>());
    for(int i=0;i<v.size();i++)
    {
        answer+=v[i];
    }
    return answer;
}
// 서울에서 김서방 찾기
// 2019.03.08
#include<string>
#include<vector>

using namespace std;

string solution(vector<string> seoul)
{
	string answer = "";
	int tmp = 0;
	for (int i = 0; i < seoul.size(); i++)
	{
		if (seoul.at(i) == "Kim")
		{
			tmp = i;
			break;
		}
	}
	// to_string(tmp) : tmp를 string형으로 바꿈
	answer = string("김서방은 ").append(to_string(tmp)).append("에 있다");
	return answer;
}

//���￡�� �輭�� ã��
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) 
{
    string answer="";
    int tmp=0;
    for (int i=0; i < seoul.size(); i++) {
        if (seoul.at(i) == "Kim")
        {
            tmp=i;
            break;
        }
    }
    answer=string("�輭���� ").append(to_string(tmp)).append("�� �ִ�");
    return answer;
}
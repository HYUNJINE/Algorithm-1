//올바른 괄호
#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = false;

    int open=0;
    int close=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(') open++;
        else if(s[i]==')') close++;
        if(close>open) break;
    }
    if(open==close) answer=true;
    return answer;
}
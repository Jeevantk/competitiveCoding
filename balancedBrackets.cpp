#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool is_balanced(string expression) {
    stack<char> s;
    char a,b,c;
    for(int i=0;i<expression.length();i++)
    {
        if(expression[i]=='('||expression[i]=='['||expression[i]=='{')
        {
            s.push(expression[i]);
        }
        else
        {
            if(s.empty())
            {
                return false;
            }
            switch(expression[i])
            {
                case ')':
                    a=s.top();
                    s.pop();
                    if(a=='{'||a=='[')
                        return false;
                    break;

                case '}':
                    b=s.top();
                    s.pop();
                    if(b=='('||b=='[')
                        return false;
                    break;
                case ']':
                    c=s.top();
                    s.pop();
                    if(c=='('||c=='{')
                        return false;
                    break;

            }
        }
    }

    if(s.empty())
        return true;
    else
        return false;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

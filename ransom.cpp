#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {

    map<string,int> wordDict;

    for(int i=0;i<magazine.size();i++)
    {
        wordDict[magazine[i]]=0;
    }

    for(int i=0;i<magazine.size();i++)
    {
        wordDict[magazine[i]]++;
    }

    bool ans=true;

    for(int i=0;i<ransom.size();i++)
    {
        if(wordDict.find(ransom[i]) == wordDict.end())
        {
            ans=false;
            break;
        }
        else
        {
            if(wordDict[ransom[i]]==0)
            {
                ans=false;
                break;
            }
            wordDict[ransom[i]]--;
        }
    }

    return ans;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

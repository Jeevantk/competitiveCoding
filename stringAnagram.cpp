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

const int CHARS=26;
int number_needed(string a, string b) {
   
   int count1[CHARS]={0},count2[CHARS]={0};

   for(int i=0;i<a.length();i++)
   {
   	count1[a[i]-'a']++;
   }
   for(int i=0;i<b.length();i++)
   {
   	count2[b[i]-'a']++;
   }

   int result=0;
   for(int i=0;i<CHARS;i++)
   {
   	result+=abs(count1[i]-count2[i]);
   }

   return result;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> mp(256, -1);
    int start = -1, maxlen = 0;

    for(int i = 0; i<s.size(); i++ ){
        if(mp[s[i]]>start){
            start = mp[s[i]];
        }
        mp[s[i]] = i;
        maxlen = max(maxlen, i-start);
    }
    return maxlen;
}

int main(){
    string s = "abcabcbb";
    cout<<lengthOfLongestSubstring(s)<<endl;
    return 0;
}


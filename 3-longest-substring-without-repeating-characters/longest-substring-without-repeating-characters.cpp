class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> lastseen;
        int left=0;
        int maxlen=0;
        for(int right=0;right<s.size();right++){
            if(lastseen.count(s[right])&&lastseen[s[right]]>=left){
                left=lastseen[s[right]]+1;
            }
            lastseen[s[right]]=right;
            maxlen=max(maxlen,right-left+1);
        }return maxlen;
    }
};
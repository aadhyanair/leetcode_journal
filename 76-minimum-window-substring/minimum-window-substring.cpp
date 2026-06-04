class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need,window;
        int have=0;
       

        for(char c:t){
            need[c]++;
        }
 int required=need.size();
        int left=0;
        int start=0;
        int minlen=INT_MAX;

        for(int right=0;right<s.size();right++ ){
            char c=s[right];
            window[c]++;

            if(need.count(c)&& window[c]==need[c]){
                have++;
            }
            while(have==required ){

                if(right-left+1<minlen){
                    minlen=right-left+1;
                    start=left;

                }
                window[s[left]]--;
                if(need.count(s[left])&& window[s[left]]<need[s[left]]){
                    have--;
                }
                left++;
            }

        }
       return minlen==INT_MAX?"":s.substr(start,minlen);


        
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {unordered_map<int,int> freq;
    for(auto x:nums){
        freq[x]++;
    }
      
        vector<vector<int>> bucket(nums.size()+1);
        for(auto x:freq){
            bucket[x.second].push_back(x.first);
        }
        vector<int> ans;
        for(int i=bucket.size()-1;i>=0;i--){
            for(int x:bucket[i]){
                if(ans.size()==k)break;
                ans.push_back(x);
                
            }

        }return ans;

    }
};
        /*
    unordered_map<int,int> freq;
    for(auto x:nums){
        freq[x]++;
    }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto x:freq){
            pq.push({x.second,x.first});
            if (pq.size()>k) {
                pq.pop();
            }
        }
        vector<int> ans;
       while(!pq.empty()) {
 ans.push_back(pq.top().second);
            pq.pop();
        }
  return ans;
    }
};*/
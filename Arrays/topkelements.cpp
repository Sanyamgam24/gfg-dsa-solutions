class Solution {
  public:
    vector<int> topKFreq(vector<int> &arr, int k) {
        // Code here
        unordered_map<int,int>freq;
        for(int num:arr){
            freq[num]++;
        }
        
        int maxfreq = 0;
        for(pair<int,int>entry : freq){
            maxfreq = max(maxfreq,entry.second);
        }
        
        vector<vector<int>> buckets(maxfreq + 1);
        
        for(pair<int,int> entry : freq){
            buckets[entry.second].push_back(entry.first);
        }
        
        vector<int> res;
    for (int i = maxfreq; i >= 1; --i) {
        
        sort(buckets[i].begin(), buckets[i].end(), 
                                    greater<int>());
        
        for (int num : buckets[i]) {
            res.push_back(num);
            if (res.size() == k) {
                return res;
            }
        }
    }
    
    return res;
        
    }
};

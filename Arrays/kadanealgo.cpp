class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n = arr.size();
        int sum = 0;
        int maxsum = arr[0];
        
        for(int i = 0;i<n;i++){
            sum = arr[i] + sum;
            maxsum = max(maxsum,sum);
            if(sum<0){
                sum = 0;
            }
            
        }
        return maxsum;
    }
};
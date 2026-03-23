class Solution {
  public:
    int searchInsertK(vector<int> &arr, int k) {
        // code here
        int low = 0;
        int n = arr.size();
        int high = n - 1;
        int idx = -1;
        int ans = n;
        
        
        while(low<=high){
            int mid = (low + high)/2;
            
            if(arr[mid] >= k){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
        
    }
};
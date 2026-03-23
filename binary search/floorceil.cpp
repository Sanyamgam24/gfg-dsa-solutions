class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int low = 0;
        int high = arr.size() - 1;
        int ans1 = -1;
        int ans2 = -1;
        
        while(low<=high){
            int mid = (low + high) / 2;
            if(arr[mid]<=x){
                ans1 = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return ans1;
    }
};

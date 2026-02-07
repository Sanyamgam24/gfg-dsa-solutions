class Solution {
  public:
  
    void helper(vector<int> &arr,int i,int j){
        int n = arr.size();
        
        
        while(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
            
        }
    }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        
        int n = arr.size();
        if (n <= 1) return;

        d = d % n;          
        if (d == 0) return;
        
       
        helper(arr,0,d-1);
        helper(arr,d,n-1);
        helper(arr,0,n-1);
        
    }
};
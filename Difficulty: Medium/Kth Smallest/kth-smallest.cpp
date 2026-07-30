class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
          int n = arr.size();
        sort(arr.begin(), arr.end());
        
        int temp = 0; 
        
        for(int i = 0; i < k; i++){
            temp = arr[i];
        }
        return temp;
    }
};
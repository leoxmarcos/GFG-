class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int left=0;
        int n=arr.size();
        int sum=0;
        for (int i=0;i<n;i++){
            sum+=arr[i];
            
        
        while(sum>target && left <=i){
            sum-=arr[left];
            left++;
            
        }
          
         if(sum==target){
        
        return {left+1,i+1};
         }
        }
        
        return {-1};
    }
};



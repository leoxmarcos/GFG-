class Solution {
  public:
    vector<int> primeFrequency(vector<int>& arr, int k) {
        // code here
           map<int,int> hash1;
        for(int i = 0 ;i<arr.size(); i++){
            hash1[arr[i]]++;
        }
        arr.clear();
        for(auto n : hash1){
            // if(hash1[i]>k) arr.push_back(k);
            // cout<<n.second;
            if(n.second>=k && n.second!=1){
                bool isprime=false;
                
                for(int j = 2; j<=n.second/2 ; j++){
                    if(n.second%j==0){
                        isprime = true;
                        break;
                    }
                } 
                if(!isprime) arr.push_back(n.first);
            }
        }
        return arr;
    }
};
class Solution {
public:
    vector<int> findEvenOccurrences(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> ans;

        // Count frequency
        for(int x : nums) {
            freq[x]++;
        }

        // First occurrence order
        for(int x : nums) {
            if(freq[x] % 2 == 0 && freq[x] != 0) {
                ans.push_back(x);
                freq[x] = 0;
            }
        }

        // No even-occurring element
        if(ans.empty()) {
            ans.push_back(-1);
        }

        return ans;
    }
};
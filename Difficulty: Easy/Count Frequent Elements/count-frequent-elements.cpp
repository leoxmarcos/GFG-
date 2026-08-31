class Solution {
public:
    int countOccurence(vector<int>& arr, int k) {
        int n = arr.size();

        sort(arr.begin(), arr.end());

        int ans = 0;
        int count = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } 
            else {
                if (count > n / k) {
                    ans++;
                }
                count = 1;
            }
        }

        // Check the last element/group
        if (count > n / k) {
            ans++;
        }

        return ans;
    }
};
class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
                int start = 0;
                int end = arr.size() - 1;
                vector<int> ans;
                ans.reserve(arr.size());
                while (start < end) {
                    ans.push_back(arr[end--]);
                    ans.push_back(arr[start++]);
                }

                if (start == end) {
                    ans.push_back(arr[start]);
                }

                return ans;
    }
};

class Solution {
  public:
    vector<int> find(vector<int>& nums, int target) {
        // code here
        int n = nums.size();
                int first = -1, last = -1;

                // First occurrence
                int low = 0, high = n - 1;
                while (low <= high) {
                    int mid = low + (high - low) / 2;
                    if (nums[mid] == target) {
                        first = mid;
                        high = mid - 1;
                    } else if (nums[mid] < target) {
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }

                // Last occurrence
                low = 0; high = n - 1;
                while (low <= high) {
                    int mid = low + (high - low) / 2;
                    if (nums[mid] == target) {
                        last = mid;
                        low = mid + 1;
                    } else if (nums[mid] < target) {
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }

                return {first, last};
    }
};
// class Solution {
//   public:

//     int find(vector<int>& arr, int index, int n, int target) {

//         // Reached end
//         if(index == n) {
//             if(target == 0)
//                 return 1;
//             return 0;
//         }

//         // Don't take current element
//         int notTake = find(arr, index + 1, n, target);

//         // Take current element
//         int take = 0;
//         if(arr[index] <= target) {
//             take = find(arr, index + 1, n, target - arr[index]);
//         }

//         return take + notTake;
//     }

//     int perfectSum(vector<int>& arr, int target) {
//         return find(arr, 0, arr.size(), target);
//     }
// };

class Solution {
  public:

    int find(vector<int>& arr, int index, int n, int target,
             vector<vector<int>>& dp) {

        // Reached end
        if(index == n) {
            return target == 0;
        }

        // Already calculated
        if(dp[index][target] != -1) {
            return dp[index][target];
        }

        // Don't take
        int notTake = find(arr, index + 1, n, target, dp);

        // Take
        int take = 0;
        if(arr[index] <= target) {
            take = find(arr, index + 1, n, target - arr[index], dp);
        }

        return dp[index][target] = take + notTake;
    }

    int perfectSum(vector<int>& arr, int target) {

        int n = arr.size();

        vector<vector<int>> dp(n, vector<int>(target + 1, -1));

        return find(arr, 0, n, target, dp);
    }
};
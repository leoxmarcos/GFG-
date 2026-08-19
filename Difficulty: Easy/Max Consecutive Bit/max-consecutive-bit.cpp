class Solution {
public:
    int maxConsecBits(vector<int> &arr) {
        int maxi = 0;
        int count = 0;
        int prev = -1;

        for (int x : arr) {
            if (x == prev) {
                count++;
            } else {
                count = 1;
                prev = x;
            }

            maxi = max(maxi, count);
        }

        return maxi;
    }
};
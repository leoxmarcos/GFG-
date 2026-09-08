class Solution {
public:
    vector<int> threeDivisors(vector<int>& query) {
        vector<int> ans;

        for (int i = 0; i < query.size(); i++) {
            int n = query[i];
            int count = 0;

            for (int j = 2; j * j <= n; j++) {
                bool isPrime = true;

                for (int k = 2; k * k <= j; k++) {
                    if (j % k == 0) {
                        isPrime = false;
                        break;
                    }
                }

                if (isPrime) {
                    count++;
                }
            }

            ans.push_back(count);
        }

        return ans;
    }
};
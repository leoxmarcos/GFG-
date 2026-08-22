class Solution {
  public:
    int maxTripletProduct(vector<int>& arr) {
        int n = arr.size();

        sort(arr.begin(), arr.end());

        int product1 = arr[n - 1] * arr[n - 2] * arr[n - 3];
        int product2 = arr[0] * arr[1] * arr[n - 1];

        return max(product1, product2);
    }
};
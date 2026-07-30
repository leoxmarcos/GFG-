class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
         int candidate = -1;
        int count = 0;

        //  Find candidate
        for (int num : arr) {
            if (count == 0) {
                candidate = num;
                count = 1;
            }
            else if (num == candidate) {
                count++;
            }
            else {
                count--;
            }
        }

        //  Verify candidate
        count = 0;
        for (int num : arr) {
            if (num == candidate)
                count++;
        }

        if (count > arr.size() / 2)
            return candidate;

        return -1;
    }
};
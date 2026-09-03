class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
        // code  here
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int i = 0, j = 0;
        int count = 0;

        while(i < a.size() && j < b.size()) {

            if(a[i] == b[j]) {
                count++;
                i++;
                j++;
            }
            else if(a[i] < b[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return count;
    }
};
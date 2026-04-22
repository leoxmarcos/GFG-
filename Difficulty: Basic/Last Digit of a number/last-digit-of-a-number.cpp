class Solution {
  public:
    int lastDigit(int n) {
        // Code here
        int res=n%10;
        if(n>0){
          return res;
        }
        return (-1*res);
    }
};
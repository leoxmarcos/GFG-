class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
        int sum =0;
        for(int i=1;i<=n;i++){
            int power=pow(i,3);
            sum =sum+power;
        }
        return sum;
    }
};
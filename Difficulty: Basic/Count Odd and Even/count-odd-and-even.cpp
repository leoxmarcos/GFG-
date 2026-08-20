class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        // code here
  int oddnum=0;
          int evennum=0;

          for(int i=0;i<arr.size();i++){
              if(arr[i]%2==0){
                  evennum++;
              }
              else if(arr[i]%2!=0){
                  oddnum++;
              }
          }
           return {oddnum, evennum};
      }

};
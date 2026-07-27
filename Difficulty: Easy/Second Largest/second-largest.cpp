class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest =-1;
        int secondlargest =-1;
        
        for(int num:arr){
            if(num>largest){
                secondlargest=largest;
                largest=num;
            }
            else if (num<largest && num> secondlargest){
                secondlargest=num;
            }
            
        }
        return secondlargest;
    }
};
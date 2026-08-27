
class Solution {
  public:
    string reverse(string str) {
        // code here.
        int i=0;
        int j=str.size()-1;
        while(i<j){
            if(!((str[i]>=97 && str[i]<=122)|| (str[i]>=65 && str[i]<=90))){
               i++;
               continue; 
            }
            if(!((str[j]>=97 && str[j]<=122)|| (str[j]>=65 && str[j]<=90))){
               j--;
               continue; 
            }
            swap(str[i],str[j]);
            i++;
            j--;
        }
        return str;
    }
};
// class Solution {
//   public:
         
//          void rotateanticlockwise(string &s)
//          {
//              char c=s[0];
//              int index=1;
             
//              while(index<s.size()){
//                  s[index-1]=s[index];
//                  index++;
//              };
             
//              s[s.size()]=c;
             
//          }
        
//           void rotateclockwise(string &s)
//         {
//             char c=s[s.size()-1];
//             int index =s.size()-2;
//             while(index>=0)
//             {
//                 s[index+1]=s[index];
//                 index--;
//             };
            
//             s[0]=c;
//         }
        
//     bool isRotated(string& s1, string& s2) {
        
//         if(s1.size()!=s2.size())
//         return false;
        
//         string clockwise,anticlockwise;
//         clockwise=s1;
        
//         rotateclockwise(clockwise);
//         rotateclockwise(clockwise);
        
//         if(clockwise==s2)
//         return true;
        
//         anticlockwise=s1;
//         rotateanticlockwise(anticlockwise);
//         rotateanticlockwise(anticlockwise);
//         // code here
        
//         if(anticlockwise==s2)
//         return true;
        
//         return false;
        
       
//     }
// };





class Solution {
  public:
  
    void clkwise_rotate_2_place(string& s)  //for n times rotation just replace 2 with n.
        {
            int n=s.size();
            string temp=s;
            
            for(int i=0; i<n; i++)
            s[(i+2)%n]=temp[i];
        }
        
        void anticlkwise_rotate_2_place(string& s)  //for n times rot. replace 2 with n.
        {
            int n=s.size();
            string temp=s;
            for(int i=0; i<n; i++)
            {
                int index=(i-2);
                if (index<0)
                s[n+index]=temp[i];
                else
                s[index]=temp[i];
            }
        }
    bool isRotated(string& s1, string& s2) {
        // code here
        int n=s1.size();
        if(s1.size()!=s2.size())
        return 0;
        
        string s1_clkwise=s1, s1_anticlkwise=s1;
        clkwise_rotate_2_place(s1_clkwise);
        if (s1_clkwise==s2)
        return 1;
        
        anticlkwise_rotate_2_place(s1_anticlkwise);
        if(s1_anticlkwise==s2)
        return 1;
        
        return 0;
        
    }
};

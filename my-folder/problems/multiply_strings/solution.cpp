class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0" )
        return "0";
        vector<int> res(num1.size()+num2.size(),0);
        for(int  i=num1.size()-1; i>=0; --i)
        {
          for(int j=num2.size()-1; j>=0; --j)
          {
              //this step is for converting string to integer
              res[i+j+1]+=(num1[i]-'0')*(num2[j]-'0');
               res[i+j]+=res[i+j+1]/10;
               res[i+j+1]=res[i+j+1]%10;
          }
        }
        int i=0;
        while(i<res.size() && res[i]==0) 
          ++i;
           string num="";
           //this step is for converting integer to string
           while(i<res.size()) num.push_back(res[i++]+'0');
           
           return num;

        
    }
};
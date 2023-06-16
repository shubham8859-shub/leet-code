class Solution{
    public:
    double myPow(double x,int n)
    {
        double res=1;
        long long m=n;
        if(n<0)
        {
            m=-1*m;
        }
        
        while(m>0)
        {
            if(m%2==1)
            {
                res=x*res;
                m=m-1;
            }
            else{
              
              m=m/2;
              x=x*x;
            }
        }
        if(n<0)
        {
            res=1/res;
        }
            
           
           
        
        return res;
    }
};
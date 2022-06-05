class Solution {
public:
    vector<int> sumZero(int n)
   {
        vector<int> res;
       if(n%2==0)
       {
           int j=1;
           for(int i=0;n>res.size(); i++)
           {
               res.push_back(j);
               res.push_back(-j);
               j++;
           }
       }
       else
       {
         int j=1;
           for(int i=0;n-1>res.size(); i++)
           {
               res.push_back(j);
               res.push_back(-j);
               j++;
           }  
           res.push_back(0);
       }
        return res;
    }
};
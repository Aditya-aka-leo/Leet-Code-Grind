class Solution {
public:
    int removeDuplicates(vector<int>& nums)
      {
        int j=0;
        int i=0;
        for(; i <nums.size()-1; i++)
        {
            if(nums.at(i) == nums.at(i+1))
            {
                j=i;
              while((j<nums.size()-1) && (nums.at(j) == nums.at(j+1)))
              
              {
                j++;
              }
                nums.erase(nums.begin()+i,nums.begin()+j);
                }
            
            
 
        }
        
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums.at(i)<<endl;
        }
        return nums.size();  
    
    }
    
};
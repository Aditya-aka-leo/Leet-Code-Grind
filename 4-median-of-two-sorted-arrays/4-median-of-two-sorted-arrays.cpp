class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int k=0;
        int i=0,j=0;
        vector<int> merged;
        while(i < nums1.size() && j < nums2.size() )
        {
            if(nums1[i] < nums2[j])
            {
                merged.push_back(nums1[i]);
                i++;
                k++;
            }
            else
            {
                merged.push_back(nums2[j]);
                j++;
                k++;
            }
        }
        for(;i<nums1.size();i++)
        {
            merged.push_back(nums1[i]);
            k++;
            
        }
          for(;j<nums2.size();j++)
        {
            merged.push_back(nums2[j]);
            k++;
        }
        
        double med;
        if(merged.size()%2==0)
        {
            int temp=(merged.size()-1)/2;
            med = (merged[temp] +merged[temp+1])/2.0;
        }
        else
            med=merged[(merged.size())/2];
        return med;
            
    }
};
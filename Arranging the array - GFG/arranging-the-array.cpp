//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            int pos=0;
            int neg=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)
                neg++;
                else
                pos++;
            }
            if(pos == 0 || neg == 0)
            return;
            int ans[n];
            int j=pos;
            int m=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)
                {
                ans[m]=arr[i];
                m++;
                    
                }
                else
                {
                   ans[n-j]=arr[i];
                   j--;
                }
            }
            for(int i=0;i<n;i++)
            {
                arr[i]=ans[i];
            }

            
            
            
            
           
            
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends
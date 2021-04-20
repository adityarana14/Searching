class Solution{
    public:
    int find_height(int tree[], int n, int k)
    {
        // code here
        sort(tree, tree+n);
        int i=0;
        int j=tree[n-1];
        
        
        while(i<=j)
        {
            int mid = (i+j)/2;
            
            int val =0;
            for(int k=0;k<n;k++)
            {
                if(tree[k]>mid)
               val = val + tree[k]-mid;
            }
             
            
            if(val == k )
            {
                return mid;
            }
            if(val > k)
            {
                i=mid+1;
            }
            
            if(val < k )
            {
                j=mid-1;
            }
        }
        
        return -1 ;
    }
};

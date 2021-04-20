class Solution{
    public:
    int find_height(int tree[], int n, int k)
    {
        // code here
        priority_queue<int> pq;
        for(int i=0;i<n; i++)
        {
            pq.push(tree[i]);
        }
        
        int min = 0;
        int max = pq.top();
        
        
        while(min<=max)
        {
            int middle= (min + max )/2;   // middle number as our first point of reference 
            
            int value_got= 0;
            for(int i=0;i<n;i++)
            {
            
                if(tree[i]>middle)
                {
                    value_got+=tree[i]-middle;
                }
                
            }
            
            if(value_got==k)
            return middle;
            
            if(value_got > k )
            {
                min = middle + 1;
            }
            
            
            if(value_got <k)
            {
                max=middle-1;
            }
            
            
        }
        
        return -1;
    }
};

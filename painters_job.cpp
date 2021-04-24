class Solution
{
    public:
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        int max = 0;
        int sum=0;
        for (int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        
        long long int left = max;
        long long int right = sum;
        long long int mid;
        long long int answer;
        
        while(left<=right)
        {
        
            mid = (left + right)/2;
            int count =0;
            sum=0;
            bool flag= true;
            for(int i=0;i<n;i++)
            {
                sum= sum + arr[i];
                if(sum>mid)
                {
                    count ++;
                    sum= arr[i];
                }
                if(count>=k)
                {
                flag = false;
                break;
                }
            }
            
            if(flag==true)
            {
                answer=mid;
                right= mid -1;
            }
            else 
            {
                left = mid + 1;
            }
            
   
            
        }
        
        return answer;
        
    }
};
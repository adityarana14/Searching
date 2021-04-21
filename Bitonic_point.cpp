class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    //we have to do this proble in o(logn) which means we have to use 
	    //binary search concept,  if you use priority_queue it will give time limit exceed error
	    //because time complexity for priority_queues are generally o(nlog(hmax));
	    
	    
	    int i=0;
	    int j=n-1;
	    int mid=0;
	    
	    while(i<=j)
	    {
	      
	        if(i==j)
	        return arr[i];
	        
	        mid=(i+j)/2;
	        //cout<<"i j and mid value "<<i<<" "<<j<<" "<<mid<<endl;
	        if(mid!=0)
	        {
	        
	        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
	        {
	            return arr[mid];
	        }
	        }
	        if(arr[mid]<arr[mid-1])
	        {
	            j=mid-1;
	        }
	        
	        if(arr[mid]<arr[mid+1])
	        {
	            i=mid+1;
	        }
	    }
	        
	        
	        
	    
	   
	}
};
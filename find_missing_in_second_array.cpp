class Solution{
	
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    vector<long long > answer;
	    unordered_set<long long > s;
	    
	    for(int i=0;i<M;i++)
	    {
	        s.insert(B[i]);
	    }
	    
	    for(int i=0;i<N;i++)
	    {
	        if(s.find(A[i])==s.end())
	        {
	            answer.emplace_back(A[i]);
	        }
	    }
	    
	    return answer;
	} 
};
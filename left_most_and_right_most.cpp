class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
         pair<long, long > p;
        auto lower = lower_bound(v.begin(),v.end(),x);
        auto upper = upper_bound(v.begin(),v.end(),x);
        
        
        if(binary_search(v.begin(),v.end(),x))
        {
      
       
        p.first=lower-v.begin();
        p.second=upper-v.begin()-1;
        
        return p;
        }
        else {
            p.first=-1;
            p.second=-1;
            return p;
        }
    }
};
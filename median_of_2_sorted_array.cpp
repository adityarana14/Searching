double MedianOfArrays(vector<int>& array1, vector<int>& array2)
{
    // Your code goes here
    int i=0,j=0;
    vector<double> answer;
    while(i!=array1.size() || j!=array2.size())
    {
        if(i!=array1.size() && j!=array2.size())
        {
            if(array1[i]<array2[j])
            {
                answer.push_back(array1[i]);
                i++;
            }
            else
            {
                answer.push_back(array2[j]);
                j++;
            }
        }
        else{
            if(i==array1.size())
            {
                while(j!=array2.size())
                {
                    answer.push_back(array2[j]);
                    j++;
                }
            }
            else{
                while(i!=array1.size())
                {
                    answer.push_back(array1[i]);
                    i++;
                }
                
            }
        }
    }
    
    
    
    double start = 0 ;
    int end = answer.size();
    if(end % 2== 0)
    {
        
        double prev = double(answer[((start+(double)end)/2.00) -1 ]);
        double next = double(answer[((start+(double)end)/2.00)  ]);
        double ans = (prev+next)/2.00;
        return ans;
    }
    else
    {
    double ans= answer[(start+end)/2];
    return ans;
    }
    
 
    
}
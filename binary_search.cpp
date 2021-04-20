#include<bits/stdc++.h>
using namespace std;


int binary_search1(vector<int> v,int index)
{
    int answer=v[index];
    return answer;
}

int main()
{
    cout<<"binary search ::"<<endl;
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    int key=3;

    int i=0;
    int j=v.size()-1;
    int val=0;

    while(i<=j)
    {
            int mid_index= ( i + j )/2;
            val = binary_search1(v, mid_index);
            cout<<"value val here is "<<val<<" "<<mid_index<<endl;
            
            if(val == key)
            {
                cout<<"element found in the position : "<<mid_index<<endl;
                break;
            }

            if(val > key)
            {
                   j=mid_index-1; 
            }

            if(val < key)
            {
                i=mid_index+1;
            }

    }
    if(val==0)
    {
        cout<<"sorry coundn't find your number "<<endl;
    }


    return 0;
}
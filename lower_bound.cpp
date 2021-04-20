#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={1,2,3,4,5,5,5,6,7,8};
    auto itr=lower_bound(v.begin(),v.end(),5);
    cout<<"index where it has been shown first in the vector "<<itr-v.begin()<<endl;

    return 0;
}
// Sequence Equtaion --> HackerRank 

// O(n^2) solution 

#include<bits/stdc++.h>
using namespace std;
vector<int> permutationEquation(vector<int>v)
{
    int n = v.size();
    
    vector<int>ans(n,0);
    
    for(int i=1;i<=n;i++)
    {
        int first_value = 0;
        for(int j=0;j<n;j++)
        {
            if(v[j] == i)
            {
                first_value = j+1;
                break;
            }
        }
        int second_value = 0;
        for(int j=0;j<n;j++)
        {
            if(v[j] == first_value)
            {
                second_value = j+1;
                break;
            }
        }
        ans[i-1] = second_value;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int>ans = permutationEquation(v);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    return 0;
}

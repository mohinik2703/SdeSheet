#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
//     if(n==1)
//     {
//         return permutation;
//     }
    int ans =-1;
    for(int i = n-1;i>0;i--)
    {
        if(permutation[i]>permutation[i-1]){
            ans = i;
            break;
        }
    }
//     cout<<ans;
    if(ans==-1)
    {
        reverse(permutation.begin(),permutation.end());
//     for(int i=0;i<n;i++)
//     {
//         cout<<permutation[i]<<" ";
//     }
    }
    else{
        
     int bigger =ans;
    for(int j =ans+1; j<n;j++)
    {
        if(permutation[j]>permutation[ans-1]&& permutation[j]<=permutation[bigger])
        {
            bigger = j;
        }
    }
    swap(permutation[bigger],permutation[ans-1]);
    sort(permutation.begin()+(ans), permutation.end());}
    return permutation;
}


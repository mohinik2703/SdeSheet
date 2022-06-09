#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int , int> mr;
    int ans =0;
    int xor1 = 0;
    sort(arr.begin(),arr.end());
    for(int i =0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
            ans =i;
        xor1 ^= arr[i];
    }
    xor1 ^= arr[ans];
    for(int i =1;i<=n;i++)
    {
        xor1 ^= i;
    }
    mr.first = xor1;
    mr.second = arr[ans];
    return mr;
    
}

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    //kadane's algorithm
    long long current_sum =0;
    long long max_till_now =0;
    for(int i=0;i<n;i++)
    {
        current_sum += arr[i];
        max_till_now = max(max_till_now,current_sum);
        if(current_sum<0)
            current_sum =0;
    }
    return max_till_now;
}
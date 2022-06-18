#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    int maj_index =0;
    int count =1;
	for(int i=1;i<n;i++)
    {
        if(arr[maj_index] == arr[i])
            count++;
        else
            count--;
        if(count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    
    int count1 =0;
    for(int i=0;i<n;i++)
    {
        if(arr[maj_index]==arr[i])
            count1++;
    }
    if(count1>floor(n/2))
        return arr[maj_index];
    else 
        return -1;
}
    
    

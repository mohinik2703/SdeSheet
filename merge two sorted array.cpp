#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	vector<int> temp = {arr1};
    int pointer1=0;
    int pointer2=0;
    int k =0;
    while(pointer1<m && pointer2< n)
    {
        if(temp[pointer1]<arr2[pointer2])
        {
            arr1[k] = (temp[pointer1]);
            pointer1++;
            k++;
        }
        else
        {
             arr1[k] = arr2[pointer2];
            pointer2++;   
            k++;
        }
    }
    while(pointer1!=m)
    {
            arr1[k] = temp[pointer1];
            pointer1++;
            k++;
    }
        while(pointer2!= n)
        { 
            arr1[k] = arr2[pointer2];
            pointer2++;
            k++;  
        }
    return arr1;
}
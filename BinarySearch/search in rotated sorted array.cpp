int GetPivot(int *arr,int n)
{
    int s =0;
    int e= n-1;
    int  mid = s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s =mid +1;
        }
        else
        {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int BinarySearch(int arr[],int s,int e,int key)
{
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
   
}
int search(int* arr, int n, int key) {
    //find pivot
    int pivot = GetPivot(arr,n);
    int s =0;
    int e =n-1;
    int ans =0;
    if(key>=arr[pivot] && key<=arr[n-1])
    {
         ans = BinarySearch(arr,pivot,e,key);
    }
    else
    {
         ans = BinarySearch(arr,s,pivot-1,key);
    }
    return ans;
}
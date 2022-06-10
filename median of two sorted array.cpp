double median(vector<int> a, vector<int> b)
{
    if(a.size()>b.size())
    {
        return median(b,a);
    }
    int low =0;
    int high = a.size();
    int n = a.size()+b.size();
    while(low<=high)
    {
        int cut1 = (low +high)/2;
        int cut2 = (n +1)/2-cut1;
        int l1 = (cut1==0)? -1 : a[cut1-1];
        int l2 = (cut2==0)? -1: b[cut2-1];
      long long  int r1 = (cut1==a.size())? 1000000000 : a[cut1];
       long long int r2 = (cut2==b.size())? 1000000000 : b[cut2];
        if(l1<=r2 && l2<=r1)
        {
            if(n%2==0)
                return (max(l1,l2)+min(r1,r2))/2.00;
            else
               return max(l1,l2);
        }
        else if(l1>r2)
        {
            high = cut1-1;
        }
        else
        {
            low = cut1 +1;
        }    
    }
    return 0.0;
}
   


int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    int a1 = 0;
    int a2 =0;
    int count =0;
    int ans =0;
    while(a1<m && a2<n && count !=k)
    {
        if(row1[a1]<=row2[a2])
        {
            ans = row1[a1];
            count++;
            a1++;
//             cout<<ans<<" ";
        }
        else
        {
            ans = row2[a2];
            count++;
            a2++;
//             cout<<ans<<" ";
        }
    }
//     cout<<ans<<" ";
    while(a1<m && count !=k)
    {
        ans = row1[a1];
        a1++;
        count++;
    }
//     cout<<ans<<" ";
        while(a2<n && count !=k)
    {
        ans = row2[a2];
        a2++;
        count++;
    }
//     cout<<ans<<" ";
    
    return ans;
    
}
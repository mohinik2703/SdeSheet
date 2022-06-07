#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> pascal_vector;
    pascal_vector.push_back({1});
    if(n==1)
    return  pascal_vector;
    pascal_vector.push_back({1,1});
    if(n==2)
    {
    return pascal_vector;
    }
    else
    {
        for(int i =2; i<n;i++)
        {
            vector<long long int> temp(i+1,1);
                for(int j=1;j<i;j++)
                {
                  temp[j] =(pascal_vector[i-1][j-1]+pascal_vector[i-1][j]);
                }
            pascal_vector.push_back(temp);
            }  
        }
    return pascal_vector;
    }

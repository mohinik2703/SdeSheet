#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	int res =1;
    while(n)
    {
        if(n%2==1)
        {
           res = (1ll*res*(x)%m)%m;
        }
            x = (1ll*(x)%m*(x)%m)%m;
            n = n/2;
          
    }
    return res;
}
#include <stdio.h>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    long t,l,r;
    cin >> t;
    while(t--){
        cin >> l >> r;
        long ans=0;
        for(long i=l;i<=r;i++){
            long sumOfDigits=0;
            while(i!=0){
                sumOfDigits+=i%10;
                i=i/10;
            }
            double sqroot = sqrt(sumOfDigits);
            if((sqroot-floor(sqroot))==0)
            ans++;
        }
        cout << ans;
    }

    return 0;
}

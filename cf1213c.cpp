
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m, a, k=0;
    int cas;

    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%lld%lld",&n,&m);
        if(m%10==0) printf("0\n");
        else if(m%2)
        {
            if(!(m%5))
            {
                cout << n/m/2*5+(n/m%2)*5 << endl;
            }
            else
            {
                k = n/m/10*45;
                for(int i=0;i<n/m%10;i++)
                    k+=m*(i+1)%10;
                cout << k << endl;
            }
        }
        else
        {
            k = n/m/5*20;
            for(int i=0;i<n/m%5;i++)
                k+=m*(i+1)%10;
            cout << k << endl;
        }
        k = 0;
    }

    return 0;
}


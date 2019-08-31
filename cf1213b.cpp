#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[150005], j=0, cas, n, k=0, x;
    int h = 0, t = 0;

    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);

            if(j==0) a[j] = x, ++j;
            /*else if(j==1)
            {
                if(a[0]>x) a[0]=x, k++;
                else a[1]=x, j++;
            }*/
            else{h = 0, t = j;
                while((t-h)/2!=0)
                {
                    if(a[h+(t-h)/2]>x) t=h+(t-h)/2;
                    else h=h+(t-h)/2;
                }
                /*k+=j-t, a[t]=x, j=t+1;
printf("kk %d  ",k);*/
                if(t-h==1)
                {
                    if(a[h]<=x) k+=j-t, a[t]=x, j=t+1;
                    else k+=j-h, a[h]=x, j=h+1;
                }
                else k+=j-t, a[t]=x, j=t+1;
            }
        }
        cout << k << endl;
        k = j = 0;
        for(int i=0;i<n;i++)
            a[i] = 0;
    }

    return 0;
}

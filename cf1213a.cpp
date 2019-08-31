
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,o=0,e=0,x;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x%2) ++o;
        else ++e;

    }
    printf("%d\n",min(o,e));
    return 0;
}

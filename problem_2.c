#include<stdio.h>
int main()
{
    int n,l,m,k;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d %d",&l,&m,&k);
        int p=m*k;
    if(l>=p)
    {
        printf("Case %d: Yes\n",i);
    }
    else{
        printf("Case %d: No\n",i);
    }
    }
    
}
#include<stdio.h>
int main()

{
    int n;
    char k[101];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",&k);
        if(k[100]%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    return 0;
}

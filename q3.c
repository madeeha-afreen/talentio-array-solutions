#include <stdio.h>
int main() 
{
    int n, flag=0, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j=(n-1); j>=0; j--)
    {
        if(m==arr[j])
        {
            
            printf("%d", j+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    return 0;
}

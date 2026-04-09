#include <stdio.h>
void main()
{
    int cigars,weekend;
    printf("enter the number of cigars\n");
    scanf("%d",&cigars);
    printf("enter 0 for weekdays:\n enter 1 for weekend\n");
    scanf("%d",&weekend);
    if(weekend)
    {
        if (cigars>=40)
        {
            printf("success");
        }
        else
        {
            printf("fail");
        }
    }
    else
    {
        if(cigars>=60&&cigars<=40)
        {
            printf("success");
        }
        else
        {
            printf("fail");
        }
    }
}


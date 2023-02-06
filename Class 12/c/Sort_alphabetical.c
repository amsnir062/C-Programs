#include<stdio.h>
struct identity{
    char name[20];
    int roll;
    char add[30];
}s[5];
int main()
{
    int i,j,a;
    char ch[5];
    for(i=0;i<5;i++)
    {
        printf("Enter name, roll number and address");
        scanf("%s%d%s",s[i].name,&s[i].roll,s[i].add);
    }
    ch[0]=s[0].name[0];
    ch[1]=s[1].name[0];
    ch[2]=s[2].name[0];
    ch[3]=s[3].name[0];
    ch[4]=s[4].name[0];
     for (i = 0; i < 5; ++i) 
        {
 
            for (j = i + 1; j < 5; ++j)
            {
 
                if (ch[i] > ch[j]) 
                {
 
                    a =  ch[i];
                    ch[i] = ch[j];
                    ch[j] = a;
 
                }
 
            }
 
        }
    printf("Order as alphabetical wise: \n");
    printf("Name\tRoll\tAddress\n");
        for (i = 0; i < 5; ++i){
            printf("%s\t%d\t%s\n",s[i].name,s[i].roll,s[i].add);

        }

return 0;
}

#include<stdio.h>
struct batsman
{
    double runs, four, six, running, ballfcd, run, sr, ext;
    char name[25];
}bat[100];

int main()
{
    int i, n;
    printf("Batsmen Details");
    printf("\n===============\n");
    printf("Enter the No. of Batsmen: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n");
        printf("Batsman No.%d Details", i+1);
        printf("\n====================\n");
        printf("Enter The Name: ");
        scanf("%s", &bat[i].name);
        printf("\n");
        printf("Enter The No. of 4s scored: ");
        scanf("%d", &bat[i].four);
        printf("\n");
        printf("Enter The No. of 6s scored: ");
        scanf("%d", &bat[i].six);
        printf("\n");
        printf("Enter The Run made from extras: ");
        scanf("%d", &bat[i].ext);
        printf("\n");
        printf("Enter The No. of ball faced: ");
        scanf("%d", &bat[i].ballfcd);
        printf("\n");
    }

    printf("\nNAME\t\tRUN SCORED\tFOUR(s)\tSIX(s)\tEXTRAS\tBALL(s) FACED\tSTRIKE RATE\n");
    for(i=0;i<n;i++)
    {
        bat[i].run=(4*bat[i].four)+(6*bat[i].six)+bat[i].ext;
        bat[i].sr=(bat[i].run*100)/bat[i].ballfcd;
        printf("%s\t\t%d\t\t%d\t%d\t%d\t%d\t\t%.2f\n", bat[i].name, bat[i].run,bat[i].four, bat[i].six,bat[i].ext, bat[i].ballfcd, bat[i].sr);
    }
    return 0;
}

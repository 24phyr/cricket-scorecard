#include<stdio.h>
struct bowler
{
    double overs, runs, maiden, wicket, econ;
    char name[50];
}ball[100];

int main()
{
    int i, n;
    printf("Bowlers Details");
    printf("\n===============\n");
    printf("Enter the No. of Bowlers: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\n");
        printf("Bowler No.%d Details", i + 1);
        printf("\n====================\n");
        printf("Enter The Name: ");
        scanf("%s", &ball[i].name);
        printf("\n");
        printf("Enter The overs: ");
        scanf("%d", &ball[i].overs);
        printf("\n");
        printf("Enter The Run given by bowler: ");
        scanf("%d", &ball[i].runs);
        printf("\n");
        printf("Enter The Maiden over: ");
        scanf("%d", &ball[i].maiden);
        printf("\n");
        printf("Enter The Wickets: ");
        scanf("%d", &ball[i].wicket);
        printf("\n");
    }

    printf("\nNAME\t\tOVERS\tMAIDENS\t\tRUNS\tWICKETS\t\tECONOMY\n");
    for(i=0;i<n;i++)
    {
        ball[i].econ = ball[i].runs / ball[i].overs;
        printf("%s\t\t%d\t%d\t\t%d\t%d\t\t%.2f\n", ball[i].name, ball[i].overs, ball[i].maiden, ball[i].runs, ball[i].wicket, ball[i].econ);
    }
    return 0;
}

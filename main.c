#include<stdio.h>

struct batsman
{
    double runs, four, six, running, ballfcd, run, sr, ext;
    char name[25];
}bat[100];

struct bowler
{
    double overs, runs, maiden, wicket, econ;
    char name[25];
}ball[100];

int main()
{
    int i, n, choice;

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
        printf("Enter The No. of overs played: ");
        scanf("%d", &ball[i].overs);
        printf("\n");
        printf("Enter The Runs given by bowler: ");
        scanf("%d", &ball[i].runs);
        printf("\n");
        printf("Enter The No. of maiden overs: ");
        scanf("%d", &ball[i].maiden);
        printf("\n");
        printf("Enter The No. of wickets taken: ");
        scanf("%d", &ball[i].wicket);
        printf("\n");
    }

    printf("All details are recorded\n");

    do
    {
        printf("\nEnter the choice:\n 1)Batsman detail:\n 2)Bowlers detail:\n 3)Exit\n ");
        scanf("%d",&choice);

        switch(choice)
        {
    case 1:
        printf("\nNAME\t\tRUN SCORED\tFOUR(s)\tSIX(s)\tEXTRAS\tBALL(s) FACED\tSTRIKE RATE\n");
        for(i=0;i<n;i++)
        {
            bat[i].run=(4*bat[i].four)+(6*bat[i].six)+bat[i].ext;
            bat[i].sr=(bat[i].run*100)/bat[i].ballfcd;
            printf("%s\t\t%d\t\t%d\t%d\t%d\t%d\t\t%.2f\n", bat[i].name, bat[i].run,bat[i].four, bat[i].six,bat[i].ext, bat[i].ballfcd, bat[i].sr);
        }
        break;

    case 2:
        printf("\nNAME\t\tOVERS\tMAIDENS\t\tRUNS\tWICKETS\t\tECONOMY\n");
        for(i=0;i<n;i++)
        {
            ball[i].econ = ball[i].runs / ball[i].overs;
            printf("%s\t\t%d\t%d\t\t%d\t%d\t\t%.2f\n", ball[i].name, ball[i].overs, ball[i].maiden, ball[i].runs, ball[i].wicket, ball[i].econ);
        }
        break;

    case 3:
        exit(1);

    default:
        printf("\n!!Please enter the correct choice!!\n");
        break;
        }

    }while(choice!=3);
    
return 0;
}

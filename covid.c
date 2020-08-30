#include<stdio.h>
#include<string.h>

struct covid
{
    int total_cases,total_active,total_recovered;
    char district[25];
}covid[100],t;

int main()
{
    int i,j,n;
    int date;
    char month[20];
    printf("Enter the date of data stored:\n");
    scanf("%d",&date);
    printf("Enter the no of covid cases to be stored:\n");
    scanf("%d",&n);
    printf("Enter covid cases in the pattern of  district , total cases, total active cases, total recovered cases\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %d %d %d",covid[i].district,&covid[i].total_cases,&covid[i].total_active,&covid[i].total_recovered);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(covid[j].total_cases<covid[j+1].total_cases)
            {
                t=covid[j];
                covid[j]=covid[j+1];
                covid[j+1]=t;
            }
        }
    }
    printf("\n The date of data collection is %d September,2020:\n",date);
    printf("\nCovid cases sorted in the order of total no of cases\n");
    printf("\nDistrict\t\tTotal Cases(s)\t\t Total Active cases \t\t Total recovered cases \n");
    printf("-------------------------------------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t\t\t%d\t\t\t%d\t\t\t\t%d\n",covid[i].district,covid[i].total_cases,covid[i].total_active,covid[i].total_recovered);
    }
}

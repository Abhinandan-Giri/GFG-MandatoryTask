#include<stdio.h>
#include<stdlib.h>
int main()
{
    int studentRN[100],phymarks[100],mathmarks[100],engmarks[100],chemmarks[100],csmarks[100],totmarks[100],nos,choice,sbr;
    float percentage[100],sbp;
    char grade[100],sbg;
    char *studentName[100][100],*result[100];
    printf("Enter number of students=");
    scanf("%d",&nos);
    for(int i=0;i<nos;i++)
    {
        printf("Enter Student register number:");
        scanf("%d",&studentRN[i]);
        printf("Enter Student name:");
        scanf("%s",&studentName[i]);
        printf("Enter Student physics marks:");
        scanf("%d",&phymarks[i]);
        printf("Enter Student chemistry marks:");
        scanf("%d",&chemmarks[i]);
        printf("Enter Student maths marks:");
        scanf("%d",&mathmarks[i]);
        printf("Enter Student english marks:");
        scanf("%d",&engmarks[i]);
        printf("Enter Student computer science marks:");
        scanf("%d",&csmarks[i]);
        totmarks[i]=phymarks[i]+chemmarks[i]+mathmarks[i]+engmarks[i]+csmarks[i];
        percentage[i]=totmarks[i]/5;
        if(percentage[i]>=90&&percentage[i]<=100)
        grade[i]='A';
        else if(percentage[i]>=80&&percentage[i]<90)
        grade[i]='B';
        else if(percentage[i]>=70&&percentage[i]<80)
        grade[i]='C';
        else if(percentage[i]>=60&&percentage[i]<70)
        grade[i]='D';
        else if(percentage[i]>=50&&percentage[i]<60)
        grade[i]='E';
        else if(percentage[i]>=40&&percentage[i]<50)
        grade[i]='F';
        else if(percentage[i]>=30&&percentage[i]<40)
        grade[i]='G';
        else if(percentage[i]>=20&&percentage[i]<30)
        grade[i]='H';
        else if(percentage[i]>=10&&percentage[i]<20)
        grade[i]='I';
        else
        grade[i]='J';
        if(percentage[i]>33)
        result[i]="PASS";
        else
        result[i]="FAIL";
    }
    printf("\nRecord Saved Successfully\n");
    do
    {
        printf("\n1. Search by Reg No.\n2. Search by Percentage\n3. Search by Grade\n4. Exit\nEnter your Choice:- ");
        scanf("%d",&choice);
       switch(choice)
        {
            case 1:
            printf("\nEnter Reg number=");
            scanf("%d",&sbr);
            for(int i=0;i<nos;i++)
            {
                if(studentRN[i]==sbr)
                {
                printf("\nReg Number:- %d\nStudent Name:- %s\nPhysics Marks:- %d\nChemistry Marks:- %d\nMaths Marks:- %d\nEnglish Marks:- %d\nComputer Science Marks:- %d\nTotal Marks:- %d\nPercentage:- %.2f\nGrade:- %c\nResult:- %s\n",studentRN[i],studentName[i],phymarks[i],chemmarks[i],mathmarks[i],engmarks[i],csmarks[i],totmarks[i],percentage[i],grade[i],result[i]);
                }
            }
            break;
            case 2:
            printf("\nEnter the percentage=");
            scanf("%f",&sbp);
            printf("\nStudent above %.2f\n",sbp);
            for(int i=0;i<nos;i++)
            {
                if(percentage[i]>=sbp)
                {
                printf("\nReg Number:- %d\nStudent Name:- %s\nPhysics Marks:- %d\nChemistry Marks:- %d\nMaths Marks:- %d\nEnglish Marks:- %d\nComputer Science Marks:- %d\nTotal Marks:- %d\nPercentage:- %.2f\nGrade:- %c\nResult:- %s\n",studentRN[i],studentName[i],phymarks[i],chemmarks[i],mathmarks[i],engmarks[i],csmarks[i],totmarks[i],percentage[i],grade[i],result[i]);
                }
            }
            break;
            case 3:
            printf("\nEnter the Grade=");
            scanf(" %c", &sbg);
            for(int i=0;i<nos;i++)
            {
                if(grade[i]==sbg)
                {
                printf("\nReg Number:- %d\nStudent Name:- %s\nPhysics Marks:- %d\nChemistry Marks:- %d\nMaths Marks:- %d\nEnglish Marks:- %d\nComputer Science Marks:- %d\nTotal Marks:- %d\nPercentage:- %.2f\nGrade:- %c\nResult:- %s\n",studentRN[i],studentName[i],phymarks[i],chemmarks[i],mathmarks[i],engmarks[i],csmarks[i],totmarks[i],percentage[i],grade[i],result[i]);
                }
            }
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong Input");
        }
}while(choice!=4);
    return 0;
}
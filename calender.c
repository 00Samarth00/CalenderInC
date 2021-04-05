#include<stdio.h>


//"01/01/1900" is Monday.

void main()
{
    int month,year;

    printf("To display Month Calender--\n");
    printf("Enter Month : \n");
    scanf("%d",&month);
    printf("Enter Year : \n");
    scanf("%d",&year);
    switch(month)
    {
        case 1:
        {
            printf("                     January %d   \n",year);
            break;
        }
        case 2:
        {
            printf("                     February %d   \n",year);
            break;
        }
        case 3:
        {
            printf("                     March %d   \n",year);
            break;
        }
        case 4:
        {
            printf("                     April %d   \n",year);
            break;
        }
        case 5:
        {
            printf("                     May %d   \n",year);
            break;
        }
        case 6:
        {
            printf("                     June %d   \n",year);
            break;
        }
        case 7:
        {
            printf("                     July %d   \n",year);
            break;
        }
        case 8:
        {
            printf("                     August %d   \n",year);
            break;
        }
        case 9:
        {
            printf("                     September %d   \n",year);
            break;
        }
        case 10:
        {
            printf("                     October %d   \n",year);
            break;
        }
        case 11:
        {
            printf("                     November %d   \n",year);
            break;
        }
        case 12:
        {
            printf("                     December %d   \n",year);
            break;
        }
        default:
        {
            printf("Entered valid month number");
        }

    }
    printf("SUN     MON     TUE     WED     THU     FRI     SAT\n");

    int diff;
    diff=(year-1900)*365;
    int y=1900;
    int n=0;
    for(y=1900;y<year;y++)
    {
        if(y%4==0)
        {
            n=n+1;
        }
    }
    diff=diff+n;

    switch(month)
    {
    case 1:
        {
            break;
        }
    case 2:
        {
            diff=diff+31;
            break;
        }
        case 3:
        {
            diff+=59;
            break;
        }
    case 4:
        {
            diff+=90;
            break;
        }
    case 5:
        {
            diff+=120;
            break;
        }
    case 6:
        {
            diff+=151;
            break;
        }
    case 7:
        {
            diff+=181;
            break;
        }
    case 8:
        {
            diff+=212;
            break;
        }
    case 9:
        {
            diff+=243;
            break;
        }
    case 10:
        {
            diff+=273;
            break;
        }
    case 11:
        {
            diff+=304;
            break;
        }
    case 12:
        {
            diff+=334;
            break;
        }

    }
    if(year%4==0 && month>2)
    {
        diff=diff+1;
    }



    int day;
    day=diff%7;
    //0=sunday;1=monday and so on...

    int i=0;
    int i1=0;
    int i2=0;
    int i3=0;
    int date31[31];
    for(i=0;i<31;i++)
    {
        date31[i]=(i+1);
    }
    int date30[30];
    for(i1=0;i1<30;i1++)
    {
        date30[i1]=(i1+1);
    }
    int date29[29];
    for(i2=0;i2<29;i2++)
    {
        date29[i2]=(i2+1);
    }
    int date28[28];
    for(i3=0;i3<28;i3++)
    {
        date28[i3]=(i3+1);
    }

    int x,z=0;

    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        switch(day)
        {
        case 0:
            {
                for(x=0;x<31;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date31[x]);
                    z=z+1;

                }
                break;
            }
        case 1:
            {
                printf(" \t");
                z=z+1;
                for(x=0;x<31;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date31[x]);
                    z=z+1;
                }
                break;
            }
        case 2:
            {
                printf(" \t \t");
                z=z+2;
                for(x=0;x<31;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date31[x]);
                    z=z+1;
                }
                break;
            }
        case 3:
            {
                printf(" \t \t \t");
                z=z+3;
                for(x=0;x<31;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date31[x]);
                    z=z+1;
                }
                break;
            }
        case 4:
            {
                printf(" \t \t \t \t");
                z=z+4;
                for(x=0;x<31;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date31[x]);
                    z=z+1;
                }
                break;
            }
        case 5:
            {
                printf(" \t \t \t \t \t");
                z=z+5;
                for(x=0;x<31;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date31[x]);
                    z=z+1;
                }
                break;
            }
        case 6:
            {
                printf(" \t \t \t \t \t \t");
                z=z+6;
                for(x=0;x<31;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date31[x]);
                    z=z+1;
                }
                break;
            }

        }
    }
    else if(month==4||month==6||month==9||month==11)
    {
        switch(day)
        {
        case 0:
            {
                for(x=0;x<30;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date30[x]);
                    z=z+1;
                }
                break;
            }
        case 1:
            {
                printf(" \t");
                z=z+1;
                for(x=0;x<30;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date30[x]);
                    z=z+1;
                }
                break;
            }
        case 2:
            {
                printf(" \t \t");
                z=z+2;
                for(x=0;x<30;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date30[x]);
                    z=z+1;
                }
                break;
            }
        case 3:
            {
                printf(" \t \t \t");
                z=z+3;
                for(x=0;x<30;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date30[x]);
                    z=z+1;
                }
                break;
            }
        case 4:
            {
                printf(" \t \t \t \t");
                z=z+4;
                for(x=0;x<30;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date30[x]);
                    z=z+1;
                }
                break;
            }
        case 5:
            {
                printf(" \t \t \t \t \t");
                z=z+5;
                for(x=0;x<30;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date30[x]);
                    z=z+1;
                }
                break;
            }
        case 6:
            {
                printf(" \t \t \t \t \t \t");
                z=z+6;
                for(x=0;x<30;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date30[x]);
                    z=z+1;
                }
                break;
            }
        }
    }
    else if(month==2)
    {
       if(year%4==0)
       {
            switch(day)
        {
        case 0:
            {
                for(x=0;x<29;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date29[x]);
                    z=z+1;
                }
                break;
            }
        case 1:
            {
                printf(" \t");
                z=z+1;
                for(x=0;x<29;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date29[x]);
                    z=z+1;
                }
                break;
            }
        case 2:
            {
                printf(" \t \t");
                z=z+2;
                for(x=0;x<29;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date29[x]);
                    z=z+1;
                }
                break;
            }
        case 3:
            {
                printf(" \t \t \t");
                z=z+3;
                for(x=0;x<29;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date29[x]);
                    z=z+1;
                }
                break;
            }
        case 4:
            {
                printf(" \t \t \t \t");
                z=z+4;
                for(x=0;x<29;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date29[x]);
                    z=z+1;
                }
                break;
            }
        case 5:
            {
                printf(" \t \t \t \t \t");
                z=z+5;
                for(x=0;x<29;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date29[x]);
                    z=z+1;
                }
                break;
            }
        case 6:
            {
                printf(" \t \t \t \t \t \t");
                z=z+6;
                for(x=0;x<29;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date29[x]);
                    z=z+1;
                }
                break;
            }
        }
       }
       else
       {
            switch(day)
        {
        case 0:
            {
                for(x=0;x<28;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date28[x]);
                    z=z+1;
                }
                break;
            }
        case 1:
            {
                printf(" \t");
                z=z+1;
                for(x=0;x<28;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date28[x]);
                    z=z+1;
                }
                break;
            }
        case 2:
            {
                printf(" \t \t");
                z=z+2;
                for(x=0;x<28;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date28[x]);
                    z=z+1;
                }
                break;
            }
        case 3:
            {
                printf(" \t \t \t");
                z=z+3;
                for(x=0;x<28;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date28[x]);
                    z=z+1;
                }
                break;

            }
        case 4:
            {
                printf(" \t \t \t \t");
                z=z+4;
                for(x=0;x<28;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date28[x]);
                    z=z+1;
                }
                break;
            }
        case 5:
            {
                printf(" \t \t \t \t \t");
                z=z+5;
                for(x=0;x<28;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date28[x]);
                    z=z+1;
                }
                break;
            }
        case 6:
            {
                printf(" \t \t \t \t \t \t");
                z=z+6;
                for(x=0;x<28;x++)
                {
                    if(z%7==0)
                    {
                        printf("\n");
                    }
                    printf("%d\t",date28[x]);
                    z=z+1;
                }
                break;
            }
        }
       }
    }





}










#include <stdio.h>
int main(){
    int a[5][5]={0},n,m;
    int seat,i,j,count;
    printf("The current status of seats:\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    do
    {
        printf("Press:\n1. To book seat.\n2. To cancel seat.\nEnter:");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("Enter the seat number(1-25) to book:\n");
            scanf("%d",&seat);
            if(0<seat&&seat<26)
            {
                count=0;
                for(i=0;i<5;i++)
                {
                    for(j=0;j<5; j++)
                    {
                        count++;
                        if(count==seat)
                        {
                            if(a[i][j]==1)
                            {
                                printf("The seat %d is already booked.\n",seat);
                            }
                            else
                            {
                                a[i][j]=1;
                            }
                        }
                    }
                }
                printf("The updated status of seats:\n");
                for(i=0;i<5;i++)
                {
                    for(j=0;j<5;j++)
                    {
                        printf("%d\t",a[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Seat number doesn't exist.\n");
            }
            break;
            case 2:
            printf("Enter the seat number(1-25) to cancel:\n");
            scanf("%d",&seat);
            if(0<seat&&seat<26)
            {
                count=0;
                for(i=0;i<5;i++)
                {
                    for(j=0;j<5; j++)
                    {
                        count++;
                        if(count==seat)
                        {
                            if(a[i][j]==0)
                            {
                                printf("The seat %d is already cancelled.\n",seat);
                            }
                            else
                            {
                                a[i][j]=0;
                            }
                        }
                    }
                }
                printf("The updated status of seats:\n");
                for(i=0;i<5;i++)
                {
                    for(j=0;j<5;j++)
                    {
                        printf("%d\t",a[i][j]);
                    }
                    printf("\n");
                }
            }
            else
            {
                printf("Seat number doesn't exist.\n");
            }
            break;
            default:
            printf("Invalid input.");
        }
        printf("Press.\n1. To continue.\n2. To exit.\nEnter:");
        scanf("%d",&m);
        printf("\n");
    }while(m==1);
    return 0;
}
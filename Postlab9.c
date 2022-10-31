#include<stdio.h>
int main(){
    int type;
    int Exit;
    int Seat_Number=0;
    int Seat[100]={0};
    while (1)
    {
        printf("\n----------------------------------------------------------------------------------------------------\n\t\t\t\tEnter the Type of Seat :- \nPress 1 for \"1st Class\" \tPress 2 for\"Economy Class\" \tPress 3 for \"Exit\" the Programm \n-----------------------------------------------------------------------------------------------------");
        printf("\nYour Choice = ");
        choice:
        scanf("%d",&type);
        if (type==1)
        {
            while (1)
        {
            printf("Enter the Seat Number(1-30) = ");
            scanf("%d",&Seat_Number);
            if (Seat[Seat_Number-1]==0)
            {
            if (Seat_Number>=1 && Seat_Number<=30)
            {
                Seat[Seat_Number-1]=1;
                break;
            }else
            {
                printf("Please !! Enter The Correct Seat Number.\n");
            }
            }else{
                printf("This Seat is Already Booked.\n");
            }
        }
            printf("Your Seat Number is %d in First Class Section",Seat_Number);
        }else if (type==2){
            while (1)
        {
            printf("Enter the Seat Number(31-100) = ");
            scanf("%d",&Seat_Number);
            if (Seat[Seat_Number-1]==0)
            {
            if (Seat_Number>=31 && Seat_Number<=100)
            {
                Seat[Seat_Number-1]=1;
                break;
            }else
            {
                printf("Please !! Enter The Correct Seat Number.\n");
            }
        }else{
            printf("Please !! Enter The Correct Chice.\n");
        }
        }
            printf("Your Seat Number is %d in Economy Class Section",Seat_Number);
        }else if (type==3)
        {
            printf("Programm is closed.");
            break;
        }else{
            printf("Enter The Correct Choice.");
        }
    }
}

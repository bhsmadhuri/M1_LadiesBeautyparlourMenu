#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include "mainsource.h"
#include "functionmain.h"

void Threading();
void Waxing();
void details();
void Bleach();
void ManiCure();
void Facial();
void Haircut();
void Makeup();
void Mehandi();
/* Main Contents */

/* Sub Contents */
void EyeRows(); //Threading
void FullFace();

void FullArms(); //Waxing
void FullLegs();
void FullBody();

void Fullarms(); //Bleach
void Fulllegs();
void Fullbody();

void Herbal(); //Alovera
void Strawberry();
void Alovera();
void Fruit();

void BoysCut(); //HairCut
void HairSpa();
void HairPack();
void main()
{ 
    details();
    int option;
    do
    {
        //printf("****Welcome to Ladies Beaty Parlorer****\n");
        system("cls");
        printf("\t\tPlease enter your choice from below (1-8):\n");
        printf("1. Threading\n");
        printf("2. Waxing\n");
        printf("3. Bleach\n");
        printf("4. ManiCure\n");
        printf("5. Facial\n");
        printf("6. Haircut\n");
        printf("7. Makeup\n");
        printf("8. Mehandi\n");
        printf("9. EXIT\n");
        printf("Contact Our Whatsapp Number 9874563210\n");
        printf("Our Website www.ladiesparlourer.com\n");
        printf("Enter your choice :\n");
        scanf("%d", &option);
        system("cls");
        switch (option)
        {
        case 1:
            Threading();
            break;
        case 2:
            Waxing();
            break;
        case 3:
            Bleach();
            break;
        case 4:
            ManiCure();
            break;
        case 5:
            Facial();
            break;
        case 6:
            Haircut();
            break;
        case 7:
            Makeup();
            break;
        case 8:
            Mehandi();
            break;
        default:
            printf("SORRY INVALID CHOICE!\n");
            printf("PLEASE CHOOSE FROM 1-8)\n");
        }
        getch();
    } while (option != 9);
}
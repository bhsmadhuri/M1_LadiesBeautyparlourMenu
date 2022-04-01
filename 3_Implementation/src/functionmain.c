#include"functionmain.h"
#include"mainsource.h"

struct PersonalDetails B;
char cont='y';
void details()
{
    //printf("\t\tThis Program is Implemented in C Programming\n");
    printf("\t\tWELCOME TO LADIES BEAUTY PARLOUR\n");
    printf("Enter Your Name:\n");
    fgets(B.name, sizeof(B.name), stdin);
    //scanf("%s", B.name);
    printf("Enter email ID :\n");
    scanf("%s", B.email);
    printf("Enter Permanent Address :\n");
    scanf("%s", B.address);
    printf("Enter the Mobile Number : \n");
    scanf("%lld", &B.phonenumber);
}
/* Main Contents */

void Threading()
{
    int A;
    char cont='y';
    while(cont=='y')
    {
        printf("\t\t***Threading Section****\n");
        printf("Please enter your choice from below (1-2):\n");
        printf("1. Eye Rows\n");
        printf("2. Full Face\n");
        printf("Enter your choice :\n");
        scanf("%d", &A);
        system("cls");
        switch (A)
        {
        case 1:
            EyeRows();
            break;
        case 2:
            FullFace();
            break;
        default:
            printf("SORRY INVALID CHOICE!\n");
            printf("PLEASE CHOOSE FROM 1 or 2\n");
        }
        //getch();
        printf("Enter any Key go Main Menu\n");
        scanf("%c",&cont);
    } 
}
 
void Waxing()
{
    int B;
    char cont='y';
    while(cont=='y')
    {
        printf("\t\t***Waxing Section****\n");
        printf("Please enter your choice from below (1-2):\n");
        printf("1. Full Arms\n");
        printf("2. Full Legs\n");
        printf("3. Full Body\n");
        printf("Enter your choice :\n");
        scanf("%d", &B);
        system("cls");
        switch (B)
        {
        case 1:
            FullArms();
            break;
        case 2:
            FullLegs();
            break;
        case 3:
            FullBody();
            break;
        default:
            printf("SORRY INVALID CHOICE!\n");
            printf("PLEASE CHOOSE FROM 1 ,2 3 \n");
        }
        //getch();
        printf("Enter any Key go Main Menu\n");
        scanf("%c",&cont);
    }
}
void Bleach()
{
    int C;
    char cont='y';
    while(cont=='y')
    {
        printf("\t\t***Bleach Section****\n");
        printf("Please enter your choice from below (1-3):\n");
        printf("1. Full Arms\n");
        printf("2. Full Legs\n");
        printf("3. Full Body\n");
        printf("Enter your choice :\n");
        scanf("%d", &C);
        system("cls");
        switch (C)
        {
        case 1:
            Fullarms();
            break;
        case 2:
            Fulllegs();
            break;
        case 3:
            Fullbody();
            break;
        default:
            printf("SORRY INVALID CHOICE!\n");
            printf("PLEASE CHOOSE FROM (1-3)\n");
        }
       // getch();
       printf("Enter any Key go Main Menu\n");
       scanf("%c",&cont);
    }
}
 
void ManiCure()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli \n",B.phonenumber);
    printf("Amount For Threading---> Full Mani Cure = Rs. 350\n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
void Facial()
{
    int D;
    char cont='y';
    while(cont=='y')
    {
        printf("\t\t***Facial Section****\n");
        printf("Please enter your choice from below (1-4):\n");
        printf("1. Herbal\n");
        printf("2. Strawberry\n");
        printf("3. Alovera\n");
        printf("4. Fruit\n");
        printf("Enter your choice :\n");
        scanf("%d", &D);
        system("cls");
        switch (D)
        {
        case 1:
            Herbal();
            break;
        case 2:
            Strawberry();
            break;
        case 3:
            Alovera();
            break;
        case 4:
            Fruit();
            break;
        default:
            printf("SORRY INVALID CHOICE!\n");
            printf("PLEASE CHOOSE FROM (1-4)\n");
        }
       // getch();
       printf("Enter any Key go Main Menu\n");
       scanf("%c",&cont);
    }
}
 
void Haircut()
{
    int E;
    char cont='y';
    while(cont=='y')
    {
        printf("\t\t***HairCut Section****\n");
        printf("Please enter your choice from below (1-3):\n");
        printf("1. Boys Cut\n");
        printf("2. Hair Spa\n");
        printf("3. Hair Pack\n");
        printf("Enter your choice :\n");
        scanf("%d", &E);
        system("cls");
        switch (E)
        {
        case 1:
            BoysCut();
            break;
        case 2:
            HairSpa();
            break;
        case 3:
            HairPack();
            break;
        default:
            printf("SORRY INVALID CHOICE!\n");
            printf("PLEASE CHOOSE FROM (1-3)\n");
        }
       // getch();
       printf("Enter any Key go Main Menu\n");
       scanf("%c",&cont);
    } 
}
void Makeup()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli \n",B.phonenumber);
    printf("Amount For Full Make Up = Rs. 1500 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
 
void Mehandi()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Mehandi Billing is Based on Design\n");
    printf("Starting Price For Mehandi = Rs. 300\n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}

/* Main Contents */



/* Sub Contents */


/* This is for Threading*/
void EyeRows()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Threading---> Eye Rows = Rs. 30 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
void FullFace()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Threading---> Full Face = Rs. 120\n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
/* This is for Threading*/


/* This is for Waxing*/
void FullArms()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Waxing---> Full Arms = Rs. 250 \n ");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
void FullLegs()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Waxing---> Full Legs = Rs. 400 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
void FullBody()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Waxing---> Full Body = Rs. 30 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
/* This is for Waxing*/


/* This is for Bleach*/
void Fullarms()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Bleach---> Full arms = Rs. 200 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
void Fulllegs()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Bleach---> Full legs = Rs. 400 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
void Fullbody()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Bleach---> Full body = Rs. 1500 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
/* This is for Bleach*/


/* This is for Facial*/
void Herbal()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Time Duration 40 min");
    printf("Amount For Facial---> Herbal = Rs. 900 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
void Strawberry()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Time Duration 40 min\n");
    printf("Amount For Facial---> Strawberry = Rs. 700 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
void Alovera()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Time Duration 40 min");
    printf("Amount For Facial---> Alovera = Rs. 900 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
void Fruit()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Facial---> Fruit = Rs. 900 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
/* This is for Facial*/


/* This is for Haircut*/
void BoysCut()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Haircut---> Boys Cut = Rs. 150 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
void HairSpa()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Haircut---> Hair Spa = Rs. 800\n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
void HairPack()
{
    printf("\t\t****BILL****\n\n");
    printf("Name : %s\n", B.name);
    printf("Mobile Number: %lli\n",B.phonenumber);
    printf("Amount For Haircut---> Hair Pack = Rs. 700 \n");
    printf("\t\t\tThank You Visit again \n");
    printf("*********************************************************************************\n");
    printf("\t\t\tAll Rights Resevred\n");
    printf("\n");
    printf("\n");
}
/* This is for Haircut*/


/* Sub Contents */


int units()
{
    int unit=80;
	if(amount==80){
		return 160;
	}
	else{
		return 0;
	}

}

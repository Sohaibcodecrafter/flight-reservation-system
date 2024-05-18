#include<stdio.h>
#include<string.h>
void printing()
{
    printf("\t \t \t \t \t \t===============================================\n");
    printf("\t\t \t \t \t \tWelcome to PIA Online Flight Reservation System\n");
    printf("\t \t \t \t \t \t===============================================\n");
}
void DisplayMenu()
{
    printf("Please Select your Choice:\n\n");
    printf("1. Flight Booking\n\n");
    printf("2. Flight cancellation\n\n");
    printf("3. Check Flight Bookings\n\n");
    printf("4. Exist\n\n");
}
struct biodata{
	char name[100];
    int CNIC[15];
    int passport[100];
    int Visa[20];
};
void BioData()
{ 	struct biodata data;
    
    printf("Enter your name: ");
    scanf("%s",&data.name);
    printf("Enter your CNIC(With Dashes):");
    scanf("%s",&data.CNIC);
    printf("Enter the passport No(with Dashes):");
    scanf("%s",&data.passport);
    printf("Enter the Visa number:");
    scanf("%s",&data.Visa);
}

float  fair(float x ,float luggage)
	{
			float islamabad =70000;
	float karachi =150000;
	float lahore =100000;
		float totalfair,extracharge;
		float overweight;
		overweight=luggage-32;
		extracharge=overweight*200;
	if(x==1)
	{
	  if(luggage>32)
	  {
	  	totalfair=islamabad+extracharge;
	
	  }
	  else if (luggage>0 &&luggage<=32)
	  {
	  	totalfair=islamabad;	
}
	  else printf("invalid input\n");
		  	return totalfair;

	}
if(x==2)
{
	if(luggage>32)
	  {
	  	totalfair=karachi+extracharge;
	  }
	  else if(luggage>0 &&luggage<=32)
	  {
	  	totalfair=karachi;
	  }
	  else printf("invalid input\n");

	  	return totalfair;
}
 if(x==3)
{
	if(luggage>32)
	  {
	  	totalfair=lahore+extracharge;
	  }
	  else if (luggage>0 &&luggage<=32)
	  {
	  	totalfair=lahore;
	  }
	  else printf("invalid input\n");

	  	return totalfair;
}

}
void Domestic()
{
    int DomesticChoice,luggageweight;
    printf("Which City you want to travel:\n");
    printf("1. Islamabad\n");
    printf("2. Karachi\n");
    printf("3. Lahore\n");
    scanf("%d",&DomesticChoice);
    

    switch(DomesticChoice){

      case 1:
          BioData();
            printf("Enter the luggage weight :");
    scanf("%f",&luggageweight);
          printf("your fair for islamabad is %.2f",fair(DomesticChoice,luggageweight));
          break;
          case 2:
          BioData();
            printf("Enter the luggage weight :");
    scanf("%f",&luggageweight);
          printf("your fair for karachi is %.2f",fair(DomesticChoice,luggageweight));
	break;
	case 3:
          BioData();
            printf("Enter the luggage weight :");
    scanf("%f",&luggageweight);
          printf("your fair for lahore is %,2f",fair(DomesticChoice,luggageweight));          
    break;
	}

}
void International()
{
   int InternationalChoice;
    printf("Which Country you want to travel:\n");
    printf("1. Dubai\n");
    printf("2. Saudi Arab\n");
    printf("3. America\n");
    scanf("%d",&InternationalChoice);
    switch(InternationalChoice){

      case 1:
          BioData();

    }
}
int main()
{
    int ch;
    int travel;
    printing();
    printf("\n");
    DisplayMenu();
    printf("Enter your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
          printf("Do you want to travel Domestic or International (press 1 for Domestic and 2 for International):");
          scanf("%d",&travel);
          if(travel==1)
          {
              Domestic();
              
          }
          else if(travel==2)
          {
              International();
          }


    }

}

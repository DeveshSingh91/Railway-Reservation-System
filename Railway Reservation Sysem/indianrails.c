#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<dos.h>
#include<key.h>
#include<mouse.h>
#include<vid_mem.h>
#define UP 72
#define DN 80
char s2[20],s1[20];
int k,z,l;
float t;
void concession();
void p();
void mmts();
void natrail();
void details();
void main()
{
	int i,j,n;
	clrscr();
	  bgcolor(16);
	rectangle(2,2,74,20,112);
	rectangle(3,57,15,0,96);
	rectangle(4,57,15,0,112);
	rectangle(5,57,15,0,32);
	pstr("WELCOME TO SOUTH CENTRAL RAILWAYS!!!",3,19,32);
	pstr("GOVT. OF INDIA                  *",4,32,112);
	printf("\n\n\n\n\n\n\n\t\tWE PROVIDE YOU THE FACILITY TO TRAVEL IN\n\n\n\t\t\t*********************\n\t\t\t*1.MMTS\n\n\t\t\t*2.NATIONAL RAILWAYS\n\n\t\t\t*********************\n");
	printf("\n\n\t\tEnter  Your Choice\n\n\t");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		mmts();
		break;
		case 2:
		natrail();
		break;
		default:
		printf("\nPlease Enter The Right Choice\n");
		break;
	}
	getch();
}
void mmts()
{
	int z,c,p,i,j,t,total=0,m,u,n,v;
	char s1[20],ch,q;
	clrscr();
	bgcolor(16);
	rectangle(1,2,74,22,112);
	printf("\n\tEnter The Date\n\t");
	gets(s1);
	gets(s1);
	printf("\t1.Hayat nagar\n\t2.Malakpet\n\t3.Chandrayangutta\n\t4.Faluknuma\n\t5.Kacheguda\n\t6.Vidyanagar\n\t7.Nampally\n\t8.Lakdikapool\n\t");
	pstr("Do you want to go via  ^HI-TECH CITY   or   ^AMEERPET",11,15,32);
	printf("\n\tEnter the blinking character\n\t");
	scanf("%c",&ch);
	if(ch=='h')
	{
	printf("\t10.Banjarahills\n\t11.VIT Park\n\t12.Hitech City\n\t13.Kondapur\n\t14.BHEL\n");
	}
	else
	printf("\n\t\t10.Khairtabad\n\t\t11.S.R.nagar\n\t\t12.Bharatnagar\n\t\t13.Lingampally\n\t\t14.BHEL\n");

	printf("\tEnter the place(station) number where you want to start\n\t");
	scanf("%d",&i);
	printf("\tEnter the place(departure station) number\n\t");
	scanf("%d",&j);
	n=j-i;
	printf("\n The price is Rs.6/- per stop(i.e 9stops =>9*6=54)\n");
	clrscr();
	bgcolor(112);
	rectangle(2,2,74,20,32);
	printf("\n\n\t\tHow many Adults\t");
	scanf("%d",&v);
	c=(n*3)*v;
	printf("\n\n\t\tEnter the number of children(0-5 years)\t");
	scanf("%d",&m);
	p=(n*2)*m;
	total=c+p;
	randomize();
	z=random(500);


/*_________________________message box enter here_________________________*/
  messagebox("      CONFIRM THE TICKET",10,19,'N',"NULL");
  t=response(10,19);
	    if(t==1)
	    {

       /*_____________-printing of ticket-________________*/



	clrscr();
	bgcolor(16);
	rectangle(1,4,70,22,112);
	printf("\n\n\t\t*************************************************\n");
	printf("\t\t\t   SOUTH CENTRAL RAILWAYS\n");
	printf("\t\t\t\t\tMMTS\n");
	printf("\t\tdate:");
	puts(s1);
	printf("\t\tticket no: 0%d",z);
	printf("\t\tFrom: %d         To: %d",i,j);
	printf("\n\t\tNO OF ADULTS              :   %d\n",v);
	printf("\n\t\tNO OF CHILDREN(0-5 years) :   %d\n",m);
	printf("\n\t\ttime taken will be %d minutes\n",n*5);
	printf("\t\tthe total no of kms are %d\n",n*7);
	printf("\t\tthe charge for you is Rs. %d/-\n",c);
	printf("\t\tthe charge for your children/child  is Rs. %d/-\n",p);
	printf("\t\tTHE TOTAL CHARGE IS  %d/-\n",total);
	printf("\t\t**PLEASE PROVIDE PROOF OF SENIOR CITIZEN(if any)**\n");
	printf("\t\t`note:please refer the from & to numbers back ");
	printf("\n\t\t    side of the ticket'");
	printf("\n\n\t\t\t\t*$*HAPPY JOURNEY*$*\n\n");
	printf("\t\t**************************************************\n");
	printf("\n\t\tpress any key to continue.......");
	scanf("%c",q);
	clrscr();
	bgcolor(16);
	rectangle(2,2,74,20,112);
		rectangle(6,12,54,8,BLK);
		rectangle(5,10,54,8,32);
		pstr("YOUR TICKET IS CONFIRMED!!!",6,25,32);
		gotoxy(23,17);
		rectangle(18,11,55,0,96);
		rectangle(19,11,55,0,112);
		printf("THANKS FOR UTILISING THIS FACILITY\n");
		printf("\t\t\t --SOUTH CENTRAL RAILWAYS--     ");
		pstr("                          *",19,11,112);
		rectangle(20,11,55,0,32);
	}
	if(t==2)
	{
		clrscr();
		bgcolor(112);
		rectangle(6,12,54,8,BLK);
		rectangle(5,10,54,8,32);
		pstr("ABORTED BY THE USER!!!",6,25,32);
		gotoxy(23,17);
		rectangle(18,11,55,0,96);
		rectangle(19,11,55,0,112);
		printf("THANKS FOR UTILISING THIS FACILITY\n");
		printf("\t\t\t --SOUTH CENTRAL RAILWAYS--     ");
		pstr("                          *",19,11,112);
		rectangle(20,11,55,0,32);
	 }
}
void natrail()
{
int q,i,j,m,n;
char f,d,ch,e;
clrscr();
bgcolor(16);
rectangle(2,2,74,20,112);
printf("\n\n\n\n\tenter the date of journey:-");
rectangle(4,35,30,0,15);gotoxy(36,5);
gets(s1);
gets(s1);
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
pstr("TR NO. TRN NAME        ORIGIN	               DEP   DESTNATN         ARR	 ",3,3,32);
printf("\n\n\n\n  __________________________________________________________________________");
printf(" \n   8563  PRASANTHI EXP    VISHAKAPATNAM  	10:45 BANGALORE CY JN 	10:00\n");
printf("   1019  KONARK EXPRESS   BEGAMPET  		07:15 VISHAKAPATNAM  	20:55\n");
printf("   7008  GODAVARI EXP  	  HYDERABAD DECAN 	17:15 VISHAKAPATNAM  	06:50\n");
printf("   7016  VISAKHA EXP  	  SECUNDERABAD JN 	17:00 VISHAKAPATNAM  	07:10\n");
printf("   2308  BKN HWH SUPFAST  BIKANER JN   		18:30 HOWRAH JN  	04:20\n");
printf("   2330  A P SMPRK KRNTI  DELHI         	18:45 HYDERABAD  	17:45\n");
printf("   2430  BANGLORE RJDHNI  H NIZAMUDDIN  	20:50 BANGALORE CY JN 	07:25\n");
printf("   2952  MUMBAI RAJDHANI  NEW DELHI     	16:00 MUMBAI CENTRAL  	08:35\n");
printf("   4008  SADHBHAWNA EXP   DELHI          	16:45 MUZAFFARPUR JN  	17:30\n");
printf("   6507  JU BANGLORE EXP  JODHPUR JN  		05:30 BANGALORE CY JN 	04:00\n");
printf("\n\n\t***please note  the code carefully***\n");
printf("\n\tenter the train code correctly as mentioned as above\n");
printf("\t");
scanf("%d",&n);
	randomize();
	z=random(500);
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
switch(n)
{
case  8563:
printf(" \n\n\n\n  8563  PRASANTHI EXP    VISHAKAPATNAM  	10:45 BANGALORE CY JN 	10:00\n");
printf("\n\n\tclass:\n\t1.FIRST AC\n\t2.SECOND AC \n\t3.2 CHAIR AC CAR\n\t4.S/L FIRST CLASS \n\t5.S/L SECOND CLASS\n\t6.GENERAL\n");
printf("\n\tenter ur choice:   ");
scanf("%d",&q);
switch(q)
{
case 1:
clrscr();
details();
t=399.0;
printf("\n\ttotal charge is  Rs.399/-per head");
printf("\n\tDO YOU WANT TO AVAIL ANY CONNCESSION\n\n\n\n");
d='y';
if(d=='y')
{
concession();
}
	  messagebox("      CONFIRM THE TICKET",10,19,'N',"NULL");
	  m=response(10,19);
	    if(m==1)
	    {

	  f='y';
/*________________printing of ticket__________________________*/
	if(f=='y')
	{
	clrscr();
	bgcolor(16);
	rectangle(2,2,75,20,112);
	printf("\n\n\t**********************************************\n");
	printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
	printf("\t\t  Government of INDIA\n\n");
	printf(" \tTrain no:8563\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  PRASANTHI EXP\n\t ");printf("Origin:   VISHAKAPATNAM   dep:10:45\n\t"); printf(" Dest:BANGALORE CY JN 	arr:10:00\n");
	p();
	}
	if(m==2)
{
		clrscr();
		bgcolor(112);
		rectangle(6,12,54,8,BLK);
		rectangle(5,10,54,8,32);
		pstr("ABORTED BY THE USER!!!",6,25,32);
		gotoxy(23,17);
		rectangle(18,11,55,0,96);
		rectangle(19,11,55,0,112);
		printf("THANKS FOR UTILISING THIS FACILITY\n");
		printf("\t\t\t --SOUTH CENTRAL RAILWAYS--     ");
		pstr("                          *",19,11,112);
		rectangle(20,11,55,0,32);
}
}
	      break;
				case 2:
				clrscr();
	details();
				t=359.0;
				printf("\n\n\ttotal charge is  Rs.359/-per head");
				printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
	d='y';
	//scanf("%c",&d);
	if(d=='y')
	{
	concession();}
	f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf("\tTrain no:8563\t\t\t\tTicket No:0%d\n\t",z);printf(" Train name: PRASANTHI EXP\n\t");printf("Origin:VISHAKAPATNAM   Dep:10:45\n\t");printf("Dest: BANGALORE CY JN    Arr:10:00\n");
p();}
      break;

			case 3:
			clrscr();
details();
	t=249.0;
			printf("\n\n\ttotal charge is  Rs.249/-per head");
			printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:8563\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  PRASANTHI EXP\n\t ");printf("Origin:   VISHAKAPATNAM   dep:10:45\n\t"); printf(" Dest:BANGALORE CY JN 	arr:10:00\n");
p();}
      break;
			case 4:
			clrscr();
details();
			t=199.0;
			printf("\n\n\ttotal charge is  Rs.199/-per head");
			printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:8563\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  PRASANTHI EXP\n\t ");printf("Origin:   VISHAKAPATNAM   dep:10:45\n\t"); printf(" Dest:BANGALORE CY JN 	arr:10:00\n");
p();}
      break;

			case 5:
			clrscr();
details();
			t=159.0;
			printf("\n\n\ttotal charge is  Rs.159/-per head");
			printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:8563\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  PRASANTHI EXP\n\t ");printf("Origin:   VISHAKAPATNAM   dep:10:45\n\t"); printf(" Dest:BANGALORE CY JN 	arr:10:00\n");
p();}
      break;
			}break;
			case  1019:
			printf(" \n\n\n\n  1019  KONARK EXPRESS  	BEGAMPET  	07:15 VISHAKAPATNAM  	20:55\n");
			printf("\n\n\tclass:\n\t1.FIRST AC\n\t2.SECOND AC \n\t3.2 CHAIR AC CAR\n\t4.S/L FIRST CLASS \n\t5.S/L SECOND CLASS\n\t6.GENERAL\n");
			printf("\n  enter ur choice:   ");
			scanf("%d",&q);
			switch(q)
			{
				case 1:
				clrscr();
details();
				t=414.0;
				printf("\n\ttotal charge is  Rs.414/-per head");
				printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:1019\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  KONARK EXPRESS\n\t ");printf("Origin:  BEGUMPET        dep:07:15\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:20:55\n");
p();}break;
				case 2:
				clrscr();
details();
				t=354.0;
				printf("\n\ttotal charge is  Rs.354/-per head");
				printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:1019\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  KONARK EXPRESS\n\t ");printf("Origin:  BEGUMPET        dep:07:15\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:20:55\n");
p();}break;
				case 3:
				clrscr();
details();
				t=294.0;
				printf("\n\ttotal charge is  Rs.294/-per head");
				printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:1019\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  KONARK EXPRESS\n\t ");printf("Origin:  BEGUMPET        dep:07:15\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:20:55\n");
p();}break;
				case 4:
				clrscr();
details();
				t=254.0;
				printf("\n\ttotal charge is  Rs.254/-per head");
				printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(48);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:1019\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  KONARK EXPRESS\n\t ");printf("Origin:  BEGUMPET        dep:07:15\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:20:55\n");
p();}break;
				case 5:
				clrscr();
details();
				t=199.0;
				printf("\n\ttotal charge is  Rs.194/-per head");
				printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:1019\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  KONARK EXPRESS\n\t ");printf("Origin:  BEGUMPET        dep:07:15\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:20:55\n");
p();}break;
			}break;
				case  7008:
				printf("\n\n\n\n  7008  GODAVARI EXP  	HYDERABAD DECAN 17:15 VISHAKAPATNAM  	06:50\n");
				printf("\n\n\tclass:\n\t1.FIRST AC\n\t2.SECOND AC \n\t3.2 CHAIR AC CAR\n\t4.S/L FIRST CLASS \n\t5.S/L SECOND CLASS\n\t6.GENERAL\n");
				printf("\n  enter ur choice:   ");
				scanf("%d",&q);
				switch(q)
				{
					case 1:
					clrscr();
details();
					t=450.0;
					printf("\n\ttotal charge is  Rs.450/-per head");
					printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:7008\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  GODAVARI EXPRESS\n\t ");printf("Origin:  HYDERABAD DECCAN        dep:17:15\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:06:50\n");
p();}break;
					case 2:
					clrscr();
details();
					t=399.0;
					printf("\n\ttotal charge is  Rs.399/-per head");
					printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:7008\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  GODAVARI EXPRESS\n\t ");printf("Origin:  HYDERABAD DECCAN        dep:17:15\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:06:50\n");
p();}break;
					case 3:
					clrscr();
details();
					t=350.0;
					printf("\n\n\ttotal charge is  Rs.350/-per head");
					printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:7008\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  GODAVARI EXPRESS\n\t ");printf("Origin:  HYDERABAD DECCAN        dep:17:15\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:06:50\n");
p();}break;
					case 4:
					clrscr();
details();
					t=250.0;
					printf("\n\n\ttotal charge is  Rs.250/-per head");
					printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:7008\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  GODAVARI EXPRESS\n\t ");printf("Origin:  HYDERABAD DECCAN        dep:17:15\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:06:50\n");
p();}break;
case 5:
clrscr();
details();
					t=190.0;
					printf("\n\n\ttotal charge is  Rs.190/-per head");
					printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:7008\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  GODAVARI EXPRESS\n\t ");printf("Origin:  HYDERABAD DECCAN        dep:17:15\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:06:50\n");
p();}break;

				}break;
					case  7016:
					printf("\n\n\n\n  7016  VISAKHA EXP  	SECUNDERABAD JN 17:00 VISHAKAPATNAM  	07:10\n");
					printf("\n\n\tclass:\n\t1.FIRST AC\n\t2.SECOND AC \n\t3.2 CHAIR AC CAR\n\t4.S/L FIRST CLASS \n\t5.S/L SECOND CLASS\n\t6.GENERAL\n");
					printf("\n  enter ur choice:   ");
					scanf("%d",&q);
					switch(q)
					{
						case 1:
						clrscr();
details();
						t=410.0;
						printf("\n\n\ttotal charge is  Rs.410/-per head");
						printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:7016\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  VISHAKA EXP\n\t ");printf("Origin:  SECUNDERABAD JN        dep:17:00\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:07:10\n");
p();}break;
case 2:
clrscr();
details();
t=390.0;
printf("\n\n\ttotal charge is  Rs.390/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:7016\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  VISHAKA EXP\n\t ");printf("Origin:  SECUNDERABAD JN        dep:17:00\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:07:10\n");
p();}break;

case 3:
clrscr();
details();
t=310.0;
printf("\n\n\ttotal charge is  Rs.310/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:7016\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  VISHAKA EXP\n\t ");printf("Origin:  SECUNDERABAD JN        dep:17:00\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:07:10\n");
p();}break;

case 4:
clrscr();
details();
t=250.0;
printf("\n\n\ttotal charge is  Rs.250/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:7016\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  VISHAKA EXP\n\t ");printf("Origin:  SECUNDERABAD JN        dep:17:00\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:07:10\n");
p();}break;

case 5:
clrscr();
details();
t=190.0;
printf("\n\n\ttotal charge is  Rs.190/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:7016\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  VISHAKA EXP\n\t ");printf("Origin:  SECUNDERABAD JN        dep:17:00\n\t"); printf(" Dest:VISHAKAPATNAM 	arr:07:10\n");
p();}break;
}break;
case  2308:
printf("\n\n\n\n  2308A BKN HWH SUPFAST  BIKANER JN   	18:30 HOWRAH JN  	04:20\n");
printf("\n\n\tclass:\n\t1.FIRST AC\n\t2.SECOND AC \n\t3.2 CHAIR AC CAR\n\t4.S/L FIRST CLASS \n\t5.S/L SECOND CLASS\n\t6.GENERAL\n");
printf("\n  enter ur choice:   ");
scanf("%d",&q);
switch(q)
{
case 1:
clrscr();
details();
t=425.0;
printf("\n\n\ttotal charge is  Rs.425/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2308A\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  BKN HWH SUPFAST\n\t ");printf("Origin:  BIKANER JN        dep:18:30\n\t"); printf(" Dest:HOWRAH 	arr:04:20\n");
p();}  break;
case 2:
clrscr();
details();
t=375.0;
printf("\n\n\ttotal charge is  Rs.375/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2308A\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  BKN HWH SUPFAST\n\t ");printf("Origin:  BIKANER JN        dep:18:30\n\t"); printf(" Dest:HOWRAH 	arr:04:20\n");
p();}    break;

case 3:
clrscr();
details();
t=325.0;
printf("\n\n\ttotal charge is  Rs.325/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2308A\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  BKN HWH SUPFAST\n\t ");printf("Origin:  BIKANER JN        dep:18:30\n\t"); printf(" Dest:HOWRAH 	arr:04:20\n");
p();}     break;

case 4:
clrscr();
details();
t=255.0;
printf("\n\n\ttotal charge is  Rs.255/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2308A\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  BKN HWH SUPFAST\n\t ");printf("Origin:  BIKANER JN        dep:18:30\n\t"); printf(" Dest:HOWRAH 	arr:04:20\n");
p();}   break;

case 5:
clrscr();
details();
t=195.0;
printf("\n\n\ttotal charge is  Rs.195/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
//scanf("%c",&d);
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2308A\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  BKN HWH SUPFAST\n\t ");printf("Origin:  BIKANER JN        dep:18:30\n\t"); printf(" Dest:HOWRAH 	arr:04:20\n");
p();}
      break;

}break;
case  2330:
printf("\n\n\n\n  2330  A P SMPRK KRNTI  DELHI         	18:45 HYDERABAD  		17:45\n");
printf("\n\n\tclass:\n\t1.FIRST AC\n\t2.SECOND AC \n\t3.2 CHAIR AC CAR\n\t4.S/L FIRST CLASS \n\t5.S/L SECOND CLASS\n\t6.GENERAL\n");
printf("\n  enter ur choice:   ");
scanf("%d",&q);
switch(q)
{
case 1:
clrscr();
details();
t=410.0;
printf("\n\n\ttotal charge is  Rs.410/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2330\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  A P SMPRK KRNTI\n\t ");printf("Origin:  DELHI        dep:18:40\n\t"); printf(" Dest:HYDERABAD 	arr:17:45\n");
p();}
      break;
case 2:
clrscr();
details();
t=350.0;
printf("\n\n\ttotal charge is  Rs.350/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2330\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  A P SMPRK KRNTI\n\t ");printf("Origin:  DELHI        dep:18:40\n\t"); printf(" Dest:HYDERABAD 	arr:17:45\n");
p();}      break;

case 3:
clrscr();
details();
t=290.0;
printf("\n\n\ttotal charge is  Rs.290/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2330\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  A P SMPRK KRNTI\n\t ");printf("Origin:  DELHI        dep:18:40\n\t"); printf(" Dest:HYDERABAD 	arr:17:45\n");
p();}      break;

case 4:
clrscr();
details();
t=250.0;
printf("\n\n\ttotal charge is  Rs.250/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2330\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  A P SMPRK KRNTI\n\t ");printf("Origin:  DELHI        dep:18:40\n\t"); printf(" Dest:HYDERABAD 	arr:17:45\n");
p();}
      break;

case 5:
clrscr();
details();
t=190.0;
printf("\n\n\ttotal charge is  Rs.190/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2330\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  A P SMPRK KRNTI\n\t ");printf("Origin:  DELHI        dep:18:40\n\t"); printf(" Dest:HYDERABAD 	arr:17:45\n");
p();}
      break;

}break;
case  2430:
printf("\n\n\n\n  2430  BANGLORE RJDHNI  H NIZAMUDDIN  	20:50 BANGALORE CY JN 	07:25\n");
printf("\n\n\tclass:\n\t1.FIRST AC\n\t2.SECOND AC \n\t3.2 CHAIR AC CAR\n\t4.S/L FIRST CLASS \n\t5.S/L SECOND CLASS\n\t6.GENERAL\n");
printf("\n  enter ur choice:   ");
scanf("%d",&q);
switch(q)
{
case 1:
clrscr();
details();
t=654.0;
printf("\n\n\ttotal charge is  Rs.654/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2430\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  BANGALORE RJDHNI EXP\n\t ");printf("Origin:  H NIZAMUDDIN        dep:20:50\n\t"); printf(" Dest:BANGALORE 	arr:07:25\n");
p();}
      break;
case 2:
clrscr();
details();
t=554.0;
printf("\n\n\ttotal charge is  Rs.554/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2430\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  BANGALORE RJDHNI EXP\n\t ");printf("Origin:  H NIZAMUDDIN        dep:20:50\n\t"); printf(" Dest:BANGALORE 	arr:07:25\n");
p();}
      break;

case 3:
clrscr();
details();
t=454.0;
printf("\n\n\ttotal charge is  Rs.454/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2430\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  BANGALORE RJDHNI EXP\n\t ");printf("Origin:  H NIZAMUDDIN        dep:20:50\n\t"); printf(" Dest:BANGALORE 	arr:07:25\n");
p();}
      break;

case 4:
clrscr();
details();
t=354.0;
printf("\n\n\ttotal charge is  Rs.354/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2430\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  BANGALORE RJDHNI EXP\n\t ");printf("Origin:  H NIZAMUDDIN        dep:20:50\n\t"); printf(" Dest:BANGALORE 	arr:07:25\n");
p();}
      break;

case 5:
clrscr();
details();
t=254.0;
printf("\n\n\ttotal charge is  Rs.254/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2430\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  BANGALORE RJDHNI EXP\n\t ");printf("Origin:  H NIZAMUDDIN        dep:20:50\n\t"); printf(" Dest:BANGALORE 	arr:07:25\n");
p();}
      break;

}break;
case  2952:
printf("\n\n\n\n  2952  MUMBAI RAJDHANI  NEW DELHI     	16:00 MUMBAI CENTRAL  	08:35\n");
printf("\n\n\tclass:\n\t1.FIRST AC\n\t2.SECOND AC \n\t3.2 CHAIR AC CAR\n\t4.S/L FIRST CLASS \n\t5.S/L SECOND CLASS\n\t6.GENERAL\n");
printf("\n  enter ur choice:   ");
scanf("%d",&q);
switch(q)
{
case 1:
clrscr();
details();
t=550.0;
printf("\n\n\ttotal charge is  Rs.550/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2952\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  MUMBAI RAJDHANI EXP\n\t ");printf("Origin:  NEW DELHI        dep:16:00\n\t"); printf(" Dest:MUMBAI 	arr:08:35\n");
p();}
      break;
case 2:
clrscr();
details();
t=450.0;
printf("\n\n\ttotal charge is  Rs.450/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2952\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  MUMBAI RAJDHANI EXP\n\t ");printf("Origin:  NEW DELHI        dep:16:00\n\t"); printf(" Dest:MUMBAI 	arr:08:35\n");
p();}
      break;

case 3:
clrscr();
details();
t=350.0;
printf("\n\n\ttotal charge is  Rs.350/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2952\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  MUMBAI RAJDHANI EXP\n\t ");printf("Origin:  NEW DELHI        dep:16:00\n\t"); printf(" Dest:MUMBAI 	arr:08:35\n");
p();}
      break;

case 4:
clrscr();
details();
t=250.0;
printf("\n\n\ttotal charge is  Rs.250/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2952\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  MUMBAI RAJDHANI EXP\n\t ");printf("Origin:  NEW DELHI        dep:16:00\n\t"); printf(" Dest:MUMBAI 	arr:08:35\n");
p();}
      break;

case 5:
clrscr();
details();
t=150.0;
printf("\n\n\ttotal charge is  Rs.150/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:2952\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  MUMBAI RAJDHANI EXP\n\t ");printf("Origin:  NEW DELHI        dep:16:00\n\t"); printf(" Dest:MUMBAI 	arr:08:35\n");
p();}
      break;

}break;
case  4008:
printf("\n\n\n\n  4008  SADHBHAWNA EXP  	DELHI          	16:45 MUZAFFARPUR JN  	17:30\n");
printf("\n\n\tclass:\n\t1.FIRST AC\n\t2.SECOND AC \n\t3.2 CHAIR AC CAR\n\t4.S/L FIRST CLASS \n\t5.S/L SECOND CLASS\n\t6.GENERAL\n");
printf("\n  enter ur choice:   ");
scanf("%d",&q);
switch(q)
{
case 1:
clrscr();
details();
t=368.0;
printf("\n\n\ttotal charge is  Rs.368/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:4008\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  SADHBHAWNA EXP\n\t ");printf("Origin:  NEW DELHI        dep:16:45\n\t"); printf(" Dest:MUZAFFARPUR 	arr:17:30\n");
p();}
      break;
case 2:
clrscr();
details();
t=318.0;
printf("\n\n\ttotal charge is  Rs.368/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:4008\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  SADHBHAWNA EXP\n\t ");printf("Origin:  NEW DELHI        dep:16:45\n\t"); printf(" Dest:MUZAFFARPUR 	arr:17:30\n");
p();}
      break;

case 3:
clrscr();
details();
t=298.0;
printf("\n\n\ttotal charge is  Rs.298/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:4008\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  SADHBHAWNA EXP\n\t ");printf("Origin:  NEW DELHI        dep:16:45\n\t"); printf(" Dest:MUZAFFARPUR 	arr:17:30\n");
p();}
      break;

case 4:
clrscr();
details();
t=218.0;
printf("\n\n\ttotal charge is  Rs.218/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:4008\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  SADHBHAWNA EXP\n\t ");printf("Origin:  NEW DELHI        dep:16:45\n\t"); printf(" Dest:MUZAFFARPUR 	arr:17:30\n");
p();}
      break;

case 5:
clrscr();
details();
t=168.0;
printf("\n\n\ttotal charge is  Rs.168/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:4008\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  SADHBHAWNA EXP\n\t ");printf("Origin:  NEW DELHI        dep:16:45\n\t"); printf(" Dest:MUZAFFARPUR 	arr:17:30\n");
p();}
      break;

}break;
case  6507:
printf("\n\n\n\n  6507  JU BANGLORE EXP  JODHPUR JN  	05:30 BANGALORE CY JN 	04:00\n");
printf("\n\n\tclass:\n\t1.FIRST AC\n\t2.SECOND AC \n\t3.2 CHAIR AC CAR\n\t4.S/L FIRST CLASS \n\t5.S/L SECOND CLASS\n\t6.GENERAL\n");
printf("\n  enter ur choice:   ");
scanf("%d",&q);
switch(q)
{
case 1:
clrscr();
details();
t=400.0;
printf("\n\n\ttotal charge is  Rs.400/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:6507\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  JU BANGALORE EXP\n\t ");printf("Origin:  JODHPUR        dep:05:30\n\t"); printf(" Dest:BANGALORE 	arr:04:00\n");
p();}
      break;
case 2:
clrscr();
details();
t=350.0;
printf("\n\n\ttotal charge is  Rs.350/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:6507\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  JU BANGALORE EXP\n\t ");printf("Origin:  JODHPUR        dep:05:30\n\t"); printf(" Dest:BANGALORE 	arr:04:00\n");
p();}
      break;

case 3:
clrscr();
details();
t=300.0;
printf("\n\n\ttotal charge is  Rs.300/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:6507\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  JU BANGALORE EXP\n\t ");printf("Origin:  JODHPUR        dep:05:30\n\t"); printf(" Dest:BANGALORE 	arr:04:00\n");
p();}
      break;

case 4:
clrscr();
details();
t=250.0;
printf("\n\n\ttotal charge is  Rs.250/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:6507\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  JU BANGALORE EXP\n\t ");printf("Origin:  JODHPUR        dep:05:30\n\t"); printf(" Dest:BANGALORE 	arr:04:00\n");
p();
}
      break;

case 5:
clrscr();
details();
t=200.0;
printf("\n\n\ttotal charge is  Rs.200/-per head");
printf("\n\tIS THERE ANY CONCESSION(Y/N)\n\n\n\n");
d='y';
if(d=='y')
{
concession();}
f='y';
/*________________printing of ticket__________________________*/
if(f=='y')
{
clrscr();
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\t**********************************************\n");
printf("\t\t  SOUTH CENTRAL RAILWAYS\n");
printf("\t\t  Government of INDIA\n\n");
printf(" \tTrain no:6507\t\t\t\tTicket No:0%d\n\t",z);printf("Train name:  JU BANGALORE EXP\n\t ");printf("Origin:  JODHPUR        dep:05:30\n\t"); printf(" Dest:BANGALORE 	arr:04:00\n");
p();
}
      break;

}break;
}
}
/*______________________________________collection of details___________________________________________*/
void details()
{
bgcolor(16);
rectangle(2,2,75,20,112);
printf("\n\n\n\n\t");
pstr("Enter the NAME :",4,6,32); rectangle(4,32,30,0,15);gotoxy(33,5);
fflush(stdin);
gets(s2);
pstr("Enter the AGE  :",6,6,32);rectangle(6,32,30,0,15);gotoxy(33,7);
scanf("%d",&k);
}
/*___________________________printing of ticket___________________________________*/
void p()
{
printf("\tdate of journey:");
puts(s1);
printf("\n\t  NAME:  ");
puts(s2);
printf("\n\t  AGE :   %d\n",k);
printf("\n\t**PLEASE PROVIDE PROOF OF CONCESSION(if any)**\n");
//puts(l);
printf("\n\tTHE TOTAL CHARGE IS  %f/-",t);
printf("\n\n\n\t\t\t*$*HAPPY JOURNEY*$*\n");
printf("\t***********************************************\n");
}
/*_____________________________info about concessions________________________________*/
void concession()
{
printf("\t1.BLIND CONCESSION-75%\n ");
printf("\t2.DEAF & DUMB   CONCESSION50%\n");
printf("\t3.DOCTOR'S  CONCESSION-10%\n");
printf("\t4.HANDICAPPED  CONCESSION-75%\n");
printf("\t5.KISAN  CONCESSION-25%\n");
printf("\t6.PUBLIC EXAMINATION CONCESSION-50%\n");
printf("\t7.RESEARCH SCHOLAR  CONCESSION-50%\n");
printf("\t8.SENIOR CITIZEN  CONCESSION-30%\n");
printf("\t9.WAR WIDOW  CONCESSION-75%\n\n\n");
pstr("enter ur choice(ONLY IF PROOFS ARE AVAILABLE)",40,15,64);
scanf("%d",&l);
switch(l)
{
case 1:t=t*25/100;break;
case 2:t=t*50/100;break;
case 3:t=t*90/100;break;
case 4:t=t*25/100;break;
case 5:t=t*75/100;break;
case 6:t=t*50/100;break;
case 7:t=t*50/100;break;
case 8:t=t*70/100;break;
case 9:t=t*25/100;break;
}
}
message()
{
}
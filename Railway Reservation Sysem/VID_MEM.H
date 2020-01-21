#define vm 0xb8000000  /* base addrress of 1x1 of vid_mem */
enum colr {DEFAULT=15,
	   BLK=0,BLU=16,
	   GRN=32,SKYBLU=48,
	   RD=64,PINK=80,
	   ORNG=96,
	   LTGRY=112};

#define RTKEY 77
#define LFTKEY 75
#define ENT 28
#define ESC	1
#define TAB	15

pchar(int r,int c,char ch,int attb)

{
char far*v;
v=vm+r*160+c*2;/*calculates the adderess of mem corresponding to row & col*/
*v=ch;
v++;
*v=attb    ;/*stores the attribute*/
}

pstr(char *s,int r,int c,int attb1)
{

	while(*s!='\0')
	{
		if(*s=='^') /*checks if ^ is present or not*/
		{
			s++;  /* skips that charecter*/
			pchar(r,c,*s,132); /*sets the blinking attr for char just after that*/
		}
			else
			pchar(r,c,*s,attb1);   /*else sets given attribute*/

		s++;c++;
	}
}

bgcolor(int att)
{
int i,j;
	for(i=0;i<=25;i++){
	for(j=0;j<=79;j++)
	pstr(" ",i,j,att);
	}
}

rectangle(int ro,int col,int l,int b,int att)
{       int i,j;
	for(i=ro;i<=(ro+b);i++)
	{
		for(j=col;j<=col+l;j++)
		{
			pchar(i,j,' ',att);
		}
	}
}



void messagebox(char iptxt[],int row,int col,char type,char stxt[])
{
	int txtsz=strlen(iptxt),stxtsz=strlen(stxt);
	int l=txtsz+stxtsz+10,b=6;
	int lcl=col,ucl=col+l,i,key;
	int x=((l)*0.4);

if((strcmp(stxt,"NULL"))==0)
	stxtsz=0;

rectangle(row+1,col+1,l,b,BLK);
rectangle(row,col,l,b,120);
pstr("MESSAGE",row,col+x ,127);
for(i=lcl;i<=ucl;i++)
{
	gotoxy(i+1,row+2);
	printf("%c",205);

}


pstr(iptxt,row+3,col+5,112);    /*prints i.p text*/
/*------------------------------------------------------*/
  if(type=='S'&&((strcmp(stxt,"NULL")!=0)))
		pstr(stxt,row+3,col+5+txtsz+1,116);
/*---------------------------------------------------------*/


crtbutton(row,col);


}

crtbutton(int row,int col)
{
/*-----------------------------------------------------*/
rectangle(row+3+2,col+5+3,6,0,GRN);  /*ok but*/
pstr("Ok",row+3+2,col+5+3+3,46);

rectangle(row+3+2,col+5+3+(0.5*(col+5+3)),10,0,GRN);
pstr("Cancel",row+3+2,col+5+3+(0.5*(col+5+3))+3,46);    /*cancel butt*/


/*-------------------------------------------------------*/

}

int	response(int row ,int col)

{
	static int arr=1,k_1out=0,k_2out=0;
	int key;


rectangle(row+3+2,col+5+3,6,0,BLU);  /*ok but*/
pstr("Ok",row+3+2,col+5+3+3,30);
pchar(row+3+2,col+5+3+1,175,20);/*arr at ok  ----DEFAULT case*/




while(1)
{



if((k_1out==1)||(k_2out==1))
	break;






if(arr==1)
	{
		fflush(stdin);

			key=getkey();


			if(key==ENT)
				{
					return 01;
					k_1out=1;
				}

			else

				if((key==TAB)||(key==RTKEY))
			{


				crtbutton(row,col);
				rectangle(row+3+2,col+5+3+(0.5*(col+5+3)),10,0,BLU);/*chnges butt clr*/
				pstr("Cancel",row+3+2,col+5+3+(0.5*(col+5+3))+3,30);
				pchar(row+3+2,col+5+3+(0.5*(col+5+3))+1,175,20);/*prints arr*/
				arr=2;
			}

	}

if(arr==2)
{
		fflush(stdin);

		key=getkey();

		  fflush(stdin);

			if(key==ENT)
			{
				return 02;
					k_2out=1;
			}
		else
		{
			if((key==TAB)||(key==LFTKEY)||(key==RTKEY))
			{
				 crtbutton(row,col);
				rectangle(row+3+2,col+5+3,6,0,BLU);  /*ok but*/
				pstr("Ok",row+3+2,col+5+3+3,30);
				pchar(row+3+2,col+5+3+1,175,20);/*arr at ok  ----DEFAULT case*/
				arr=1;
			}
		  }



}



}

}


setvdupage(int no)
{
	i.h.ah=0x05;
	i.h.al=no;
int86(0x10,&i,&o);
}

int  getpassword(int row,int col,char *pawrd)
{

	int i=0;
	char ch;

	gotoxy(col+1,row+1);
	for(i=0;i<=5;i++)
	{
		ch=getch();
		pchar(row,col+i,'x',112);
		*pawrd=ch;
		pawrd++;
	}

	*pawrd='\0';



}





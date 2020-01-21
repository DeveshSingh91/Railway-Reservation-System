#include<dos.h>
#define LFT 1
#define RHT 3
#define CNTR 2
union REGS i,o;
struct SREGS s;


initmouse()
{
	i.x.ax=0;
	int86(0x33,&i,&o);
	return(o.x.ax);
}
showmouseptr()
{	i.x.ax=1;
	int86(0x33,&i,&o);
}
hidemouseptr()
{	i.x.ax=2;
	int86(0x33,&i,&o);
}

changecursor(int *shape)
{
	i.x.ax=9;
	i.x.bx=0;
	i.x.cx=0;
	i.x.dx=(unsigned)shape;
	segread(&s);
	s.es=s.ds;
	int86x(0x33,&i,&i,&s);
}

getmousepos(int *x,int *y)
{
	i.x.ax=3;
	int86(0x33,&i,&o);
	*x=o.x.cx;
	*y=o.x.dx;
}

onclick()
{       int bstat;
	i.x.ax=3;
	int86(0x33,&i,&o);
	bstat=o.x.bx;


if((bstat & 1)==1)        /*left button*/
	return 1;
if((bstat & 2)==2)       /*right button*/
	return 3;
if((bstat & 4)==4)        /*center button*/
	return 2;
}






restrictmouseptr(int x1,int y1,int x2,int y2)
{
	i.x.ax=7;
	i.x.cx=x1;
	i.x.dx=x2;
	int86(0x33,&i,&o);
	i.x.ax=7;
	i.x.cx=y1;
	i.x.dx=y2;
	int86(0x33,&i,&o);
	}
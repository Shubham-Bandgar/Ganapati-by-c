  #include<stdio.h>
  #include<conio.h>
  #include<graphics.h>
  void main()
  {
  int gm,gd,i;
  gm=gd=DETECT;
  initgraph(&gm,&gd,"c:\\tc\\bgi");
  setcolor(RED);

  printf("PROGRAMMED BY SHUBHAM BANDGAR ");
  for(i=0;i<30;i++)
  {
  setcolor(i);
  ellipse(235,250,130,420,100,90);
  ellipse(240,320,0,360,4,4);

  ellipse(170,330,105,355,100,50);
  ellipse(343,330,195,100,80,50);
  ellipse(245,147,50,140,40,51);
  ellipse(186,150,50,140,40,51);
  //***ear***//
  arc(240,138,290,410,50);
  arc(195,135,150,260,50);

  setcolor(i+1);
  ellipse(185,180,550,290,0,10);
    ellipse(225,200,170,280,40,30);
     ellipse(250,180,550,290,0,10);
      ellipse(285,173,200,280,40,30);
       ellipse(260,229,0,360,40,1);
	ellipse(270,277,9,100,80,50);
	 ellipse(270,250,6,90,80,50);
	 //***eyes***//
	  ellipse(200,150,0,70,10,10);
	   ellipse(240,150,98,180,10,10);
	   delay(400);


	  }

	   getch();
	   closegraph();
	   }















 #include<iostream.h>
 #include<conio.h>
 #include<dos.h>
 #include<math.h>
 #include<stdlib.h>
 #include<stdio.h>
 #define linea "________________________________"
int cancion1(void);
int cancion2(void);
int cancion3(void);
void main()
{
 char opc;
 float a, resistencia;
 clrscr();

       gotoxy(10,2);cout<<"MENU";
       gotoxy(5,3);	cout<<linea;
       gotoxy(4,5);	cout<<"<B>Balada";
       gotoxy(4,6);	cout<<"<C>Clasica";
       gotoxy(4,7);	cout<<"<P>Pop";
       gotoxy(4,8);	cout<<"<S>Salir";
       gotoxy(10,12);	cout<<"<Elija Opcion>";cin>>opc;


	 switch(opc)
       {
	case'B':case'b':
		    cancion1();
		    break;
	case'c':case'C':
		    cancion2();
		    break;
	case'p':case'P':
		    cancion3();
		    break;
	case's':case'S':
		     clrscr();
	 gotoxy(20,12);cout<<"HASTA LUEGO";
		    break;

			 default: clrscr();
	  gotoxy(14,16);cout<<"Opcion incorrecta";
	 }
 getch();
}


int cancion1(void)
{
   sound(261);  delay(376); nosound();
   sound(329);  delay(377); nosound();
   sound(440);  delay(482); nosound();
   sound(329);  delay(403); nosound();
   sound(554);  delay(419); nosound();
   sound(329);  delay(420); nosound();
   sound(440);  delay(489); nosound();
   sound(329);  delay(534); nosound();
   sound(277);  delay(402); nosound();
   sound(329);  delay(403); nosound();
   sound(415);  delay(419); nosound();
   sound(329);  delay(420); nosound();
   sound(554);  delay(451); nosound();
   sound(329);  delay(452); nosound();
   sound(415);  delay(489); nosound();
   sound(329);  delay(534); nosound();
   sound(277);  delay(376); nosound();
   sound(329);  delay(377); nosound();
   sound(440);  delay(376); nosound();
   sound(329);  delay(429); nosound();
   sound(440);  delay(445); nosound();
   sound(329);  delay(445); nosound();
   sound(440);  delay(445); nosound();
   sound(329);  delay(445); nosound();
   sound(277);  delay(402); nosound();
   sound(329);  delay(403); nosound();
   sound(415);  delay(419); nosound();
   sound(329);  delay(420); nosound();
   sound(554);  delay(850); nosound();
   return 0;
}

int cancion2(void)
{
  sound(349);  delay(313); nosound();
  sound( 0);  delay(44); nosound();
  sound(294);  delay(491); nosound();
  sound( 0);  delay(224); nosound();
  sound(349);  delay(261); nosound();
  sound( 0);  delay(96); nosound();
  sound(294);  delay(294); nosound();
  sound( 0);  delay(63); nosound();
  sound(262);  delay(402); nosound();
  sound( 0);  delay(312); nosound();
  sound(294);  delay(313); nosound();
  sound( 0);  delay(44); nosound();
  sound(349);  delay(268); nosound();
  sound( 0);  delay(189); nosound();
  sound(294);  delay(300); nosound();
  sound( 0);  delay(315); nosound();
  sound(349);  delay(300); nosound();
  sound( 0);  delay(57); nosound();
  sound(294);  delay(308); nosound();
  sound( 0);  delay(49); nosound();
  sound(262);  delay(446); nosound();
  sound( 0);  delay(268); nosound();
  sound(220);  delay(313); nosound();
  sound( 0);  delay(44); nosound();
  sound(262);  delay(323); nosound();
  sound( 0);  delay(34); nosound();
  sound(294);  delay(134); nosound();
  sound( 0);   delay(45); nosound();
  sound(330);  delay(446); nosound();
  sound( 0);   delay(804); nosound();
  sound(220);  delay(201); nosound();
  sound( 0);   delay(354); nosound();
  sound(220);  delay(182); nosound();
  sound( 0);  delay(337); nosound();
  sound(220);  delay(206); nosound();
  sound( 0);  delay(361); nosound();
  sound(220);  delay(230); nosound();
  sound( 0);  delay(340); nosound();
  sound(220);  delay(182); nosound();
  sound( 0);  delay(821); nosound();
  sound(262);  delay(268); nosound();
  sound( 0);  delay(89); nosound();
  sound(294);  delay(310); nosound();
  sound( 0);  delay(48); nosound();
  sound(349);  delay(314); nosound();
  sound( 0);  delay(43); nosound();
  sound(294);  delay(446); nosound();
  sound( 0);  delay(268); nosound();
  sound(349);  delay(284); nosound();
  sound( 0);  delay(73); nosound();
  sound(294);  delay(329); nosound();
  sound( 0);  delay(28); nosound();
  sound(262);  delay(357); nosound();
  sound( 0);  delay(358); nosound();
  sound(294);  delay(306); nosound();
  sound( 0);  delay(51); nosound();
  sound(349);  delay(330); nosound();
  sound( 0);  delay(27); nosound();
  sound(294);  delay(463); nosound();
  sound( 0);  delay(251); nosound();
  sound(349);  delay(258); nosound();
  sound( 0);  delay(99); nosound();
  sound(294);  delay(301); nosound();
  sound( 0);  delay(56); nosound();
  sound(262);  delay(335); nosound();
  sound( 0);  delay(737); nosound();
  sound(262);  delay(247); nosound();
  sound( 0);  delay(110); nosound();
  sound(294);  delay(173); nosound();
  sound( 0);  delay(6); nosound();
  sound(330);  delay(278); nosound();
  sound( 0);  delay(79); nosound();
  sound(349);  delay(275); nosound();
  sound( 0);  delay(82); nosound();
  sound(349);  delay(470); nosound();
  sound( 0);  delay(66); nosound();
  sound(330);  delay(625); nosound();
   return 0;
}

int cancion3(void)
{
  sound(1760);  delay(132); nosound();
  sound(0);  delay(220); nosound();
  sound(1397);  delay(96); nosound();
  sound(0);  delay(81); nosound();
  sound(1175);  delay(132); nosound();
  sound(0);  delay( 221); nosound();
  sound(1760);  delay(125); nosound();
  sound(0);  delay( 228); nosound();
  sound(1568);  delay(103); nosound();
  sound(0);  delay(426); nosound();
  sound(261);  delay(368); nosound();
  sound(0);  delay(162); nosound();
  sound(1044);  delay(103); nosound();
  sound(0);  delay(73); nosound();
  sound(1319);  delay(88); nosound();
  sound(0);  delay(89); nosound();
  sound(1397);  delay(88); nosound();
  sound(0);  delay(88); nosound();
  sound(1568);  delay(118); nosound();
  sound(0);  delay(235); nosound();
  sound(1319);  delay(88); nosound();
  sound(0);  delay(88); nosound();
  sound(1044);  delay(125); nosound();
  sound(0);  delay(228); nosound();
  sound(1568);  delay(133); nosound();
  sound(0);  delay(220); nosound();
  sound(1397);  delay(111); nosound();
  sound(0);  delay(419); nosound();
  sound(261);  delay(367); nosound();
  sound(0);  delay(339); nosound();
  sound(1397);  delay(95); nosound();
  sound(0);  delay(258); nosound();
  sound(1760);  delay(132); nosound();
  sound(0);  delay(220); nosound();
  sound(1397);  delay(96); nosound();
  sound(0);  delay(81); nosound();
  sound(1175);  delay(132); nosound();
  sound(0);  delay( 221); nosound();
  sound(1760);  delay(125); nosound();
  sound(0);  delay( 228); nosound();
  sound(1568);  delay(103); nosound();
  sound(0);  delay(426); nosound();
  sound(261);  delay(368); nosound();
  sound(0);  delay(162); nosound();
  sound(1044);  delay(103); nosound();
  sound(0);  delay(73); nosound();
  sound(1319);  delay(88); nosound();
  sound(0);  delay(89); nosound();
  sound(1397);  delay(88); nosound();
  sound(0);  delay(88); nosound();
  sound(1568);  delay(118); nosound();
  sound(0);  delay(235); nosound();
  sound(1319);  delay(88); nosound();
  sound(0);  delay(88); nosound();
  sound(1044);  delay(125); nosound();
  sound(0);  delay(228); nosound();
  sound(1568);  delay(133); nosound();
  sound(0);  delay(220); nosound();
  sound(1397);  delay(111); nosound();
  sound(0);  delay(419); nosound();
  sound(261);  delay(367); nosound();
  sound(0);  delay(339); nosound();
  sound(1397);  delay(95); nosound();
  sound(0);  delay(258); nosound();
  sound(1760);  delay(132); nosound();
  sound(0);  delay(220); nosound();
  sound(1397);  delay(96); nosound();
  sound(0);  delay(81); nosound();
  sound(1175);  delay(132); nosound();
  sound(0);  delay( 221); nosound();
  sound(1760);  delay(125); nosound();
  sound(0);  delay( 228); nosound();
  sound(1568);  delay(103); nosound();
  sound(0);  delay(426); nosound();
  sound(261);  delay(368); nosound();
  sound(0);  delay(162); nosound();
  sound(1044);  delay(103); nosound();
  sound(0);  delay(73); nosound();
  sound(1319);  delay(88); nosound();
  sound(0);  delay(89); nosound();
  sound(1397);  delay(88); nosound();
  sound(0);  delay(88); nosound();
  sound(1568);  delay(118); nosound();
  sound(0);  delay(235); nosound();
  sound(1319);  delay(88); nosound();
  sound(0);  delay(88); nosound();
  sound(1044);  delay(125); nosound();
  sound(0);  delay(228); nosound();
  sound(1568);  delay(133); nosound();
  sound(0);  delay(220); nosound();
  sound(1397);  delay(111); nosound();
  sound(0);  delay(419); nosound();
  sound(261);  delay(367); nosound();
  sound(0);  delay(339); nosound();
   return 0;
}

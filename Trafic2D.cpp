#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <GL/freeglut.h>
#include <iostream>
#include <float.h>
using namespace std;

const double TWO_PI = 6.2831853;
static GLfloat rotTheta = 0.0;
double i = 0.0,ii=-2000,iii=-1000,i4=-3000,i5=-3000;
double j = 0.0, rot = 0.0;
double k = 0,k2=0;
double alpha = 1.0,beta=1.0;

double l=2000, ll=2000, lll=-500,l4=3500;
double jj = 0, rot2 = 0;
double kk = 0.0;
double alpha2 = -1.0, beta2 = -1.0;



int rosu = 1;

GLsizei winWidth = 1500, winHeight = 600;
GLuint car1,car2, sosea,semafor,sosea2,dungi,car3,car4,car5,car6,car7,car8;




class scrPt
{
public:
	GLint x, y;
};

void glPrintf(int x, int y, char* sir, int lungime) {

	glColor3f(0.0, 0.0, 0.0);
	int i = 0;
	for (i = 0; i < lungime; i++) {

		glRasterPos2i(x + i * 28, y);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, sir[i]);
	}

}
void roti2(int x, int y) {
	scrPt hexVertex;
	GLdouble hexTheta;
	int k;

	glBegin(GL_POLYGON);

	for (k = 0; k < 360; k++)
	{
		hexTheta = TWO_PI * k / 360;
		hexVertex.x = x + 25 * cos(hexTheta);
		hexVertex.y = y + 25 * sin(hexTheta);
		if (k <= 290)
			glColor3f(0.2, 0.2, 0.2);
		else {
			glColor3f(1, 1, 1);
		}
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();

	glBegin(GL_POLYGON);

	for (k = 0; k < 360; k++)
	{
		hexTheta = TWO_PI * k / 360;
		hexVertex.x = x + 17 * cos(hexTheta);
		hexVertex.y = y + 17 * sin(hexTheta);
		glColor3f(0.7, .7, .7);
		
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();


}

void roti(int x, int y) {
	scrPt hexVertex;
	GLdouble hexTheta;
	int k;

	glBegin(GL_POLYGON);

	for (k = 0; k < 360; k++)
	{	
		hexTheta = TWO_PI * k / 360;
		hexVertex.x = x + 30 * cos(hexTheta);
		hexVertex.y = y + 30 * sin(hexTheta);
		if (k <= 270)
			glColor3f(0.2,0.2,0.2);
		else {
			glColor3f(1, 1, 1);
		}
		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();

	glBegin(GL_POLYGON);

	for (k = 0; k < 360; k++)
	{
		hexTheta = TWO_PI * k / 360;
		hexVertex.x = x + 20 * cos(hexTheta);
		hexVertex.y = y + 20 * sin(hexTheta);
		glColor3f(.7, .7, .7);

		glVertex2i(hexVertex.x, hexVertex.y);
	}
	glEnd();
	
}

void jeep() {

	glBegin(GL_POLYGON);
	glVertex2i(0, 0);
	glVertex2i(350, 0);
	glVertex2i(350, 60);
	glVertex2i(340, 70);

	glVertex2i(290, 70);
	glVertex2i(255, 70);
	glVertex2i(200, 115);
	glVertex2i(175, 115);
	glVertex2i(50, 115);
	glVertex2i(15, 115);
	glVertex2i(0, 70);
	glEnd();

	
	glColor3f(0.7, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(245, 70);
	glVertex2i(190, 110);
	glVertex2i(150, 110);
	glVertex2i(150, 70);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(140, 110);
	glVertex2i(90, 110);
	glVertex2i(90, 70);
	glVertex2i(140, 70);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2i(80, 110);
	glVertex2i(25, 110);
	glVertex2i(25, 70);
	glVertex2i(80, 70);
	glEnd();

	glColor3f(0.2, 0.2, 0.2);
	glBegin(GL_POLYGON);
	glVertex2i(20, 100);
	glVertex2i(-10, 100);
	glVertex2i(-10, 50);
	glVertex2i(20, 50);
	glEnd();
	

}

void sport() {
	glBegin(GL_POLYGON);
	glVertex2i(0, 0);
	glVertex2i(400, 0);
	glVertex2i(390, 40);
	glVertex2i(370, 50);
	glVertex2i(335, 50);
	glVertex2i(300, 65);
	glVertex2i(270, 80);
	glVertex2i(100, 80);
	glVertex2i(50, 50);
	glVertex2i(25, 40);
	glVertex2i(-20, 60);
	glVertex2i(-20, 0);
	glEnd();

	
	glColor3f(0.7, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(300, 55);
	glVertex2i(270, 70);
	glVertex2i(100, 70);
	glVertex2i(70, 55);
	glEnd();
}

void camion() {
	glBegin(GL_POLYGON);
	glVertex2i(0, 0);
	glVertex2i(600, 0);
	glVertex2i(600, 50);
	glVertex2i(575, 70);
	glVertex2i(525, 125);
	glVertex2i(150, 125);
	glVertex2i(25, 125);
	glVertex2i(0, 75);
	glEnd();

	
	glColor3f(0.7, 1, 1);
	glBegin(GL_POLYGON);
	glVertex2i(525, 70);
	glVertex2i(510, 110);
	glVertex2i(450, 110);
	glVertex2i(450, 70);
	glEnd();

}



static void init(void)
{
	
	glClearColor(1.0, 1.0, 1.0, 1.0);

	glColor3f(0, 0.5, 0);
	semafor = glGenLists(1);
	glNewList(semafor, GL_COMPILE);
	glPointSize(100.0);
	glEnable(GL_POINT_SMOOTH);
	glBegin(GL_POINTS);
	glVertex2i(1900, 470);
	glEnd();
	glDisable(GL_POINT_SMOOTH);
	glEndList();

	car1 = glGenLists(1);
	glNewList(car1, GL_COMPILE);
	glColor3f(1.0, 0, 0);
	sport();
	glEndList();
	
	car2 = glGenLists(1);
	glNewList(car2, GL_COMPILE);
	glColor3f(0.5, 0.5, 0.8);
	camion();
	glEndList();

	car3 = glGenLists(1);
	glNewList(car3, GL_COMPILE);
	glColor3f(0.0, 0, 0.7);
	sport();
	glEndList();


	car4 = glGenLists(1);
	glNewList(car4, GL_COMPILE);
	glColor3f(1, 1, 0.1);
	jeep();
	glEndList();

	car5 = glGenLists(1);
	glNewList(car5, GL_COMPILE);
	glColor3f(1, 0.9, 1);
	camion();
	glEndList();

	car6 = glGenLists(1);
	glNewList(car6, GL_COMPILE);
	glColor3f(1, 0.8, 0.5);
	jeep();
	glEndList();

	car7 = glGenLists(1);
	glNewList(car7, GL_COMPILE);
	glColor3f(0, 0.8, 0.5);
	sport();
	glEndList();

	car8 = glGenLists(1);
	glNewList(car8, GL_COMPILE);
	glColor3f(0.1, 0.2, 0.2);
	sport();
	glEndList();

	sosea = glGenLists(1);
	glNewList(sosea, GL_COMPILE);
	glColor3f(0.5, 0.5, 0.5);
	glRecti(-2000, -400, 2000, 400);
	glEndList();

	sosea2 = glGenLists(1);
	glNewList(sosea2, GL_COMPILE);
	glColor3f(0, 1.0, 0.2);
	glRecti(-2000, -500, 2000, 500);
	glEndList();


	dungi = glGenLists(1);
	glNewList(dungi, GL_COMPILE);
	glEnable(GL_LINE_SMOOTH);
	glLineStipple(5, 0xAAAA);  
	glEnable(GL_LINE_STIPPLE);
	glColor3f(1, 1, 1);
	glBegin(GL_LINES);
	glLineWidth(60.0);
	glVertex2i(-20000, -200);
	glVertex2i(20000, -200);
	
	glVertex2i(-20000, 200);
	glVertex2i(20000, 200);
	
	glEnd();
	glDisable(GL_LINE_STIPPLE);

	glColor3f(1, 1, 1);
	glBegin(GL_LINES);
	glLineWidth(100.0);
	glVertex2i(-20000, -3);
	glVertex2i(20000, -3);

	glVertex2i(-20000, 3);
	glVertex2i(20000, 3);
	glEnd();
	glDisable(GL_LINE_SMOOTH);
	glEndList();

}
void displayScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	//desenare sosea+iarba+semafor+dungi sosea
	glPushMatrix();
	glCallList(sosea2);
	glPopMatrix();
	glPushMatrix();
	if (rosu == 1)
	{
		glColor3f(1.0, 0.0, 0);
		glCallList(semafor);
	}
	else {
		glColor3f(0, 0.5, 0);
		glCallList(semafor);
	}
	glPopMatrix();
	
	glPushMatrix();
	glCallList(sosea);
	glPopMatrix();

	glPushMatrix();
	glTranslated(-i,0, 0);
	glCallList(dungi);
	glPopMatrix();
	//end desenare sosea

	

	//masina sport care depaseste camion si circula spre dreapta
	if (ii <iii-600)
	{
		glPushMatrix();
		glTranslated(ii,0, 0.0);
		glTranslated(0, -350, 0);
		glPushMatrix();
		glCallList(car1);
		glPopMatrix();

		glPushMatrix();
		glTranslated(75, 10, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-75, -10, 0);
		roti2(75, 10);
		glPopMatrix();

		glPushMatrix();
		glTranslated(325, 10, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-325, -10, 0);
		roti2(325, 10);
		glPopMatrix();


		glPopMatrix();
	}
	
	else if  (k<200 &&ii<iii+700)
	{	

		
		glPushMatrix();
		glTranslated(ii, k, 0.0);
		glRotated(1, 0.0, 0.0, 1.0);
		glTranslated(0, -350, 0);
		glPushMatrix();
		glCallList(car1);
		glPopMatrix();
		glPushMatrix();
		glTranslated(75, 10, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-75, -10, 0);
		roti2(75, 10);
		glPopMatrix();

		glPushMatrix();
		glTranslated(325, 10, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-325, -10, 0);
		roti2(325, 10);
		glPopMatrix();

		glPopMatrix();
		
	}
	else if (k>200 &&ii< iii + 700)
	{
		glPushMatrix();
		glTranslated(ii, k, 0.0);
		glRotated(0, 0, 0, 1);
		glTranslated(0, -350, 0);
		glPushMatrix();
		glCallList(car1);
		glPopMatrix();
		glPushMatrix();
		glTranslated(75, 10, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-75, -10, 0);
		roti2(75, 10);
		glPopMatrix();

		glPushMatrix();
		glTranslated(325, 10, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-325, -10, 0);
		roti2(325, 10);
		glPopMatrix();

		glPopMatrix();
	}
	else if (ii>= iii + 700 &&k>=FLT_MIN )

	{
		glPushMatrix();
		glTranslated(ii, k, 0.0);
		glRotated(-1, 0.0, 0.0, 1.0);
		glTranslated(0, -350, 0);
		glPushMatrix();
		glCallList(car1);
		glPopMatrix();
		glPushMatrix();
		glTranslated(75, 10, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-75, -10, 0);
		roti2(75, 10);
		glPopMatrix();

		glPushMatrix();
		glTranslated(325, 10, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-325, -10, 0);
		roti2(325, 10);
		glPopMatrix();

		glPopMatrix();
		

	}
	else if (ii >= iii + 700 && k < FLT_MIN)
	{
		glPushMatrix();
		glTranslated(ii, 0, 0.0);
		glRotated(0, 0.0, 0.0, 1.0);
		glTranslated(0, -350, 0);
		glPushMatrix();
		glCallList(car1);
		glPopMatrix();
		glPushMatrix();
		glTranslated(75, 10, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-75, -10, 0);
		roti2(75, 10);
		glPopMatrix();

		glPushMatrix();
		glTranslated(325, 10, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-325, -10, 0);
		roti2(325, 10);
		glPopMatrix();

		glPopMatrix();
	}
	//end masina sport care depaseste camion spre dreapta
	
	//masina sport spre dreapta care nu depaseste
	glPushMatrix();
	glTranslated(i4, 0, 0);
	glTranslated(0, -150, 0);

	glPushMatrix();
	glCallList(car3);
	glPopMatrix();

	glPushMatrix();
	glTranslated(75, 10, 0);
	glRotated(j*2, 0, 0, 1);
	glTranslated(-75, -10, 0);
	roti2(75, 10);
	glPopMatrix();

	glPushMatrix();
	glTranslated(325, 10, 0);
	glRotated(j*2, 0, 0, 1);
	glTranslated(-325, -10, 0);
	roti2(325, 10);
	glPopMatrix();
	glPopMatrix();
	//end masina sport spre dreapta care nu depaseste
	
	//camion care circula spre dreapta
	glPushMatrix();	
	glTranslated(iii,0, 0);
	glTranslated(0, -350, 0);
	glPushMatrix();
	glCallList(car2);
	glPopMatrix();
	
	//rotile lui
	glPushMatrix();
	glTranslated(50, 0, 0);
	glRotated(j, 0, 0, 1);
	glTranslated(-50, 0, 0);
	roti(50, 0);
	glPopMatrix();
	
	glPushMatrix();
	glTranslated(120, 0, 0);
	glRotated(j, 0, 0, 1);
	glTranslated(-120, 0, 0);
	roti(120, 0);
	glPopMatrix();

	glPushMatrix();
	glTranslated(525, 0, 0);
	glRotated(j, 0, 0, 1);
	glTranslated(-525, 0, 0);
	roti(525, 0);
	glPopMatrix();
	glPopMatrix();

	//end camion spre dreapta
	




	//jeep  spre dreapta care depaseste fara reintoarcere pe banda
	if (i5 < iii - 600)
	{
		glPushMatrix();
		glTranslated(i5, 0, 0.0);
		glTranslated(0, -350, 0);
		glPushMatrix();
		glCallList(car4);
		glPopMatrix();

		glPushMatrix();
		glTranslated(60, -5, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-60, 5, 0);
		roti(60, -5);

		glPopMatrix();

		glPushMatrix();
		glTranslated(300, -5, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-300, 5, 0);
		roti(300, -5);
		glPopMatrix();
		glPopMatrix();

	}

	else if (k2 < 200 && i5 < iii + 700)
	{


		glPushMatrix();
		glTranslated(i5, k2, 0.0);
		glRotated(1, 0.0, 0.0, 1.0);
		glTranslated(0, -350, 0);
		glPushMatrix();
		glCallList(car4);
		glPopMatrix();

		glPushMatrix();
		glTranslated(60, -5, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-60, 5, 0);
		roti(60, -5);

		glPopMatrix();

		glPushMatrix();
		glTranslated(300, -5, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-300, 5, 0);
		roti(300, -5);
		glPopMatrix();
		glPopMatrix();

	}
	else if (k2 > 200 && i5 < iii + 700)
	{
		glPushMatrix();
		glTranslated(i5, k2, 0.0);
		glRotated(0, 0, 0, 1);
		glTranslated(0, -350, 0);
		glPushMatrix();
		glCallList(car4);
		glPopMatrix();

		glPushMatrix();
		glTranslated(60, -5, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-60, 5, 0);
		roti(60, -5);

		glPopMatrix();

		glPushMatrix();
		glTranslated(300, -5, 0);
		glRotated(j * 2, 0, 0, 1);
		glTranslated(-300, 5, 0);
		roti(300, -5);
		glPopMatrix();
		glPopMatrix();
	}
	//end jeep spre dreapta care depaseste fara reintoarcere pe banda


	//camion care circula spre stanga
	glPushMatrix();
	glTranslated(l, 0, 0);
	glTranslated(0, 250, 0);
	glRotated(180, 1, 0, 0);
	glRotated(180, 0, 0, 1);
	
	glPushMatrix();
	glCallList(car5);
	glPopMatrix();

	//rotile lui
	glPushMatrix();
	glTranslated(50, 0, 0);
	glRotated(jj, 0, 0, 1);
	glTranslated(-50, 0, 0);
	roti(50, 0);
	glPopMatrix();

	glPushMatrix();
	glTranslated(120, 0, 0);
	glRotated(jj, 0, 0, 1);
	glTranslated(-120, 0, 0);
	roti(120, 0);
	glPopMatrix();

	glPushMatrix();
	glTranslated(525, 0, 0);
	glRotated(jj, 0, 0, 1);
	glTranslated(-525, 0, 0);
	roti(525, 0);
	glPopMatrix();
	glPopMatrix();

	//end camion spre stanga

	//jeep care circula spre stanga
	glPushMatrix();
	glTranslated(lll, 0, 0.0);
	glTranslated(0, 250, 0);
	glRotated(180,0,0,1);
	glRotated(180, 1, 0, 0);
	glPushMatrix();
	glCallList(car6);
	glPopMatrix();

	glPushMatrix();
	glTranslated(60, -5, 0);
	glRotated(jj * 2, 0, 0, 1);
	glTranslated(-60, 5, 0);
	roti(60, -5);

	glPopMatrix();

	glPushMatrix();
	glTranslated(300, -5, 0);
	glRotated(jj * 2, 0, 0, 1);
	glTranslated(-300, 5, 0);
	roti(300, -5);
	glPopMatrix();
	glPopMatrix();
	//end jeep care circula spre stanga

	//masina sport care circula spre stanga si lasa sa fie depasite
	if (l4 - 550 > ll ) {
		glPushMatrix();
		glTranslated(ll, 0, 0.0);
		glTranslated(0, 50, 0);
		glRotated(180, 0, 0, 1);
		glRotated(180, 1, 0, 0);
		glPushMatrix();
		glCallList(car7);
		glPopMatrix();

		glPushMatrix();
		glTranslated(75, 10, 0);
		glRotated(jj * 4, 0, 0, 1);
		glTranslated(-75, -10, 0);
		roti2(75, 10);
		glPopMatrix();

		glPushMatrix();
		glTranslated(325, 10, 0);
		glRotated(jj * 4, 0, 0, 1);
		glTranslated(-325, -10, 0);
		roti2(325, 10);
		glPopMatrix();


		glPopMatrix();
	}
	else if (l4 - 550 <= ll && kk < 200) {
		glPushMatrix();
		glTranslated(ll, kk, 0.0);
		glRotated(-1, 0, 0, 1);
		glTranslated(0, 50, 0);
		glRotated(180, 0, 0, 1);
		glRotated(180, 1, 0, 0);
		glPushMatrix();
		glCallList(car7);
		glPopMatrix();

		glPushMatrix();
		glTranslated(75, 10, 0);
		glRotated(jj * 4, 0, 0, 1);
		glTranslated(-75, -10, 0);
		roti2(75, 10);
		glPopMatrix();

		glPushMatrix();
		glTranslated(325, 10, 0);
		glRotated(jj * 4, 0, 0, 1);
		glTranslated(-325, -10, 0);
		roti2(325, 10);
		glPopMatrix();

		glPopMatrix();
	}
	else if(kk >= 200){
		
		glPushMatrix();
		glTranslated(ll, kk, 0.0);
		glRotated(0, 0, 0, 1);
		glTranslated(0, 50, 0);
		glRotated(180, 0, 0, 1);
		glRotated(180, 1, 0, 0);
		glPushMatrix();
		glCallList(car7);
		glPopMatrix();

		glPushMatrix();
		glTranslated(75, 10, 0);
		glRotated(jj * 2, 0, 0, 1);
		glTranslated(-75, -10, 0);
		roti2(75, 10);
		glPopMatrix();

		glPushMatrix();
		glTranslated(325, 10, 0);
		glRotated(jj * 2, 0, 0, 1);
		glTranslated(-325, -10, 0);
		roti2(325, 10);
		glPopMatrix();

		glPopMatrix();
	
	}
	//end masina sport care circula spre stanga si lasa sa fie depasite

	//masina sport neagra care circula spre stanga
	glPushMatrix();
	glTranslated(l4, 0, 0.0);
	glTranslated(0, 50, 0);
	glRotated(180, 0, 0, 1);
	glRotated(180, 1, 0, 0);
	glPushMatrix();
	glCallList(car8);
	glPopMatrix();

	glPushMatrix();
	glTranslated(75, 10, 0);
	glRotated(jj * 5, 0, 0, 1);
	glTranslated(-75, -10, 0);
	roti2(75, 10);
	glPopMatrix();

	glPushMatrix();
	glTranslated(325, 10, 0);
	glRotated(jj * 5, 0, 0, 1);
	glTranslated(-325, -10, 0);
	roti2(325, 10);
	glPopMatrix();


	glPopMatrix();


	//end masina sport neagra care circula spre stanga


	//legenda
	char s1[60],s2[60];
	sprintf_s(s1, "%s", "Right click pentru a porni traficul");
	glPrintf(-500, -450, s1, strlen(s1));
	sprintf_s(s2, "%s", "Left click pentru a opri traficul");
	glPrintf(-500, -480, s2, strlen(s2));
	//end legenda

	glutSwapBuffers();
	glFlush();
}





void miscad(void)
{
	//pentru sensul spre dreapta
	i = i + beta;
	ii = ii + alpha*2;
	iii += beta * 3;
	i4 += beta * 10;
	i5 += beta * 7;


	if (ii >=iii-650 && k+alpha*2<=201 && ii< iii + 700)
	{ 
		
		k += alpha *2 ;
		ii += alpha ;
	}
	if (ii >= iii + 700 && k>=FLT_MIN)
	{
		
		k -= alpha*2 ;
		ii += alpha ;
		
	}
	if (i5 >= iii - 650 && k2 + alpha * 2 <= 201 && i5 < iii + 700)
	{

		k2 += beta * 4;
		i5 += beta;
	}

	//pentru sensul spre stanga

	l += beta2;
	
	lll += beta2*2 ;
	l4 += alpha2 * 5;
	
	if (l4 - 550 <= ll && kk<=200)
	{

		kk += alpha * 2;
		ll += alpha2;
		l4 += alpha2;
	}
	if ( kk >= 199)
	{
		ll += beta2 * 2;
		
	}
	else {
		ll += alpha2 * 3;
		
	}
	//rotatie roti
	j -= rot;
	jj -= rot2;
	

	glutPostRedisplay();
}
void mouse(int button, int state, int x, int y)
{
	switch (button) {
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN)
		{
			alpha = 0;
			beta = 0;
			rosu = 1;
			rot = 0;
			alpha2 = 0;
			beta2 = 0;
			rot2 = 0;
		}
		break;
	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN)
		{
			glutIdleFunc(miscad);
			alpha = 0.1; 
			beta = 0.02;
			rosu = 0;
			rot = 0.4;
			alpha2 =- 0.1;
			beta2 = -0.05;
			rot2 = 0.4;
		}
		break;
	default:
		break;
	}
}


void winReshapeFcn(GLint newWidth, GLint newHeight)
{
	glViewport(0, 0, (GLsizei)newWidth, (GLsizei)newHeight);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-2000.0, 2000.0, -500.0, 500.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glClear(GL_COLOR_BUFFER_BIT);
}


void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(10, 10);
	glutInitWindowSize(winWidth, winHeight);
	glutCreateWindow("Trafic simulat");

	init();
	glutDisplayFunc(displayScene);
	glutReshapeFunc(winReshapeFcn);
	glutMouseFunc(mouse);
	glutMainLoop();

}




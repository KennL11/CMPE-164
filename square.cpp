/* ------------------------------------------------ *
* Program Name: Rotational_Square; Coded by: Ken Lau
* Date: 9.23.21; Version: 1.2;
* Status: Tested
* Note: Developed on Ubunutu, Coded uing C++, 
*       Included libraries: freeglut, openGl
*	Run Commands: 
*	1. gcc square.cpp -o square.o -lGL -lGLU -lglut
*	2. ./square.o
*/
#include<GL/glut.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

#define MAX_LEVEL 100
#define LAMBDA 0.01
void mydisplay()
{
float
p1x=1.0f,p1y=1.0f,p2x=1.0f,p2y=0.0f,p3x=0.0f,p3y=0.0f,p4x=0.0f,p4y=
1.0f;

float anchor_x = 0.35f;
float anchor_y = 0.35f;

int i=0;
glClear(GL_COLOR_BUFFER_BIT);

glLoadIdentity();
glTranslatef(-0.5f,-0.5f,0.0f);
glFlush();
sleep(1);
for(i=0;i<MAX_LEVEL;i++)
{
glBegin(GL_LINES);

glColor3ub(255,183,197);

//-------------------------
glVertex2f(p1x + anchor_x,p1y + anchor_y);
glVertex2f(p2x + anchor_x,p2y + anchor_y);
//-------------------------
glVertex2f(p2x + anchor_x,p2y + anchor_y);
glVertex2f(p3x + anchor_x,p3y + anchor_y);
//-------------------------
glVertex2f(p3x + anchor_x,p3y + anchor_y);
glVertex2f(p4x + anchor_x,p4y + anchor_y);
//-------------------------
glVertex2f(p4x + anchor_x,p4y + anchor_y);
glVertex2f(p1x + anchor_x,p1y + anchor_y);
//-------------------------
p1x=p1x + (LAMBDA * (p2x-p1x));
p1y=p1y + (LAMBDA * (p2y-p1y));
p2x=p2x + (LAMBDA * (p3x-p2x));
p2y=p2y + (LAMBDA * (p3y-p2y));
p3x=p3x + (LAMBDA * (p4x-p3x));
p3y=p3y + (LAMBDA * (p4y-p3y));
p4x=p4x + (LAMBDA * (p1x-p4x));
p4y=p4y + (LAMBDA * (p1y-p4y));
glEnd();

glBegin(GL_LINES);


//-------------------------
glVertex2f(p1x*0.82 + anchor_x*.25,p1y*0.82 + anchor_y*.25);
glVertex2f(p2x*0.82 + anchor_x*.25,p2y*0.82 + anchor_y*.25);
//-------------------------
glVertex2f(p2x*0.82 + anchor_x*.25,p2y*0.82 + anchor_y*.25);
glVertex2f(p3x*0.82 + anchor_x*.25,p3y*0.82 + anchor_y*.25);
//-------------------------
glVertex2f(p3x*0.82 + anchor_x*.25,p3y*0.82 + anchor_y*.25);
glVertex2f(p4x*0.82 + anchor_x*.25,p4y*0.82 + anchor_y*.25);
//-------------------------
glVertex2f(p4x*0.82 + anchor_x*.25,p4y*0.82 + anchor_y*.25);
glVertex2f(p1x*0.82 + anchor_x*.25,p1y*0.82 + anchor_y*.25);
//-------------------------
p1x=p1x + (LAMBDA * (p2x-p1x));
p1y=p1y + (LAMBDA * (p2y-p1y));
p2x=p2x + (LAMBDA * (p3x-p2x));
p2y=p2y + (LAMBDA * (p3y-p2y));
p3x=p3x + (LAMBDA * (p4x-p3x));
p3y=p3y + (LAMBDA * (p4y-p3y));
p4x=p4x + (LAMBDA * (p1x-p4x));
p4y=p4y + (LAMBDA * (p1y-p4y));
glEnd();


glBegin(GL_LINES);


//-------------------------
glVertex2f(p1x*0.82 + anchor_x*-.75,p1y*0.82 + anchor_y*-.75);
glVertex2f(p2x*0.82 + anchor_x*-.75,p2y*0.82 + anchor_y*-.75);
//-------------------------
glVertex2f(p2x*0.82 + anchor_x*-.75,p2y*0.82 + anchor_y*-.75);
glVertex2f(p3x*0.82 + anchor_x*-.75,p3y*0.82 + anchor_y*-.75);
//-------------------------
glVertex2f(p3x*0.82 + anchor_x*-.75,p3y*0.82 + anchor_y*-.75);
glVertex2f(p4x*0.82 + anchor_x*-.75,p4y*0.82 + anchor_y*-.75);
//-------------------------
glVertex2f(p4x*0.82 + anchor_x*-.75,p4y*0.82 + anchor_y*-.75);
glVertex2f(p1x*0.82 + anchor_x*-.75,p1y*0.82 + anchor_y*-.75);
//-------------------------
p1x=p1x + (LAMBDA * (p2x-p1x));
p1y=p1y + (LAMBDA * (p2y-p1y));
p2x=p2x + (LAMBDA * (p3x-p2x));
p2y=p2y + (LAMBDA * (p3y-p2y));
p3x=p3x + (LAMBDA * (p4x-p3x));
p3y=p3y + (LAMBDA * (p4y-p3y));
p4x=p4x + (LAMBDA * (p1x-p4x));
p4y=p4y + (LAMBDA * (p1y-p4y));
glEnd();

glFlush();
usleep(50000);
}
}
int main(int argc, char** argv)
{
glutInit(&argc,argv);
glutInitWindowSize(1000,1000);
glutInitWindowPosition(100,100);
glutCreateWindow("Rotational_Square");
glutDisplayFunc(mydisplay);
glutMainLoop();
}

/*
 * windmill.c
 *
 *  Created on: 13-Aug-2020
 *      Author: vatsal
 */
#include<stdio.h>
#include<GL/glut.h>
#include "dda.h"

void display()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0);

	glColor3f(1.0,0.0,0.0);
	line(350,50,400,450);
	line(400,450,500,50);
	line(500,50,350,50);

	glColor3f(0.0,1.0,1.0);
	line(400,450,350,250);
	line(350,250,200,325);
	line(200,325,400,450);

	line(400,450,200,500);
	line(400,450,300,650);
	line(200,500,300,650);
	line(400,450,440,700);
	line(400,450,560,600);
	line(440,700,560,600);

	line(400,450,500,260);
	line(500,260,600,400);
	line(600,400,400,450);

	glColor3f(1.0,1.0,0.0);
	line(380,440,400,480);
	line(400,480,430,460);
	line(430,460,410,420);
	line(410,420,380,440);

	glColor3f(1.0,.0,1.0);
	line(352,65,370,50);
	line(356,85,394,50);
	line(360,105,418,50);
	line(364,125,442,50);
	line(365,145,466,50);
	line(368,165,490,50);
	line(369,185,498,64);
	line(372,205,493,88);
	line(376,225,485,118);
	line(379,245,478,143);
	line(380,265,470,175);
	line(381,285,463,205);
	line(382,305,453,235);
	line(383,325,444,265);
	line(385,345,435,295);
	line(388,365,432,320);
	line(390,385,426,350);
	line(393,405,418,380);

}

int main(int argc,char**argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

	glutInitWindowSize(1500,750);
	glutInitWindowPosition(10,10);

	glutCreateWindow("Windmill");
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,800.0,0.0,750.0);

	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}


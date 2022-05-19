/*
 * dda.h
 *
 *  Created on: 13-Aug-2020
 *      Author: vatsal
 */

#ifndef DDA_H_
#define DDA_H_

#include<stdio.h>
#include<GL/glut.h>

void line(int x1,int y1,int x2,int y2)
{
	float dx, dy, steps, xinc, yinc, x, y;
	int k;

	dx = x2 - x1;
	dy = y2 - y1;

	if(abs(dx) >= abs(dy))
		steps = abs(dx);
	else
		steps = abs(dy);

	xinc = dx / steps;
	yinc = dy / steps;

	x = x1;
	y = y1;

	glBegin(GL_POINTS);
	glVertex2f(round(x),round(y));
	k = 1;

	  while(k <= steps)
	  {
		  x = x + xinc;
		  y = y + yinc;
		  glVertex2f(round(x),round(y));
		  k++;
	  }

	  glEnd();
	  glFlush();
}

#endif /* DDA_H_ */

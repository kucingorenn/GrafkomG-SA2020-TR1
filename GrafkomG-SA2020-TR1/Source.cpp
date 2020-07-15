#include <iostream>
#include <GL/freeglut.h>

void Display(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 0.0); //DepanBawah
	glVertex3f(-50, -25, 25);
	glVertex3f(-50, 0, 50);
	glVertex3f(50, 0, 50);
	glVertex3f(50, -25, 25);

	glColor3f(1.0, 1.0, 0.0); //DepanAtas
	glVertex3f(-50, 25, 25);
	glVertex3f(-50, 0, 50);
	glVertex3f(50, 0, 50);
	glVertex3f(50, 25, 25);

	glColor3f(0.0, 0.0, 0.0); //BelakangBawah
	glVertex3f(-50, -25, -25);
	glVertex3f(-50, 0, -50);
	glVertex3f(50, 0, -50);
	glVertex3f(50, -25, -25);

	glColor3f(0.0, 1.0, 0.0); //BelakangAtas
	glVertex3f(-50, 25, -25);
	glVertex3f(-50, 0, -50);
	glVertex3f(50, 0, -50);
	glVertex3f(50, 25, -25);

	glColor3f(0.0, 1.0, 1.0); //Atap
	glVertex3f(-50, 25, 25);
	glVertex3f(-50, 25, -25);
	glVertex3f(50, 25, -25);
	glVertex3f(50, 25, 25);

	glColor3f(0.0, 0.0, 1.0); //Alas
	glVertex3f(-50, -25, 25);
	glVertex3f(-50, -25, -25);
	glVertex3f(50, -25, -25);
	glVertex3f(50, -25, 25);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.5); //Kanan
	glVertex3f(50, 0, 50);
	glVertex3f(50, 25, 25);
	glVertex3f(50, 25, -25);
	glVertex3f(50, 0, -50);
	glVertex3f(50, -25, -25);
	glVertex3f(50, -25, 25);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 1.0); //Kiri
	glVertex3f(-50, 0, 50);
	glVertex3f(-50, 25, 25);
	glVertex3f(-50, 25, -25);
	glVertex3f(-50, 0, -50);
	glVertex3f(-50, -25, -25);
	glVertex3f(-50, -25, 25);
	glEnd();

	glPushMatrix();
	glPopMatrix();
	glutSwapBuffers();
}

void myinit(void) {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glEnable(GL_DEPTH_TEST);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	//glMatrixMode(GL_PROJECTION);
	//glLoadIdentity();
	glOrtho(-100, 100, -100, 100, -100, 100);
}

void myKeyboard(unsigned char key, int x, int y) {
	switch (key) {
	case 'w': //LookUP
	case 'W':
		glRotatef(3.0, 1.0, 0.0, 0.0);
		break;
	case 's': //LookDown
	case 'S':
		glRotatef(-3.0, 1.0, 0.0, 0.0);
		break;
	case 'a': //LookLeft
	case 'A':
		glRotatef(3.0, 0.0, 1.0, 0.0);
		break;
	case 'd': //LookRight
	case 'D':
		glRotatef(-3.0, 0.0, 1.0, 0.0);
		break;

	case 'z': //RotateClock
	case 'Z':
		glRotatef(3.0, 0.0, 0.0, 1.0);
		break;
	case 'x': //RotateCounterClock
	case 'X':
		glRotatef(-3.0, 0.0, 0.0, 1.0);
		break;

	case 'i'://ZoomIn
	case 'I':
		glScalef(1.05, 1.05, 1.05);
		break;
	case 'o'://ZoomOut
	case 'O':
		glScalef(0.95, 0.95, 0.95);
		break;
	}
	Display();
}

void Special(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_UP: //CameraUP
		glTranslatef(0.0, 4.0, 0.0);
		break;
	case GLUT_KEY_DOWN: //CameraDown
		glTranslatef(0.0, -4.0, 0.0);
		break;
	case GLUT_KEY_LEFT: //CameraLeft
		glTranslatef(-4.0, 0.0, 0.0);
		break;
	case GLUT_KEY_RIGHT: //CameraRight
		glTranslatef(4.0, 0.0, 0.0);
		break;
	}
	Display();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bimo Adam - 672018274");

	myinit();

	glutDisplayFunc(Display);
	glutKeyboardFunc(myKeyboard);
	glutSpecialFunc(Special);

	glutMainLoop();
	return 0;
}
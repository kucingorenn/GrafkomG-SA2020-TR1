#include <iostream>
#include <GL/freeglut.h>

void Display(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_QUADS);
	glColor3ub(178, 190, 158);
	glVertex3f(-100, 0, -100);
	glVertex3f(-100, 0, 100);
	glVertex3f(100, 0, 100);
	glVertex3f(100, 0, -100);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 0.0); //Hall
	glVertex3f(-10, 0, 25);
	glVertex3f(-10, 5, 25);
	glVertex3f(10, 5, 25);
	glVertex3f(10, 0, 25);

	glVertex3f(-10, 0, 20);
	glVertex3f(-10, 5, 20);
	glVertex3f(10, 5, 20);
	glVertex3f(10, 0, 20);

	glVertex3f(-10, 0, 20);
	glVertex3f(-10, 5, 20);
	glVertex3f(-10, 5, 25);
	glVertex3f(-10, 0, 25);

	glVertex3f(10, 0, 20);
	glVertex3f(10, 5, 20);
	glVertex3f(10, 5, 25);
	glVertex3f(10, 0, 25);

	glVertex3f(-10, 5, 25);
	glVertex3f(-10, 5, 20);
	glVertex3f(10, 5, 20);
	glVertex3f(10, 5, 25);

	glColor3f(1, 1, 0);
	glVertex3f(-3, 0, 20); //LorongHall
	glVertex3f(-3, 1, 20);
	glVertex3f(-3, 1, 10);
	glVertex3f(-3, 0, 10);

	glVertex3f(3, 0, 20);
	glVertex3f(3, 1, 20);
	glVertex3f(3, 1, 10);
	glVertex3f(3, 0, 10);

	glVertex3f(-3, 1, 20);
	glVertex3f(-3, 1, 10);
	glVertex3f(3, 1, 10);
	glVertex3f(3, 1, 20);

	glVertex3f(-15, 0, 35); //GedungKecilKiri
	glVertex3f(-15, 8, 35);
	glVertex3f(-12, 8, 35);
	glVertex3f(-12, 0, 35);

	glVertex3f(-15, 0, 15);
	glVertex3f(-15, 8, 15);
	glVertex3f(-12, 8, 15);
	glVertex3f(-12, 0, 15);

	glVertex3f(-12, 0, 35);
	glVertex3f(-12, 8, 35);
	glVertex3f(-12, 8, 15);
	glVertex3f(-12, 0, 15);

	glVertex3f(-15, 0, 35);
	glVertex3f(-15, 8, 35);
	glVertex3f(-15, 8, 15);
	glVertex3f(-15, 0, 15);

	glVertex3f(-12, 8, 35);
	glVertex3f(-15, 8, 35);
	glVertex3f(-15, 8, 15);
	glVertex3f(-12, 8, 15);

	glColor3ub(200, 200, 200);
	glVertex3f(-19, 0, 10); //GedungUtama
	glVertex3f(-19, 15, 10);
	glVertex3f(20, 15, 10);
	glVertex3f(20, 0, 10);

	glColor3ub(180, 180, 180);
	glVertex3f(15, 0, 10);
	glVertex3f(18, 0, 18);
	glVertex3f(18, 15, 18);
	glVertex3f(15, 15, 10);

	glVertex3f(18, 0, 18);
	glVertex3f(18, 15, 18);
	glVertex3f(20, 15, 18);
	glVertex3f(20, 0, 18);

	glVertex3f(20, 0, 18);
	glVertex3f(20, 15, 18);
	glVertex3f(20, 15, -10);
	glVertex3f(20, 0, -10);

	glColor3ub(120, 120, 120);
	glVertex3f(20, 0, -10);
	glVertex3f(-19, 0, 10);
	glVertex3f(-19, 15, 10);
	glVertex3f(20, 15, -10);

	glVertex3f(-18, 0, 10); //leftwing
	glVertex3f(-18, 15, 10);
	glVertex3f(-18, 15, 25);
	glVertex3f(-18, 0, 25);

	glColor3ub(160, 160, 160);
	glVertex3f(-18, 0, 25);
	glVertex3f(-18, 15, 25);
	glVertex3f(-40, 15, 30);
	glVertex3f(-40, 0, 30);

	glVertex3f(-40, 0, 30);
	glVertex3f(-40, 15, 30);
	glVertex3f(-42, 15, 22);
	glVertex3f(-42, 0, 22);

	glVertex3f(-42, 0, 22);
	glVertex3f(-42, 15, 22);
	glVertex3f(-19, 15, 10);
	glVertex3f(-19, 0, 10);

	glColor3ub(150, 150, 150);
	glVertex3f(-42, 15, 22);
	glVertex3f(-40, 15, 30);
	glVertex3f(-18, 15, 25);
	glVertex3f(-18, 15, 9);

	glColor3ub(190, 190, 190); //BelakangLorongBesar
	glVertex3f(10, 0, 10);
	glVertex3f(10, 15, 10);
	glVertex3f(5, 15, -30);
	glVertex3f(5, 0, -30);

	glVertex3f(-5, 0, 10);
	glVertex3f(-5, 15, 10);
	glVertex3f(-10, 15, -30);
	glVertex3f(-10, 0, -30);

	glColor3ub(150, 150, 150);
	glVertex3f(10, 15, 10);
	glVertex3f(5, 15, -30);
	glVertex3f(-10, 15, -30);
	glVertex3f(-5, 15, 10);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(150, 150, 150);
	glVertex3f(15, 15, 10);
	glVertex3f(18, 15, 18);
	glVertex3f(20, 15, 18);
	glVertex3f(20, 15, 10);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(150, 150, 150);
	glVertex3f(20, 15, 10);
	glVertex3f(20, 15, -10);
	glVertex3f(-19, 15, 10);
	glEnd();

	glPushMatrix();
	glPopMatrix();
	glutSwapBuffers();
}

void myinit(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glEnable(GL_DEPTH_TEST);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	glShadeModel(GL_SMOOTH);
	//glMatrixMode(GL_MODELVIEW);
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
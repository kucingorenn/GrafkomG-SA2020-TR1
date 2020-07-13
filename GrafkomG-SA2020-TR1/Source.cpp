#include <iostream>
#include <GL/freeglut.h>

void drawSquare(float r, float g, float b) {
	glColor3f(r, g, b);
	glBegin(GL_POLYGON);
	glVertex2f(-100, 100.0);
	glVertex2f(100, 100.0);
	glVertex2f(100, -100.0);
	glVertex2f(-100, -100.0);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glPushMatrix();
	glRotatef(1, 0, 0, 1);
	drawSquare(1, 0, 0);
	glPopMatrix();
	glutSwapBuffers();
}

void myinit() {
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);
	//glMatrixMode(GL_PROJECTION);
	//glLoadIdentity();
	gluOrtho2D(-500, 500, -500, 500);
}

void myKeyboard(unsigned char key, int x, int y) {
	switch (key)
	{
	case 'a':
		glPushMatrix();
		glRotatef(45, 0, 0, 1);
		drawSquare(1, 0, 0);
		glPopMatrix();
	default:
		break;
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Transformasi");
	glutKeyboardFunc(myKeyboard);
	glutDisplayFunc(display);

	myinit();
	glutMainLoop();

	return 0;
}
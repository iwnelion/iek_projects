//#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void display(){
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);

    glEnable(GL_POINT_SMOOTH);
    glColor3f(0,1,0);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex2i(13,20);
    glVertex2i(8,15);
    glVertex2i(18,15);
    glVertex2i(5,10);
    glVertex2i(20,10);

    glColor3f(1,0,0);
    glVertex2i(11,13);
    glVertex2i(15,13);
    glVertex2i(10,6);
    glVertex2i(16,6);
    glEnd();

    glPointSize(10);
    glColor3f(0.1,0,0);
    glBegin(GL_POINTS);
    glVertex2i(15,3);
    glVertex2i(15,-1);
    glVertex2i(10,3);
    glVertex2i(10,-1);
    glEnd();
    glFlush();
}
int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutCreateWindow("drawing round points");

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-5,35,-5,30);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

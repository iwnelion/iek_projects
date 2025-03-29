//#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

GLfloat eyeX, eyeY, eyeZ;
GLfloat toX, toY, toZ;
GLfloat viewUpX, viewUpY, viewUpZ;

void display(){
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    //drawing the x axis in red
    glColor3f(1,0,0);
    glBegin(GL_LINES);
    glVertex3f(-100,0,0);
    glVertex3f(100,0,0);
    glEnd();

    //drawing the y axis in green
    glColor3f(0,1,0);
    glBegin(GL_LINES);
    glVertex3f(0,-100,0);
    glVertex3f(0,100,0);
    glEnd();

    //drawing the z axis in blue
    glColor3f(0,0,1);
    glBegin(GL_LINES);
    glVertex3f(0,0,-100);
    glVertex3f(0,0,100);
    glEnd();

    //drawing a yellow shape
    glColor3f(1,1,0);
    glBegin(GL_LINE_LOOP);
    glVertex3f(-10,-10,10);
    glVertex3f(10,-10,10);
    glVertex3f(10,-10,-10);
    glVertex3f(-10,-10,-10);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex3f(-10,-10,10);
    glVertex3f(10,-10,10);
    glVertex3f(10,10,-10);
    glVertex3f(-10,10,-10);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex3f(-10,-10,-10);
    glVertex3f(10,-10,-10);
    glVertex3f(10,10,-10);
    glVertex3f(-10,10,-10);
    glEnd();

    glFlush();
}
int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(640,480);
    glutCreateWindow("a viewing transformation example");

    glMatrixMode(GL_PROJECTION);
    glOrtho(-100,100,-100,100,-100,100);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

    glMatrixMode(GL_MODELVIEW);

    eyeX=30;
    eyeY=10;
    eyeZ=20;
    toX=0;
    toY=0;
    toZ=0;
    viewUpX=0;
    viewUpY=1;
    viewUpZ=0;

    gluLookAt(eyeX,eyeY,eyeZ,toX,toY,toZ,viewUpX,viewUpY,viewUpZ);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
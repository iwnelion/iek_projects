// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void display(){
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);

    glColor3f(1,0,0);

    glBegin(GL_LINES);
    glVertex2i(0,0);
    glVertex2i(10,0);
    glVertex2i(0,10);
    glVertex2i(10,10);
    glEnd();

    glColor3f(0,0,1);

    glBegin(GL_LINE_LOOP);
    glVertex2i(0,15);
    glVertex2i(0,20);
    glVertex2i(5,25);
    glVertex2i(10,20);
    glVertex2i(10,15);
    glEnd();

    glFlush();
}
int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
    glutCreateWindow("drawing lines");

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-5,30,-5,30);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
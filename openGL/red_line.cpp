// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void display(){
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3f(1,0,0);
    glVertex2i(20,20);
    glVertex2i(40,40);
    glEnd();
    glFlush();
}
int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutCreateWindow("a sample open gl application");
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0,50,0,50);

    glutDisplayFunc(display);
    glutMainLoop(); 

    return 0;
}

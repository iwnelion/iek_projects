// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void display(){
    glLoadIdentity();
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(3);
    glColor3f(0,0,1);
    glBegin(GL_LINES);
    // drawing the Oy axis
    glVertex2f(0,-24);
    glVertex2f(0,24);
    // drawing the Ox axis
    glVertex2f(-32,0);
    glVertex2f(32,0);
    glEnd();

    // drawing a blue rectangle
    glRecti(0,0,20,10);

    glColor3f(0,1,0);
    // all shapes declared after this command will be rotated clockwise by 45 degrees, 
    // with respect to the coordinates given
    glRotatef(45,0,0,1);
    // a green rectangle will be drawn rotated by 45 degrees
    glRecti(0,0,20,10);
    glFlush();
}
int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutCreateWindow("rotation example");
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-32,32,-24,24);
    glMatrixMode(GL_MODELVIEW);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
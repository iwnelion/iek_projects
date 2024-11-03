// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void display(){
    //sets clear color to black
    glClearColor(0,0,0,0);
    //clears the color buffer to the specified clear color
    glClear(GL_COLOR_BUFFER_BIT);
    //sets the current drawing color to red
    glColor3f(1,0,0);

    //sets the size of the points to be drawn
    glPointSize(3);

    //defines a series of points to be drawn
    glBegin(GL_POINTS);
    //specifies the coordinates of the points to be drawn
    glVertex2i(10,10);
    glVertex2i(20,10);
    glVertex2i(25,15);
    glVertex2i(20,20);
    glVertex2i(10,20);
    glEnd();

    //forces the execution of the commands in finite time
    glFlush();
}
int main(int argc, char** argv){
    //initializes the glut library
    glutInit(&argc,argv);
    //sets the initial position of the window
    glutInitWindowPosition(50,50);
    //sets the initial size of the window
    glutInitWindowSize(640,480);
    //sets the display mode (single buffer and rgb color)
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    //creates window w the specified title
    glutCreateWindow("drawing points");
    //sets the current matrix mode to projection
    glMatrixMode(GL_PROJECTION);
    //defines a 2d orthographic projection matrix
    gluOrtho2D(5,30,5,25);
    //registers the display callback function
    glutDisplayFunc(display);
    //enters the glut event processing loop
    glutMainLoop();

    return 0;
}

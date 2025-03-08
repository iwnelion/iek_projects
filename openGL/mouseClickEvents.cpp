// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

// clipping window limits
float xwmin=-50, xwmax=50, ywmin=-50, ywmax=50;
// application windows dimensions
int windowWidth=640, windowHeight=480;
GLfloat xw1,yw1,xw2,yw2;
void display(){
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glRectf(xw1,yw1,xw2,yw2);
    glFlush();
}
void mouseButtonClicked(int button, int state, int x, int y){
    if(state==GLUT_DOWN){
        // converting coordinates captured by event handler to world coordinates
        xw1=(float)(xwmin+(float)(x)*(xwmax-xwmin)/(float)(windowWidth));
        yw1=(float)(ywmin+(float)(y)*(ywmax-ywmin)/(float)(windowHeight));
        xw2=xw1+20;
        yw2=yw1+20;
        if(button==GLUT_LEFT_BUTTON)
            glColor3f(1,0,0);
        else if(button==GLUT_MIDDLE_BUTTON)
            glColor3f(0,1,0);
        else if(button==GLUT_RIGHT_BUTTON)
            glColor3f(0,1,0);
        // generate a display event
        glutPostRedisplay();
    }
}
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(windowWidth, windowHeight);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("mouse click events");
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(xwmin,xwmax,ywmin,ywmax);
    glutDisplayFunc(display);
    glutMouseFunc(mouseButtonClicked);
    glutMainLoop();
    return 0;
}
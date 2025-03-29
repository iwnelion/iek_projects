// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

GLfloat *elem16;

void display(){
    glLoadIdentity();
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0,0,1);

    glBegin(GL_LINES);

    //drawing the y axis
    glVertex2f(0,-24);
    glVertex2f(0,24);

    //drawing the x axis
    glVertex2f(-32,0);
    glVertex2f(32,0);
    glEnd();

    //drawing a rectangle
    glRecti(0,0,20,10);

    glColor3f(0,1,0);

    //loading the shearing matrix in place of the current modelview matrix
    glLoadMatrixf(elem16);

    //this rectangle will be drawn sheared
    glRecti(0,0,20,10);

    glFlush();
}
int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutCreateWindow("Shearing transformation");

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-32,32,-24,24);

    glMatrixMode(GL_MODELVIEW);
    elem16=new GLfloat[16];

    elem16[0]=1; elem16[1]=-0.3; elem16[2]=0; elem16[3]=0;
    elem16[4]=0; elem16[5]=1; elem16[6]=0; elem16[7]=0;
    elem16[8]=0; elem16[9]=0; elem16[10]=1; elem16[11]=0;
    elem16[12]=0; elem16[13]=0; elem16[14]=0; elem16[15]=1;

    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}
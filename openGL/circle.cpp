// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159
#define circlePoints 256
int i;

void display(){
    GLfloat angleStep=2*PI/(float)circlePoints;
    GLuint pointsPerQuarter=circlePoints/4;

    GLfloat x[circlePoints];
    GLfloat y[circlePoints];

    GLfloat radius=10;

    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,1,0);

    glLineWidth(3);

    for(i=0;i<pointsPerQuarter/2;i++){
        //define points in the first quadrant
        x[i]=radius*cos(i*angleStep);
        y[i]=radius*sin(i*angleStep);

        x[pointsPerQuarter-1-i]=y[i];
        y[pointsPerQuarter-1-i]=x[i];

        //define points in the second quadrant
        x[pointsPerQuarter+i]=-y[i];
        y[pointsPerQuarter+i]=x[i];

        x[2*pointsPerQuarter-1-i]=-x[i];
        y[2*pointsPerQuarter-1-i]=y[i];

        //define points in third quadrant
        x[2*pointsPerQuarter+i]=-x[i];
        y[2*pointsPerQuarter+i]=-y[i];

        x[3*pointsPerQuarter-1-i]=-y[i];
        y[3*pointsPerQuarter-1-i]=-x[i];

        //define points in fourth quadrant
        x[3*pointsPerQuarter+i]=y[i];
        y[3*pointsPerQuarter+i]=-x[i];

        x[4*pointsPerQuarter-1-i]=x[i];
        y[4*pointsPerQuarter-1-i]=-y[i];
    }

    glBegin(GL_LINE_LOOP);
    for(i=0;i<circlePoints;i++){
        glVertex2f(x[i],y[i]);
    }
    glEnd();
    glFlush();
}
int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutCreateWindow("Circle");

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-32,32,-24,24);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

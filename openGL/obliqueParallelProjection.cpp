//#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

//plagia parallili proboli

GLfloat *X;
GLfloat *Y;
GLfloat *Z;

//shearing vector components
GLfloat vx,vy,vz;
GLdouble xwmin, xwmax, ywmin, ywmax, znear, zfar;
GLfloat *shearingMatrix;

void DrawCube(GLfloat *X, GLfloat *Y, GLfloat *Z){
/*
    1--------------2
    |\             |\
    | 0--------------3
    | |            | |
    | |            | |
    | |            | |
    5-|------------6 |
    \ |             \|
    4----------------7
*/
    glBegin(GL_LINE_LOOP);
    glVertex3f(X[0],Y[0],Z[0]);
    glVertex3f(X[1],Y[1],Z[1]);
    glVertex3f(X[2],Y[2],Z[2]);
    glVertex3f(X[3],Y[3],Z[3]);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex3f(X[4],Y[4],Z[4]);
    glVertex3f(X[5],Y[5],Z[5]);
    glVertex3f(X[6],Y[6],Z[6]);
    glVertex3f(X[7],Y[7],Z[7]);
    glEnd();

    glBegin(GL_LINES);
    glVertex3f(X[0],Y[0],Z[0]);
    glVertex3f(X[4],Y[4],Z[4]);
    glVertex3f(X[1],Y[1],Z[1]);
    glVertex3f(X[5],Y[5],Z[5]);
    glVertex3f(X[2],Y[2],Z[2]);
    glVertex3f(X[6],Y[6],Z[6]);
    glVertex3f(X[3],Y[3],Z[3]);
    glVertex3f(X[7],Y[7],Z[7]);
    glEnd(); 
}
void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    X[0]=-5; Y[0]=25; Z[0]=-10;
    X[1]=-5; Y[1]=25; Z[1]=-20;
    X[2]=-20; Y[2]=25; Z[2]=-20;
    X[3]=-20; Y[3]=25; Z[3]=-10;
    X[4]=-5; Y[4]=10; Z[4]=-10;
    X[5]=-5; Y[5]=10; Z[5]=-20;
    X[6]=-20; Y[6]=10; Z[6]=-20;
    X[7]=-20; Y[7]=10; Z[7]=-10;

    glColor3f(1,0,0);
    DrawCube(X,Y,Z);

    X[0]=10; Y[0]=25; Z[0]=-10;
    X[1]=10; Y[1]=25; Z[1]=-20;
    X[2]=25; Y[2]=25; Z[2]=-20;
    X[3]=25; Y[3]=25; Z[3]=-10;
    X[4]=10; Y[4]=10; Z[4]=-10;
    X[5]=10; Y[5]=10; Z[5]=-20;
    X[6]=25; Y[6]=10; Z[6]=-20;
    X[7]=25; Y[7]=10; Z[7]=-10;

    glColor3f(0,1,0);

    DrawCube(X,Y,Z);

    glFlush();
}
int main(int argc,char **argv){
    X=new GLfloat[8];
    Y=new GLfloat[8];
    Z=new GLfloat[8];

    vx=0.2;
    vy=0.2;
    vz=1;

    xwmin=-30;
    xwmax=30;
    ywmin=-30;
    ywmax=30;
    znear=-5;
    zfar=-30;

    glutInit(&argc,argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutCreateWindow("oblique parallel projection");

    glClearColor(1,1,1,0);

    glMatrixMode(GL_MODELVIEW);
    gluLookAt(0,0,0,0,0,-1,0,1,0);

    glMatrixMode(GL_PROJECTION);

    glOrtho(xwmin,xwmax,ywmin,ywmax,-znear,-zfar);

    shearingMatrix=new GLfloat[16];

    shearingMatrix[0]=1;
    shearingMatrix[1]=0;
    shearingMatrix[2]=0;
    shearingMatrix[3]=0;
    shearingMatrix[4]=0;
    shearingMatrix[5]=1;
    shearingMatrix[6]=0;
    shearingMatrix[7]=0;
    shearingMatrix[8]=-vx/vz;
    shearingMatrix[9]=-vy/vz;
    shearingMatrix[10]=1;
    shearingMatrix[11]=0;
    shearingMatrix[12]=znear*vx/vz; shearingMatrix[13]=znear*vy/vz;
    shearingMatrix[14]=0;
    shearingMatrix[15]=1;

    glMultMatrixf(shearingMatrix);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
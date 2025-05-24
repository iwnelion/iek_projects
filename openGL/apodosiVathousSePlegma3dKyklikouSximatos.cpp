// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

GLUquadric *cylinder;
void init()
{
 glutInitWindowPosition(50,50);
 glutInitWindowSize(800,600);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutCreateWindow("Depth Cueing");

 glMatrixMode(GL_PROJECTION);
 glOrtho(-64,64,-48,48,0,50);
 glColor3f(0,1,0);
 glClearColor(0,0,0,0);
//Setting line width to 3 pixels
 glLineWidth(3);
//Enabling hidden surface removal
 glEnable(GL_DEPTH_TEST);
//Enabling fog effects
 glEnable(GL_FOG);

//Setting the fog color (0, 0.3, 0)
 GLfloat fogColor[]={0.0,0.3,0};
 glFogfv(GL_FOG_COLOR,fogColor);
 glFogf(GL_FOG_DENSITY,0.05); 
 //Initializing the GLUquadric object cylinder
 cylinder=gluNewQuadric();
//All declared shapes will be rotated by 50 degrees by the x axis
//and translated by -30 along the z-axis
 glMatrixMode(GL_MODELVIEW);
 glTranslatef(0,0,-30);
 glRotatef(50,1,0,0);
}
void display()
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
//Drawing a cylinder wireframe
 gluQuadricDrawStyle(cylinder,GLU_LINE);
 gluCylinder(cylinder,20,20,20,20,5);
 glFlush();
}
int main(int argc, char **argv)
{
 glutInit(&argc,argv);

 init();
 glutDisplayFunc(display);
 glutMainLoop();

 return 0;
}
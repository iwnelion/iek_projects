// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void init()
{
 glutInitWindowPosition(50,50);
 glutInitWindowSize(800,600);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutCreateWindow("Fog modelling");
 glMatrixMode(GL_PROJECTION);
 glOrtho(-80,80,-60,60,0,100);
 glClearColor(0,0,0,1);
//Enabling hidden-surface remooval
 glEnable(GL_DEPTH_TEST);
//Enabling shading model
 glEnable(GL_LIGHTING);
//Specifying a distant light source with light rays travelling along the z axis
 GLfloat light0Position[]={0,0,1,0};
 glLightfv(GL_LIGHT0,GL_POSITION,light0Position);
//Specifying material ambient and diffuse reflection properties
 GLfloat reflectionCoefficients[]={0.7,0.7,0.2};
 glMaterialfv(GL_FRONT,GL_AMBIENT_AND_DIFFUSE,reflectionCoefficients);
 glEnable(GL_LIGHT0);
//Enabling atmpospheric effects
 glEnable(GL_FOG);
 //Setting fog color: (0.8, 0.8, 0.8)
 GLfloat fogColor[]={0.8,0.8,0.8};
 glFogfv(GL_FOG_COLOR,fogColor);
//Setting fog density to 0.015. An exponential attenuation model is assumed.
 glFogf(GL_FOG_DENSITY,0.015);
}
void display()
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 glMatrixMode(GL_MODELVIEW);

//Drawing a sphere centered at position (-30,-0,-25)
 glLoadIdentity();
 glTranslatef(-45,0,-25);
 glutSolidSphere(20,80,80);
//Drawing a sphere centered at a further position (0,0,-40)
 glLoadIdentity();
 glTranslatef(-15,0,-40);
 glutSolidSphere(20,80,80);

//Drawing a sphere centered at position (30,0,-60)
 glLoadIdentity();
 glTranslatef(15,0,-60);
 glutSolidSphere(20,80,80);
//Drawing a sphere centered at position (30,0,-80)
 glLoadIdentity();
 glTranslatef(45,0,-80);
 glutSolidSphere(20,80,80);
//Drawing a "background plane" (z=-99) 
glLoadIdentity();
 glBegin(GL_QUADS);
 glVertex3f(-80,-60,-99);
 glVertex3f(80,-60,-99);
 glVertex3f(80,60,-99);
 glVertex3f(-80,60,-99);
 glEnd();
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
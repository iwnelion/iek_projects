// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void init()
{
 glutInitWindowPosition(50,50);
 glutInitWindowSize(800,600);
 glutCreateWindow("Ambient reflection");
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glClearColor(0,0,0,0);
 glMatrixMode(GL_MODELVIEW);
 glTranslatef(0,0,-40);
 glMatrixMode(GL_PROJECTION);
 glOrtho(-80,80,-60,60,0,50);
 glEnable(GL_LIGHTING);
//Defining global ambient lighting properties
 GLfloat globalAmbient[]={0.5,0.5,0.5};
 glLightModelfv(GL_LIGHT_MODEL_AMBIENT,globalAmbient); 
 //Defining "ambient reflection" coefficients for surfaces
 GLfloat ambientMat[]={0.4,0.6,0.7};
 glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,ambientMat);
}
void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
//Drawing a sphere
 glutSolidSphere(40,80,80);
 glFlush();
}
int main(int argc, char** argv)
{
 glutInit(&argc,argv);

//Initializations
 init();
 glutDisplayFunc(display);
 glutMainLoop();
}
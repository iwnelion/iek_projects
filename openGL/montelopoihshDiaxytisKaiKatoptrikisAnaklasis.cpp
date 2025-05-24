// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void init()
{
 glutInitWindowPosition(50,50);
 glutInitWindowSize(800,600);
 glutCreateWindow("Diffuse reflection");
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glClearColor(0,0,0,0);
 glMatrixMode(GL_PROJECTION);
 glOrtho(-80,80,-60,60,0,50);
 glEnable(GL_LIGHTING);
//Disabling global ambient light
 GLfloat globalAmbient[]={0,0,0};
 glLightModelfv(GL_LIGHT_MODEL_AMBIENT,globalAmbient); 
 //Defining the position of the point light source GL_LIGHT0 at (x,y,z)=(0,0,40)
 GLfloat light0Position[]={0,0,40,1};
 glLightfv(GL_LIGHT0,GL_POSITION,light0Position);
//Defining "diffuse" lighting properties for GL_LIGHT0
 GLfloat light0Diffuse[]={1,1,1};
 glLightfv(GL_LIGHT0,GL_DIFFUSE,light0Diffuse);
//Defining "specular" lighting properties for GL_LIGHT0
 GLfloat light0Specular[]={.5,1,1};
 glLightfv(GL_LIGHT0,GL_SPECULAR,light0Specular);

//Defining "diffuse reflection" coefficients for surfaces
 GLfloat diffuseMat[]={0.6,0.5,0.1};
 glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuseMat);
//Defining "specular reflection" coefficients for surfaces
 GLfloat specularMat[]={.6,.5,.1};
 glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,specularMat);
//Defining material shininess exponent
 glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,64);
 glEnable(GL_LIGHT0);
//Translating all subsequent shapes by x=-40
 glMatrixMode(GL_MODELVIEW);
 glTranslatef(0,0,-40);
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
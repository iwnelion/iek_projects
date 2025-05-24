// #include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void init()
{
 glutInitWindowPosition(50,50);
 glutInitWindowSize(800,600);
 glutCreateWindow("Using normal vectors");
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glClearColor(0,0,0,0);
 glMatrixMode(GL_PROJECTION);
 glOrtho(-40,40,-30,30,1,50);
 glEnable(GL_LIGHTING);
//Disabling global ambient light
 GLfloat globalAmbient[]={0,0,0};
 glLightModelfv(GL_LIGHT_MODEL_AMBIENT,globalAmbient);
//Defining the position of the point light source GL_LIGHT0 at
//(x,y,z)=(0,0,40)
 GLfloat light0Position[]={0,0,0,1};
 glLightfv(GL_LIGHT0,GL_POSITION,light0Position);
 GLfloat light0Ambient[]={0,0,0};
 glLightfv(GL_LIGHT0,GL_AMBIENT,light0Ambient);
//Defining "diffuse" lighting properties for GL_LIGHT0
 GLfloat light0Diffuse[]={1,1,1};
 glLightfv(GL_LIGHT0,GL_DIFFUSE,light0Diffuse);
//Defining "diffuse" lighting properties for GL_LIGHT0
 GLfloat light0Specular[]={0,0,0};
 glLightfv(GL_LIGHT0,GL_SPECULAR,light0Specular);

//Defining "diffuse reflection" coefficients for surfaces
 GLfloat diffuseMat[]={0.4,0.6,0.7};
 glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,diffuseMat);
 glEnable(GL_LIGHT0);
}
void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
//Drawing a triangle - Each is assigned a different normal vector
 glBegin(GL_TRIANGLES);
//Normal vector of the first point nv1=(-1,0,1)
 GLfloat nv1[]={-1,0,1};
 glNormal3fv(nv1);
 glVertex3f(-10,0,-10);
//Normal vector of the first point nv2=(0,1,2)
 GLfloat nv2[]={0,1,2};
 glNormal3fv(nv2);
 glVertex3f(10,-10,-10);
//Normal vector of the first point nv3=(0,0,1)
 GLfloat nv3[]={0,0,1};
 glNormal3fv(nv3);
 glVertex3f(10,10,-10);
 glEnd();
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
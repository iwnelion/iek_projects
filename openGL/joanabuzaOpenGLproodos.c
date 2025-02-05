#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void display(){
	glClearColor(0,0.529,0.808,0.980);
	glClear(GL_COLOR_BUFFER_BIT);
	
	//house colored square
	glColor3f(0.961,0.871,0.702);
	glBegin(GL_QUADS);
	glVertex2i(-140,-100);	//left down
	glVertex2i(-140,100);	//left top
	glVertex2i(150,100);	//right top
	glVertex2i(150,-100);	//right down
	glEnd();
	
	//house outline
	glLineWidth(5);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	//bottom
	glVertex2i(-140,-100);	//left down
	glVertex2i(150,-100);	//right down
	//top
	glVertex2i(-140,100);	//left top
	glVertex2i(150,100);	//right top
	//left
	glVertex2i(-140,-100);	//left top
	glVertex2i(-140,100);	//left down
	//right
	glVertex2i(150,100);	//right top
	glVertex2i(150,-100);	//right down
	glEnd();
	
	//roof colored triangle
	glColor3f(0.804,0.522,0.247);
	glBegin(GL_TRIANGLES);
	glVertex2i(-140,100);	//left top
	glVertex2i(150,100);	//right top
	glVertex2i(20,230);		//top corner
	glEnd();
	
	//roof triangle outline
	glLineWidth(7);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	//bottom
	glVertex2i(-140,100);	//left top
	glVertex2i(150,100);	//right top
	//left
	glVertex2i(-140,100);	//left top
	glVertex2i(20,230);		//top corner
	//right
	glVertex2i(150,100);	//right top
	glVertex2i(20,230);		//top corner
	glEnd();
	
	//door
	glColor3f(0.824,0.412,0.118);
	glBegin(GL_QUAD_STRIP);
	glVertex2i(50,-97);		//right bottom
	glVertex2i(-25,-97);	//left bottom
	glVertex2i(50,3);		//right top
	glVertex2i(-25,3);		//left top
	glEnd();
	
	//door outline
	glLineWidth(5);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	//right
	glVertex2i(50,-97);		//right bottom
	glVertex2i(50,3);		//right top
	//left
	glVertex2i(-25,-97);	//left bottom
	glVertex2i(-25,3);		//left top
	//top
	glVertex2i(51,3);		//right top
	glVertex2i(-27,3);		//left top
	glEnd();
	
	//left window
	glColor3f(0.824,0.412,0.118);
	glBegin(GL_QUAD_STRIP);
	glVertex2i(-50,10);		//right bottom
	glVertex2i(-100,10);	//left bottom
	glVertex2i(-50,60);		//right top
	glVertex2i(-100,60);	//left top
	glEnd();
	
	//left window outline
	glLineWidth(5);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	//right
	glVertex2i(-51,11);		//right bottom
	glVertex2i(-51,63);		//right top
	//left
	glVertex2i(-101,11);	//left bottom
	glVertex2i(-101,63);	//left top
	//top
	glVertex2i(-100,60);	//left top
	glVertex2i(-50,60);		//right top
	//bottom
	glVertex2i(-50,10);		//right bottom
	glVertex2i(-100,10);	//left bottom
	glEnd();
	
	//right window
	glColor3f(0.824,0.412,0.118);
	glBegin(GL_QUAD_STRIP);
	glVertex2i(118,10);		//right bottom
	glVertex2i(65,10);		//left bottom
	glVertex2i(118,60);		//right top
	glVertex2i(65,60);		//left top
	glEnd();
	
	//right window outline
	glLineWidth(5);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	//right
	glVertex2i(118,11);		//right bottom
	glVertex2i(118,60);		//right top
	//left
	glVertex2i(65,11);		//left bottom
	glVertex2i(65,60);		//left top
	//top
	glVertex2i(66,60);		//left top
	glVertex2i(119,60);		//right top
	//bottom
	glVertex2i(119,11);		//right bottom
	glVertex2i(66,11);		//left bottom
	glEnd();
	
	//chimney
	glColor3f(0,0,0);
	glBegin(GL_QUADS);
	glVertex2i(90,220); 	//left top
	glVertex2i(130,220);	//right top
	glVertex2i(130,123);	//right bottom
	glVertex2i(90,160);		//left bottom
	glEnd();

	//green grass
	glColor3f(0,0.600,0);
	glBegin(GL_QUADS);
	glVertex2i(-400,-101);	//left top
	glVertex2i(400,-101);	//right top
	glVertex2i(400,-400);	//right bottom	
	glVertex2i(-400,-400);	//left bottom
	glEnd();
	
	//tree bark
	glColor3f(0.545,0.27,0.075);
	glBegin(GL_QUAD_STRIP);
	glVertex2i(-200,-101);		//right bottom
	glVertex2i(-220,-101);		//left bottom
	glVertex2i(-200,-50);		//right top
	glVertex2i(-220,-50);		//left top
	glEnd();
	
	//tree foliage
	glColor3f(0.49,1,0);
	glBegin(GL_TRIANGLES);
	glVertex2i(-250,-50);		//left bottom
	glVertex2i(-170,-50);		//right bottom
	glVertex2i(-210,40);		//top
	glEnd();
	
	//bush1
	glLineWidth(5);
	glColor3f(0.67,1,0.18);
	glBegin(GL_LINES);
	glVertex2i(-270,-100);		//right bottom
	glVertex2i(-300,-100);		//left bottom
	
	glVertex2i(-285,-100);		//center bottom
	glVertex2i(-285,-80);		//center top

	glVertex2i(-285,-100);		//center bottom
	glVertex2i(-300,-85);		//left top
	
	glVertex2i(-285,-100);		//center bottom
	glVertex2i(-270,-85);		//right top
	glEnd();
	
	//bush2
	glLineWidth(7);
	glColor3f(0.67,1,0.18);
	glBegin(GL_LINES);
	glVertex2i(190,-100);		//left bottom
	glVertex2i(270,-100);		//right bottom
	
	glVertex2i(230,-100);		//center bottom
	glVertex2i(230,-50);		//center top
	
	glVertex2i(230,-100);		//center bottom
	glVertex2i(270,-70);		//right top
	
	glVertex2i(230,-100);		//center bottom
	glVertex2i(190,-70);		//left top
	
	glVertex2i(230,-100);		//center bottom
	glVertex2i(255,-55);		//right top top
	
	glVertex2i(230,-100);		//center bottom
	glVertex2i(205,-55);		//left top top
	glEnd();
	
	//canada
	//pole
	glLineWidth(2);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2i(-120,119);
	glVertex2i(-120,150);
	glEnd();
	
	//red
	glColor3f(1,0,0);
	glBegin(GL_QUAD_STRIP);
	glVertex2i(-120,150);
	glVertex2i(-160,150);
	glVertex2i(-160,170);
	glVertex2i(-120,170);
	glVertex2i(-160,170);
	glVertex2i(-160,150);
	glEnd();
	
	//white
	glColor3f(1,1,1);
	glBegin(GL_QUAD_STRIP);
	glVertex2i(-134,150);
	glVertex2i(-148,150);
	glVertex2i(-148,170);
	glVertex2i(-134,170);
	glVertex2i(-148,170);
	glVertex2i(-148,150);
	glEnd();
	
	//smoke gray color
	glColor3f(0.663,0.663,0.663);
	glBegin(GL_QUAD_STRIP);
	glVertex2i(101,222);	//left bottom
	glVertex2i(154,222);	//right bottom
	glVertex2i(106,222);	//left top
	glVertex2i(131,237);	//right top
	glVertex2i(129,238);	//left top top
	glVertex2i(151,238);	//right top top
	glVertex2i(151,223);	//left bottom bottom
	glVertex2i(159,223);	//right bottom bottom
	glVertex2i(149,240);	//left top top top
	glVertex2i(159,240);	//right top top top
	glVertex2i(159,223);	//right end bottom
	glVertex2i(159,240);	//right end top
	glEnd();
	
	//smoke outline
	glLineWidth(5);
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2i(100,222);	//left bottom
	glVertex2i(150,222);	//right bottom
	glVertex2i(105,222);	//left top
	glVertex2i(130,237);	//right top
	glVertex2i(129,238);	//left top top
	glVertex2i(150,238);	//right top top
	glVertex2i(150,223);	//left bottom bottom
	glVertex2i(160,223);	//right bottom bottom
	glVertex2i(150,240);	//left top top top
	glVertex2i(160,240);	//right top top top
	glVertex2i(160,223);	//right end bottom
	glVertex2i(160,240);	//right end top
	glEnd();
	glFlush();
}
int main(int argc, char** argv){
	glutInit(&argc,argv);
	glutInitWindowPosition(20,20);
	glutInitWindowSize(800,600);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	glutCreateWindow("Joana Buza");
	
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-400,400,-300,300);	//l,r,b,t
	glutDisplayFunc(display);
	glutMainLoop();
	
	return 0;
}
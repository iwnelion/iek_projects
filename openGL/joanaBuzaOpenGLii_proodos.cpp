#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

//initializing angles as variables to zero so they can later be increased
float angle=0.0f;
float angle2=0.0f;
bool showAxes=false;

void makeAxes(){            //called in the display()
    if(showAxes){           //if the bool value has changed to true, the axes appear
		glLineWidth(3);
        glBegin(GL_LINES);
        //red axis x
        glColor3f(1, 0, 0);
        glVertex3f(-10, 0, 0);
        glVertex3f(10, 0, 0);
        //yellow axis y
        glColor3f(1, 1, 0);
        glVertex3f(0, -10, 0);
        glVertex3f(0, 10, 0);
        //green axis z
        glColor3f(0, 1, 0);
        glVertex3f(0, 0, -10);
        glVertex3f(0, 0, 10);
        glEnd();
    }
}

void display(){
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    
    //red teapot
    glPushMatrix();
    glColor3f(1,0,0);
    glRotatef(angle, 0.0f, 1.0f, 0.0f);     //rotation on the y axis
    glutSolidTeapot(2);                     //teapot size
    glPopMatrix();

    //yellow teapot
    glPushMatrix();
    glRotatef(angle, 0.0f, 1.0f, 0.0f);     //rotation around the big teapot
    glTranslatef(8.0f, 0.0f, 0.0f);         //distance from the big teapot
    glRotatef(angle, 0.0f, 1.0f, 0.0f);     //rotation on the y axis
    glColor3f(1,1,0);
    glutSolidTeapot(1.25);                  //teapot size
    glPopMatrix();

    //blue teapot
    glPushMatrix();
    glRotatef(angle2, 0.0f, 1.0f, 0.0f);    //rotation around the big teapot. angle argument here has a different incrementation
    glTranslatef(4.0f, 0.0f, 0.0f);         //distance from the big teapot
    glRotatef(angle, 0.0f, 1.0f, 0.0f);     //rotation on the y axis
    glColor3f(0,0,1);
    glutSolidTeapot(0.75);                  //teapot size
    glPopMatrix();
    
    //wire sphere
	glLineWidth(1);
    glColor3f(0,1,1);                       //cyan color
    glPushMatrix();
    glutWireSphere(10,25,25);
    glPopMatrix();

    makeAxes();         //calls makesAxes and if the bool showAxes has changed to true, they appear

    glutSwapBuffers();  //swaps the buffers for double buffering
}

void renderScene() {        //updates the rotation of the teapots
    angle+=0.25f;
    angle2+=0.75f;          //to increase the speed of the small teapot, so it can rotate faster than the others

    glutPostRedisplay();    //redraws the scene
}

void keyboard(unsigned char key, int x, int y){
    if(key=='q' || key=='Q' || key==27){        //if any of these keys is pressed, the window closes
        exit(0);
    }
    if(key=='h' || key=='H'){                   //if any of these keys is pressed, the bool value of showAxes changes to its opposite
        showAxes=!showAxes;
    }
} 

int main(int argc, char** argv){
    glutInit(&argc,argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(800,600);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
    glutCreateWindow("joana buza");

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-20, 20, -15, 15, 0, 100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(5,6,20, 0,0,0, 0,1,0);

    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutIdleFunc(renderScene);
    glutMainLoop();

    return 0;
}
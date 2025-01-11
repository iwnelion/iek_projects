//#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

GLuint x1=10, y1=10;
GLuint x2=20, y2=20;

void display(){
    glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,0,0);
    glRecti(x1,y1,x2,y2);
    glFlush();
}
void keyboard(unsigned char key, int x, int y){
    //printf("keyboard event detected \n");
    if(key=='t'){
        y1++;
        y2++;
    }
    if(key=='g'){
        y1--;
        y2--;
    }
    if(key=='f'){
        x1--;
        x2--;
    }
    if(key=='h'){
        x1++;
        x2++;
    }
    glutPostRedisplay();
}
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(640,480);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutCreateWindow("keyboard events");

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-5,35,-5,30);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();

    return 0;
}
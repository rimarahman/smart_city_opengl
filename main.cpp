#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_TRIANGLES);
glColor3ub(0,0,255);

glVertex3f(20,20,0);
glVertex3f(120,20,0);
glVertex3f(70,80,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,0,0);

glVertex3f(140,20,0);
glVertex3f(190,20,0);
glVertex3f(190,60,0);
glVertex3f(140,60,0);
glEnd();


glFlush ();
}


void init (void)
{
/* select clearing (background) color */
glClearColor (255,255, 255, 0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();


glOrtho(0, 200, 0, 200, -10.0, 10.0);
}


int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);


glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("PC-C");
init ();
glutDisplayFunc(display);



glutMainLoop();


return 0;
}


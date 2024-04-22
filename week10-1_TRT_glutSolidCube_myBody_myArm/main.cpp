#include <GL/glut.h>
void myBody()
{
    glColor3f(1,0,0);
    glutWireCube(0.6);
}
void myArm()
{
    glColor3f(0,1,0);
        glScalef(1.5,0.5,0.5);
        glutWireCube(0.3);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        myBody();
    glPopMatrix();

    glPushMatrix();
        myArm();
    glPopMatrix();

    glutSwapBuffers();

}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("WEEK10-1");
    glutDisplayFunc(display);
    glutMainLoop();
}

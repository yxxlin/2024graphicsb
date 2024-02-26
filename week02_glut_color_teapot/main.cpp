#include <GL/glut.h>///ㄏノglut本

void display()
{
    glColor3f(247/255.0, 180/255.0, 171/255.0);
    glutSolidTeapot(0.3);

    glColor3f(251/255.0, 233/255.0, 219/255.0);
    glutSolidTeapot(0.1);

    glutSwapBuffers();
}

int main(int argc, char *argv[])///mainㄧΑ
{
    glutInit(&argc, argv);///﹍て
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");///ミ跌怠
    glutDisplayFunc(display);///砞﹚璶礶瓜displayㄧΑ
    glutMainLoop();///璶癹伴
}

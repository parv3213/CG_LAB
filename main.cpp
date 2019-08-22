
#include <GL/glfw.h>0.2,0.8
int main()
{
    int width=800, height=600;
    float l=0.8, b=0.4;
    glfwInit();
    glfwOpenWindow(width,height, 0, 0, 0, 0, 0, 0,GLFW_WINDOW);
    glfwSetWindowTitle("Generate an Rectangle");
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glScalef(0.5,1.0,1.0);
    while(1)
    {
       glBegin(GL_QUADS);
        glColor3f(1.0f,0.0f,0.0f);
        glVertex2f(l,b);
        glColor3f(0.0f,1.0f,0.0f);
        glVertex2f(-l,b);
        glColor3f(0.0f,0.0f,1.0f);
        glVertex2f(-l,-b);
        glColor3f(1.0f,1.0f,1.0f);
        glVertex2f(l,-b);



       glEnd();


    if(glfwGetKey(GLFW_KEY_ESC)==GLFW_PRESS)
            break;
            glfwSwapBuffers();
    }
    glfwCloseWindow();
    glfwTerminate();
    return 0;
}


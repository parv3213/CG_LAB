
#include <GL/glfw.h>0.2,0.8
#include <stdlib.h>
#include<stdio.h>

void draw_rectangle(float , float );
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
    int count = 0;
    //glTranslatef(0.8,0.5,0.0);
    while(1)
    {
        glClear(GL_COLOR_BUFFER_BIT);
        if (count == 100){
            glRotated(1.0,0.0,0.0,1.0);
            count =0;
        }
        count ++;
        draw_rectangle(l,b);
        if(glfwGetKey(GLFW_KEY_ESC)==GLFW_PRESS)
            break;
        glfwSwapBuffers();
    }
    glfwCloseWindow();
    glfwTerminate();
    return 0;
}
void draw_rectangle(float l, float b){
    glBegin(GL_QUADS);
        glColor3f(1.0f,0.3f,0.0f);
        glVertex2f(l,b);
        glVertex2f(-l,b);
        glVertex2f(-l,-b);
        glVertex2f(l,-b);
        glEnd();
}





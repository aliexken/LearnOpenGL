#pragma once

/*

#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include <iostream>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window);
//窗口的大小
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;


int main(int argc, char* argv[])
{
    //初始化GLFW,如果初始化成功，则返回GLFW_TRUE(1),否则返回GLFW_FALSE(0);
    glfwInit();
    //设置GLFW窗口的选项：glfwWindowHint两个参数，第一个参数是要设置的选项，第二参数是要设置的该选项的值。
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);//设置主版本
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);//设置次版本
    //glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);// 设置OpenGL是核心模式(GLFW_OPENGL_CORE_PROFILE)还是立即渲染模式

    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "GL_Triangle", NULL, NULL);
    if (NULL == window)
    {
        std::cout << "Failed to create glfw window" << std::endl;
        glfwTerminate();
        return -1;
    }
   //
    //void glfwMakeContextCurrent	(	GLFWwindow * 	window	)
   // 此函数使调用线程上指定窗口window的OpenGL或OpenGL ES上下文处于当前状态。一个上下文每次只能在一个线程上成为当前的，而且每个线程每次只能有一个当前上下文。
    //指定的窗口必须具有OpenGL或OpenGL ES上下文。指定没有上下文的窗口将生成GLFW_NO_WINDOW_CONTEXT错误。
    //
    glfwMakeContextCurrent(window);

    //
    GLFWframebuffersizefun glfwSetFramebufferSizeCallback(GLFWwindow * window,GLFWframebuffersizefun cbfun)
    //此函数设置指定窗口的framebuffer resize回调函数，当调整指定窗口的framebuffer的大小调整时调用该函数。
    //
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    //
    GLFWglproc glfwGetProcAddress(const char * procname)
    如果当前上下文支持该函数，则该函数返回指定的OpenGL或OpenGL ES core或extension函数的地址。
    //
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    // render loop
    //int glfwWindowShouldClose(GLFWwindow * window)
    //返回指定的窗口关闭标志
    //
    while (!glfwWindowShouldClose(window))
    {
        processInput(window);

        // Draw a triangle 
        glBegin(GL_TRIANGLES);

        glColor3f(1.0, 0.0, 0.0);    // Red  
        glVertex3f(0.0, 1.0, 0.0);

        glColor3f(0.0, 1.0, 0.0);    // Green  
        glVertex3f(-1.0, -1.0, 0.0);

        glColor3f(0.0, 0.0, 1.0);    // Blue  
        glVertex3f(1.0, -1.0, 0.0);

        glEnd();

        //         glClear(GL_COLOR_BUFFER_BIT);
        //         glColor3f(1.0f, 0.0f, 0.0f);
        //         glRectf(-25.0f, 25.0f, 25.0f, -25.0f);

                //
                //当使用OpenGL或OpenGL ES呈现时，此函数交换指定窗口的前后缓冲区。如果交换间隔大于零，GPU驱动程序将在交换缓冲区之前等待指定的屏幕更新完成。
                //
        glfwSwapBuffers(window);

        // void glfwPollEvents(void)
        //这个函数只处理已经在事件队列中的事件，然后立即返回。处理事件将导致调用与这些事件关联的窗口和输入的回调。
        //
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;


}

void processInput(GLFWwindow* window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width and 
    // height will be significantly larger than specified on retina displays.
    glViewport(0, 0, width, height);
}
*/
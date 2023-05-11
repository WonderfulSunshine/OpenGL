#include <iostream>
#include <glew.h>
#include <glfw3.h>

using namespace std;

int main() {


    if (!glfwInit())
        return -1;
    //create a window mode and its opengl contex

    GLFWwindow *pianpianshaonian = glfwCreateWindow(640, 480, "hello world", NULL, NULL);

    // init windows
    if (!pianpianshaonian) {
        glfwTerminate();
        return -1;
    }

    // mak the window context current

    glfwMakeContextCurrent(pianpianshaonian);




    //loop until the user closes the windows

    if (!glfwWindowShouldClose(pianpianshaonian)) {

        //render here
        glClear(GL_COLOR_BUFFER_BIT);
        //swap front and back buffers
        glfwSwapBuffers(pianpianshaonian);

        //poll for and event
        glfwPollEvents();

    }
    glfwTerminate();

    return 0;
}
#include <iostream>
#include "glew.h"
#include "GLFW/glfw3.h"

#include "View.h"
#include "Model.h"
#include "Input.h"

static Input* pi = NULL;

static void error_callback(int error, const char* description)
{
	std::cerr << "GLFW Error: " << description;
}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);
	if (action == GLFW_PRESS)
		pi->key_callback(key);
	if (action == GLFW_REPEAT)
		pi->key_callback(key);
}

int main(int argc, char** argv)
{
	GLFWwindow* window;

	glfwSetErrorCallback(error_callback);
	if (!glfwInit())
		exit(EXIT_FAILURE);
	window = glfwCreateWindow(640, 480, "Simple example", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	GLenum res = glewInit();
	if (res != GLEW_OK) {
		std::cerr << "GLEW Error: " << glewGetErrorString(res);
		return 1;
	}

	Model m;
	View v(window, &m);
	Input i(&m);
	pi = &i;

	glfwSetKeyCallback(window, key_callback);

	// main loop

	while (!glfwWindowShouldClose(window))
	{
		v.show();
	}

	// cleanup

	glfwDestroyWindow(window);
	glfwTerminate();
	exit(EXIT_SUCCESS);
}

#pragma once

#include <GLFW/glfw3.h>
#include "Model.h"

class View
{
public:
	View(GLFWwindow* window, Model* model);
	~View();
	void show(int state);
private:
	GLFWwindow* window;
	Model* model;
};

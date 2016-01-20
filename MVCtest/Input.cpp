#include "Input.h"

Input::Input(Model* model):
	model(model)
{
}

Input::~Input()
{
}

void Input::key_callback(int key)
{
	if (key == GLFW_KEY_W) model->move(0, +0.1);
	if (key == GLFW_KEY_S) model->move(0, -0.1);
	if (key == GLFW_KEY_A) model->move(-0.1, 0);
	if (key == GLFW_KEY_D) model->move(+0.1, 0);
}
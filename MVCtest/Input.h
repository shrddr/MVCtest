#pragma once

#include <GLFW/glfw3.h>
#include "Model.h"

class Input
{
public:
	Input(Model* model);
	~Input();
	void key_callback(int key);
private:
	Model* model;
};


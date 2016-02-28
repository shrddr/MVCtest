#define GLEW_STATIC

#include "glew.h"
#include "glm/vec3.hpp"
#include "View.h"
#include "Mesh.h"

static GLuint VBO;

View::View(GLFWwindow* window, Model* model):
	window(window),
	model(model)
{
	glm::vec3 Vertices[3];
	Vertices[0] = glm::vec3(-0.06f, -0.04f, 0.0f);
	Vertices[1] = glm::vec3(0.06f, -0.04f, 0.0f);
	Vertices[2] = glm::vec3(0.0f, 0.06f, 0.0f);

	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(Vertices), Vertices, GL_STATIC_DRAW);
}

View::~View()
{
	
}

void View::show()
{
	float ratio;
	int width, height;
	glfwGetFramebufferSize(window, &width, &height);
	ratio = width / (float)height;
	glViewport(0, 0, width, height);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-ratio, ratio, -1.f, 1.f, 1.f, -1.f);
	
	static Mesh m(VBO);
	m.draw(0.2f, 0.1f);
	m.draw(0.4f, 0.1f);
	m.draw(0.6f, 0.1f);
	m.draw(0.8f, 0.1f);
	m.draw(model->getx(), model->gety());

	glfwSwapBuffers(window);
	glfwPollEvents();
}
#include "glew.h"
#include "GLFW/glfw3.h"
#include "Mesh.h"



Mesh::Mesh(GLuint& VBO):VBO(VBO)
{
}

Mesh::~Mesh()
{
}

void Mesh::draw(float x, float y)
{
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(x, y, 0.f);
	glRotatef((float)glfwGetTime() * 50.f, 0.f, 0.f, 1.f);


	glEnableVertexAttribArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);

	glDrawArrays(GL_TRIANGLES, 0, 3);

	glDisableVertexAttribArray(0);
}

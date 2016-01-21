#pragma once

class Mesh
{
public:
	Mesh(GLuint& VBO);
	~Mesh();
	void draw(float x, float y);
private:
	GLuint& VBO;
};


#include "View.h"
#include "Model.h"

Model::Model():
	x(0),
	y(0)
{
	
}

Model::~Model()
{

}

void Model::move(float dx, float dy)
{
	x += dx;
	y += dy;
}

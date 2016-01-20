#pragma once

class Model
{
public:
	Model();
	~Model();
	void move(float dx, float dy);
	float getx() { return x; }
	float gety() { return y; }
private:
	float x;
	float y;
};


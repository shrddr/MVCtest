all:
	g++ -I include -include stdlib.h MVCtest/Input.cpp MVCtest/Model.cpp MVCtest/View.cpp MVCtest/Mesh.cpp MVCtest/Main.cpp `pkg-config --static --libs glew` `pkg-config --static --libs glfw3`

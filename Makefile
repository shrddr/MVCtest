all:
	g++ -I include -include stdlib.h MVCtest/Input.cpp MVCtest/Model.cpp MVCtest/View.cpp MVCtest/Main.cpp `pkg-config --static --libs glfw3`
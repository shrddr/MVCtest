OS := $(shell uname)
ifeq ($(OS), Darwin)
MACOS_SPECIFIC = -framework OpenGL
else
MACOS_SPECIFIC = 
endif

all:
	g++ -I include -include stdlib.h MVCtest/Input.cpp MVCtest/Model.cpp MVCtest/View.cpp MVCtest/Mesh.cpp MVCtest/Main.cpp `pkg-config --static --libs glew` `pkg-config --static --libs glfw3` $(MACOS_SPECIFIC)
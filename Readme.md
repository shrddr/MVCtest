### MSVS2015 Community:
build as is, use x86 platform
(glfw3.lib and glew.lib included)

### previous MSVS versions:
download glfw3.lib for your specific version
glew.lib is not version-dependent

### Ubuntu 15.10:

#### glew
* `sudo apt-get install libglew-dev`

#### glfw3
* `sudo apt-get install cmake xorg-dev libgl1-mesa-dev`
* `git clone https://github.com/glfw/glfw.git`
* `cd glfw`
* `cmake .`
* `make`
* `sudo make install`
* `cd .. && rm -rf glfw`

#### and finally
* `cd MVCtest`
* `make`

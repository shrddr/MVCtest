### MSVS2015 Community:
build as is (glfw and glew binaries included)

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
* `cd .. && rm -rf glfw` (cleanup)

#### and finally
* `cd MVCtest`
* `make`

### Mac OS 10.8:

#### glew
* `git clone https://github.com/nigels-com/glew.git`
* `cd glew`
* `cd auto`
* `make`
* `cd ..`
* `make glew.lib`
* `sudo make GLEW_NO_GLU="-DGLEW_NO_GLU" install`
* `cd .. && rm -rf glew` (cleanup)

#### glfw3
* Install xcode (app store) 
* Install cmake (cmake.org), run, go to tools menu - how to install for command line use, follow directions, close cmake.
* `git clone https://github.com/glfw/glfw.git`
* `cd glfw`
* `cmake .`
* `make`
* `sudo make install`
* `cd .. && rm -rf glfw` (cleanup)

#### and finally
* `cd MVCtest`
* `make`
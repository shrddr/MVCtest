=== MSVS2015 Community: ===
build as is, use x86 platform
(glfw3.lib and glew.lib included)

=== previous MSVS versions: ===
download glfw3.lib for your specific version
glew.lib is not version-dependent

=== Ubuntu 14.04: ===

* download glfw3 source code
* `cd glfw-3.1.2`
* `sudo apt-get install cmake xorg-dev libgl1-mesa-dev`
* `cmake .`
* `make`
* `sudo make install`

* download glew source code (don't git clone, use tarball from sourceforge)
* go to glew/config/Makefile.linux and change to ARCH64=false at line 7
* `make`
* `sudo make GLEW_DEST=/usr/local install`

and finally
* `cd ../MVCtest`
* `make`

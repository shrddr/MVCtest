=== MSVS2015 Community: ===
build as is, use x86 platform
(glfw3.lib and glew.lib included)

=== previous MSVS versions: ===
download glfw3.lib for your specific version
glew.lib is not version-dependent

=== Ubuntu 14.04: ===

* download glfw3 source code
* `cd glfw-3.1.2`
* `cmake .`
* `make`
* `cp src/libglfw3.a usr/local/lib`
* `cp src/glfw3.pc usr/lib/pkgconfig`
* `cd ../MVCtest`
* `make`

* download glew source code (don't dit clone, use tarball form sourceforge)
* go to config/Makefile.linux and change to ARCH64=false at line 7
* `make`
* `sudo make GLEW_DEST=/usr/local install`

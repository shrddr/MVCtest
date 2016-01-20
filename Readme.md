MSVS2015 Community:
build as is, use x86 platform
(glfw3.lib included)

previous MSVS versions:
download glfw3.lib for your specific version

Ubuntu 14.04:
`download glfw source code`
`cd glfw-3.1.2`
`cmake .`
`make`
`cp src/libglfw3.a usr/local/lib`
`cp src/glfw3.pc usr/lib/pkgconfig`
`cd ../MVCtest`
`make`

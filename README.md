This is a template for making projects using Raylib directly as a submodule using CMake. It's intended to use with C99, but it will work with C++ too. It also has a CMakeSettings.json, which is for Visual Studio.

Configure & Build: `mkdir build && cd build && cmake .. && make -j33`

Note that building directly with Visual Studio 2022's CMake project thingy will cause it to use the wrong startup project, make sure you change it to rr.exe (or whatever you renamed the target to), and make sure to use the install version :3

ALSO note that this always uses the latest main branch of raylib. If any of the APIs used in main.c change, it will break obviously. But honestly, I wouldn't expect that.
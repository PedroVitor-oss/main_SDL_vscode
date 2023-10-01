I included the sdl_image.h in the SDL folder inside the include directory. 
I'm not using CMake, so I use this command to compile:
g++ -I src/include -L src/lib -o main main.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image 






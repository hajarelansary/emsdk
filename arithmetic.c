#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
int square(int n) { 
   return n*n; 
}


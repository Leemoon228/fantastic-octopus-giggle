#include <stdio.h>
#include <windows.h>
#include <string.h>
#include "libArrayMatrix.h"
#include "loadLib.h"

void LoadRun (const char *const s, int x, int y)
{
    void *lib;
    void (*libArrayMatrix) (int, int);
    lib = LoadLibrary (s);
    if (!lib) {
      printf ("cannot open library '%s'\n", s);
      return;
    }
    if (strcmp(s, "arrayLib.dll") == 0)
        libArrayMatrix = (void (*)(int, int)) GetProcAddress ((HINSTANCE) lib, "countElementInRangeForArray");
    else
        libArrayMatrix = (void (*)(int, int)) GetProcAddress ((HINSTANCE) lib, "countElementInRangeForMatrix");
    if (libArrayMatrix == NULL) {
      printf ("cannot load function func\n");
    } else {
      libArrayMatrix(x, y);
    }
    FreeLibrary ((HINSTANCE) lib);
}

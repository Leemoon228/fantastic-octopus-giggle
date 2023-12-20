#include "loadLib.h"
#include <stdio.h>

int main ()
{
    int a = 0, b = 1, mode = 0;
    int x = -10, y = 10;
    printf ("Choose library:\n1-array\n2-matrix\n3-quit\n");
    while (b) {
        scanf ("%d", &a);
        if (a == 1) {
	        LoadRun ("arrayLib.dll", x, y);
	        mode = 1;
            b = 0;
	    }
        if (a == 2) {
	        LoadRun ("matrixLib.dll", x, y);
	        mode = 2;
            b = 0;
        }
        if (a == 3)
	        b = 0;
    }

    return 0;
}

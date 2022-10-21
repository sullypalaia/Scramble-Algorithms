#include "makeres.h"
#include "algors.h"

void a0(int len, char *arg, char *res, int f)
{
    //algor 0(moves each character f spaces right)
    for (int i = 0, n = len - f; i < len; i++)
    {
        if (i - f < 0)
        {
            makeres(arg[n], &res[i]);
            n += 1;
        }

        else
        {
            makeres(arg[i - f], &res[i]);
        }
    }
}

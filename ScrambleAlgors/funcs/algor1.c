#include "makeres.h"
#include "algors.h"

void a1(int len, char *arg, char *res, int f)
{
    //algor 1(moves each character f spaces left)
    for (int i = 0, n = 0; i < len; i++)
    {
        if (i + f >= len)
        {
            makeres(arg[n], &res[i]);
            n += 1;
        }

        else
        {
            makeres(arg[i + f], &res[i]);
        }
    }
}

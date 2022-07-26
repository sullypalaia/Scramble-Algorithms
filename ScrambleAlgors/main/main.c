#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "/Users/sullypalaia/Downloads/Programs/ScrambleAlgors/funcs/makeres.h"
#include "/Users/sullypalaia/Downloads/Programs/ScrambleAlgors/funcs/algors.h"

void error();

int main(int argc, char **argv)
{
    srand(time(NULL));

    if (argc != 3 && strcmp(argv[1], "help") != 0)
    {
        error();
        return 1;
    }

    else
    {
        if (strcmp(argv[1], "help") == 0)
        {
            if (argc == 2)
            {
                printf("\nFirst Parameter:\n");
                printf("-a0 (will prompt you with a factor, which decides how many columns you want each character to move right)\n");
                printf("-a1 (will prompt you with a factor, which decides how many columns you want each character to move left)\n");
                printf("\nSecond Parameter:\n");
                printf("enter the desired word you want to modify\n");
                printf("\nEX: './main a0 test' with a factor of 1 will return 'ttes'\n\n");
            }

            else
            {
                error();
                return 1;
            }
        }

        else if (strcmp(argv[1], "a0") == 0|| strcmp(argv[1], "a1") == 0)
        {
            int argLen = strlen(argv[2]);
            char *result = malloc(argLen + 1);

            int factor;
            printf("factor: ");
            scanf("%i", &factor);

            if (factor > argLen)
            {
                free(result);
                error();
                return 1;
            }
            
            else
            {
                if (strcmp(argv[1], "a0") == 0)
                {
                    a0(argLen, argv[2], result, factor);
                }

                else if (strcmp(argv[1], "a1") == 0)
                {
                    a1(argLen, argv[2], result, factor);
                }

                else
                {
                    free(result);
                    error();
                    return 1;
                }
            }

            printf("\nresult: %s\n\n", result);
            free(result);
        }

        else
        {
            error();
            return 1;
        }
    }

    return 0;
}

void error()
{
    printf("error");
}

#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    if(argc != 2)
    {
        // fprintf(stderr, "Usage: sleep ticks...\n");
        printf(1, "Usage: sleep [ticks]\n");
        exit();
    }
    sleep(atoi(argv[1]));
    exit();
}

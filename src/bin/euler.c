#include <stdio.h>
#include <stdlib.h>

static void usage() {
    fprintf(stdout, "euler [all|<problem_number>]");
    exit(1);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        usage();
    }

    exit(0);
}

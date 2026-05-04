#include "types.h"
#include "stat.h"
#include "user.h"
#include "syscall.h"

int
main(void)
{
    // Trace fork and write - tracing multiple @ once
    trace((1 << SYS_fork) | (1 << SYS_write));

    int pid = fork();

    if(pid == 0){
        // child process
        write(1, "child running\n", 14);
        exit();
    } else {
        // parent process
        wait();
        write(1, "parent done\n", 12);
    }

    exit();
}
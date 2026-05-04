#include "types.h"
#include "stat.h"
#include "user.h"
#include "syscall.h"

int
main(void)
{
    // Trace fork and write - tracing multiple @ once
    trace((1 << SYS_fork) | (1 << SYS_write) | (1 << SYS_pipe) | (1 << SYS_read) | (1 << SYS_close));
    
    int p[2];
    char buffer[12];
    pipe(p);

    int pid = fork();

    if(pid == 0){
        // child process
        close(p[1]);
        read(p[0], buf, 12);
        
        write(1, buf, 12);   //printing received data
        
        close(p[0]);
        exit();
    } else {
        // parent process
        close(p[0]);
        write(p[1], "Hello World", 12);    //sending data
        close(p[1]);
        wait(0);
    }

    exit();
}

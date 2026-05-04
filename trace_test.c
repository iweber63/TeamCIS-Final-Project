#include "types.h"
#include "stat.h"
#include "user.h"
#include "syscall.h"

int
main(void)
{
    // Enable tracing for write syscall
    trace(1 << SYS_write);

    // This should trigger a traced syscall
    write(1, "hello world\n", 12);

	// Test another syscall - trace getpid
	trace(1 << SYS_getpid);
	int pid = getpid();
	printf(1, "This process pid is %d\n", pid); // This write opteration is no longer traced
	
    exit();
}
#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
    // Enable tracing for write syscall
    trace(1 << SYS_write);

    // This should trigger a traced syscall
    write(1, "hello world\n", 12);

    exit();
}
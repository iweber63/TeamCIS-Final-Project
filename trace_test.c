#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
  trace(1 << SYS_write);

  write(1, "hello\n", 6);

  exit();
}

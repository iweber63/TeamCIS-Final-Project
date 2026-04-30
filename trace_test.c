#include "types.h"
#include "stat.h"
#include "user.h"

int main() {
  trace(0);

  write(1, "hello\n", 6);

  exit();
}

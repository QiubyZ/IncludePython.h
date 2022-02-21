# IncludePython.h

Compiler Settings
```
gcc -std=c99 -ggdb3 -O0 -pedantic-errors -Wall -Wextra \
  -fpie $(python3-config --cflags --embed) -o 'test.out' \
  'test.c' $(python3-config --embed --ldflags)
```

#pragma once

#define true 1
#define false 0

typedef _Bool b8;

typedef struct {
  b8 version;
  b8 help;
  b8 verbose;
} Args;

Args parse_args(int argc, char **argv);

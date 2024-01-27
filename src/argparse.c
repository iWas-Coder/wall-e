#include <string.h>
#include <argparse.h>

static b8 argcmp(const char *s1, const char *s2) {
  return strcmp(s1, s2) == 0;
}

Args parse_args(int argc, char **argv) {
  Args args = {false};
  
  for (int i = 1; i < argc; ++i) {
    if (argcmp(argv[i], "--version")) args.version = true;
    if (argcmp(argv[i], "--help"))    args.help = true;
    if (argcmp(argv[i], "--verbose")) args.verbose = true;
  }

  return args;
}

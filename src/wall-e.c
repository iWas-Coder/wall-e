#include <stdio.h>
#include <argparse.h>

int main(int argc, char **argv) {
  Args args = parse_args(argc, argv);

  if (args.version) {
    printf("GNU wall-e 0.1\n");
    return 0;
  }

  if (args.help) {
    printf("Usage: wall-e [OPTION]... [FILE]...\n");
    return 0;
  }

  if (args.verbose) {
    printf("# args: %d\n", argc);
    for (int i = 1; i < argc; ++i) {
      printf("argv[%d]: '%s'\n", i, argv[i]);
    }
  } 

  return 0;
}

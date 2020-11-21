#include "icalit.h"

int main
(int argc, char **argv)
{
  int argcr = argc;

  if(argc > 1) {
    char *option, *value;

    for(int i = 1; i < argc; i += 2) {
      option = argv[i];
      --argcr;

      if(argcr > 1) {
        value = argv[i + 1];
        --argcr;
      }

      printf("Option: %s\n", option);
      printf("Value: %s\n", value);

      option = NULL;
      value  = NULL;
    }
  }

  return 0;
}

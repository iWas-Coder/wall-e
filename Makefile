.PHONY: clean

wall-e: src/wall-e.c src/argparse.c
	gcc -I include -Wall -Wextra -pedantic -Werror -fanalyzer $^ -o $@

clean:
	@if [ -e wall-e ]; then \
	  rm wall-e;            \
	fi

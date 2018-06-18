MAKE=make

DIRS=ch01 ch03 ch04 ch05 ch06 ch07 ch08 ch09 ch10 ch11

all:
	for dir in $(DIRS); do \
	  (cd $$dir && echo "making $$dir" && $(MAKE)) || exit 1; \
	done

clean:
	for dir in $(DIRS); do \
	  (cd $$dir && echo "cleaning $$dir" && $(MAKE) clean) || exit 1; \
	done

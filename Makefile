.PHONY: all clean

all: boot

shell:
	$(MAKE) -C src/shell

gui-test: 
	$(MAKE) -C src/gui-test

GCC := gcc

CFILES := $(shell find ./ -type f -name '*.c')
VM := ./bin/tfrp-vm
BIN := $(CFILES:.c=.o)

all: $(VM)

$(VM): $(BIN)
	$(GCC) -o $@ $+

%.o: %.c
	$(GCC) -c -o $@ $<

clean:
	rm -f $(BIN) $(VM)

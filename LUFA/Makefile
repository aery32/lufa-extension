# Usage
# $(MAKE) MPART=$(MPART) SETTINGS="$(SETTINGS)"

ARCH=UC3
CSTANDARD=gnu99
COPT=-O2 -fdata-sections -ffunction-sections

# Path to the LUFA library
LUFA_PATH=LUFA

# Resolve source LUFA files
include $(LUFA_PATH)/Build/lufa_sources.mk
SOURCES=$(LUFA_SRC_USB) $(LUFA_SRC_USBCLASS) $(LUFA_SRC_PLATFORM)

# Resolve object files from source files
OBJECTS = $(SOURCES:.c=.o)
OBJECTS := $(OBJECTS:.S=.o)

CC=avr32-gcc
CFLAGS=-mpart=$(MPART) -x c $(COPT) -std=$(CSTANDARD) \
       -Wstrict-prototypes -masm-addr-pseudos \
       -Wall -fno-strict-aliasing -funsigned-char \
       -funsigned-bitfields
CFLAGS+=-include "$(SETTINGS)"
ASFLAGS=-mpart=$(MPART)

liblufa.a: $(OBJECTS)
	avr32-ar rv $@ $^
	avr32-ranlib $@

%.o: %.c
	$(CC) $(CFLAGS) -MMD -MP -MF $(@:%.o=%.d) $< -c -o $@

%.o: %.S
	$(CC) $(ASFLAGS) -MMD -MP -MF $(@:%.o=%.d) $< -c -o $@

clean:
	rm -f $(OBJECTS) liblufa.a
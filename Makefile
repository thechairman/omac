COMPONENT=OMACAppC
#CFLAGS += -DLOW_POWER_LISTENING
CFLAGS+=-DLPL_ENABLE
BUILD_EXTRA_DEPS = InitMsg.py
CFLAGS +=-DCC1K_DEF_PRESET=1
InitMsg.py: InitMessage.h
	mig python -target=$(PLATFORM) $(CFLAGS) -python-classname=InitMsg InitMessage.h init_msg -o $@

include $(MAKERULES)

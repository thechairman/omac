COMPONENT=OMACAppC
#CFLAGS += -DLOW_POWER_LISTENING

BUILD_EXTRA_DEPS = InitMsg.py

InitMsg.py: InitMessage.h
	mig python -traget=$(PLATFORM) $(CFLAGS) -python-classname=InitMsg InitMessage.h init_msg -o $@

include $(MAKERULES)

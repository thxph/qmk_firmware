SRC += thxph.c

ifeq ($(strip $(TAP_DANCE_ENABLE)), yes)
    SRC += tap_dances_helpers.c
endif

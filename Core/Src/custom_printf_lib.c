#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include "stdarg.h"
#include "custom_printf_lib.h"

void (*Callback_Ptintf)(const uint8_t *,  uint16_t, uint32_t);

void Custom_Printf(const char *charptr, ...){
  char buf[100] = {[0 ...99] = '\0'};
  uint8_t len = 0;
  va_list args;
  va_start(args, charptr);
  vsnprintf(buf, sizeof(buf), charptr, args);
  va_end(args);
  len = strlen(buf);
  Callback_Ptintf((uint8_t *)buf, len, 100);
}
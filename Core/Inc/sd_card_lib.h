#ifndef _SD_CARD_LIB_
#define _SD_CARD_LIB_

#include "fatfs.h"

typedef enum{
    READ_OK,
    WRITE_OK,
    READ_ERROR,
    WRITE_ERROR
}SD_RESULT;

SD_RESULT ReadSDCard (void);


#endif
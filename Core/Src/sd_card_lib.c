#include "sd_card_lib.h"
#include "custom_printf_lib.h"

FATFS FatFs; 	//Fatfs handle
FIL fil; 		//File handle
FRESULT fres;


void WriteSDCard (void){

    Custom_Printf("\n\nWriting to SD card\n\n\n\n\n");

    fres = f_mount(&FatFs, "", 1);
    if (fres != FR_OK){
          Custom_Printf("\n\nError mounting disk!!! %d\n\n\n\n\n", fres);
          while(1){}
    }


}


  
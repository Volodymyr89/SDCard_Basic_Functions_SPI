#include "sd_card_lib.h"
#include "custom_printf_lib.h"

FATFS FatFs; 	//Fatfs handle
FIL fil; 		//File handle
FRESULT fres;
SD_RESULT sdresult;


SD_RESULT ReadSDCard (void){
    char readbuf [100] = {[0 ... 99] = '\0'};
    fres = FR_INVALID_PARAMETER;
    TCHAR* res = 0;
    Custom_Printf("\n\nReading SD card\n\n\n\n\n");
      fres = f_mount(&FatFs, "", 1);
      if(fres == FR_OK){
        fres = f_open(&fil, "test.txt", FA_READ);
      }
      if(fres == FR_OK){
         res = f_gets((TCHAR*)readbuf, 100, &fil);
      }
      if(res != 0){
         Custom_Printf("\n\nReading SD card done\n\n\n\n\n");
         sdresult = READ_OK;
      }
      else{
        Custom_Printf("\n\nError reading disk!!! %d\n\n\n\n\n", fres);
         sdresult = READ_ERROR;
      }
      f_close(&fil);

      return sdresult;
}

SD_RESULT WriteSDCard (void){



      return sdresult;
}


  
#include "Application.h"
#include "C:\Users\ayaser\workspace_v10\Testato\mCAL\UART.h"
#include "C:\Users\ayaser\workspace_v10\Testato\mCAL\Timer.h"
#include "C:\Users\ayaser\workspace_v10\Testato\mCAL\SPI.h"
#include "C:\Users\ayaser\workspace_v10\Testato\HAL\LED_Control.h"
 

void application()
{
    UART_transmit();
    SPI_slave();
    SW_ini();
    while(1)
    {
        UART_TX();
        SPI_RX();
    }

}

#include "diag/trace.h"
#include "FreeRTOS.h"
#include "task.h"

static TaskHandle_t main_thread_handle;
static int seconds = 0;

/**********************************************************************
 **********************************************************************/
void vApplicationStackOverflowHook(TaskHandle_t xTask, char *pcTaskName)
{
	trace_printf("xTask = %x, pcTaskName = (%s)\n", xTask, pcTaskName);

	while (1)
	{
		;
	}
}

/**********************************************************************
 **********************************************************************/
static void main_thread(void* args)
{
	trace_printf("main_thread - enter, args = %p\n", args);

	while (1)
	{
		vTaskDelay(pdMS_TO_TICKS(1000));

		++seconds;
		trace_printf("main_thread - seconds = %d\n", seconds);
	}
}

int main(void)
{
    xTaskCreate(main_thread, "MAIN THREAD", 2048, 0, 0, &main_thread_handle);

    vTaskStartScheduler();

    /* should never reach here */
    while (1)
    {
        ;
    }

    return 0;
}

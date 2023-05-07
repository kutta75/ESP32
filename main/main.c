#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void app_main(void)
{
	bool vrai=true;
    while (vrai) {
        printf("bonjour depuis app_main!\n");
        sleep(2);
    }
}

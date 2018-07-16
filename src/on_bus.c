#include "on_core.h"

#include "on_bus.h"
//init
int onc_bus_init(char *init_json)
{
    return onc_core_init(init_json);
}

void onc_bus_final(void)
{
    onc_core_final();
}

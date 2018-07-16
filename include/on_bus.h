#ifndef __ONC_BUS____H__
#define __ONC_BUS____H__

#ifdef __cplusplus
extern "C" {
#endif

int     onc_bus_init(char *init_json);
void    onc_bus_final(void);

#ifdef __cplusplus
}
#endif

#endif

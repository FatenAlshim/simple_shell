#include "shell.h"

/**
 * clear_info - initialie info_t structure
 * @info: structure address
 */
void clear_info(info_t *info)
{
info->arg = NULL;
info->argv = NULL;
info->path = NULL;
info->argc = 0;
}

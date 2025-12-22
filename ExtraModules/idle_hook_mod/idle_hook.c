#include <zephyr/kernel.h>

/*
 * Return false  -> skip WFI/WFE
 * Return true   -> normal idle (WFI/WFE)
 */
bool z_arm_on_enter_cpu_idle(void)
{
#if defined(CONFIG_DISABLE_WFI_WHILE_DEBUG)
        return false;   /* debugger attached: do NOT sleep */
#endif
    return true;        /* normal behavior */
}

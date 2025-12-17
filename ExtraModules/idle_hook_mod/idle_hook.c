#include <zephyr/kernel.h>
#include <cmsis_core.h>

/*
 * Return false  -> skip WFI/WFE
 * Return true   -> normal idle (WFI/WFE)
 */
bool z_arm_on_enter_cpu_idle(void)
{
#if defined(CONFIG_DISABLE_WFI_WHILE_DEBUG)
    if (CoreDebug->DHCSR & CoreDebug_DHCSR_C_DEBUGEN_Msk) {
        return false;   /* debugger attached: do NOT sleep */
    }
#endif

    return true;        /* normal behavior */
}

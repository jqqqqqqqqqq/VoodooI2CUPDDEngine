//
//  VoodooI2CUPDDEngine.c
//  VoodooI2CUPDDEngine
//
//  Created by blankmac on 11/3/17.
//  Copyright © 2017 blankmac. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t VoodooI2CUPDDEngine_start(kmod_info_t * ki, void *d);
kern_return_t VoodooI2CUPDDEngine_stop(kmod_info_t *ki, void *d);

kern_return_t VoodooI2CUPDDEngine_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t VoodooI2CUPDDEngine_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}

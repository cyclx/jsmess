/* ASG 971222 -- rewrote this interface */
#pragma once

#ifndef __I86INTF_H__
#define __I86INTF_H__

#include "cpuintrf.h"

enum
{
	I8086_PC=0,
	I8086_IP,
	I8086_AX,
	I8086_CX,
	I8086_DX,
	I8086_BX,
	I8086_SP,
	I8086_BP,
	I8086_SI,
	I8086_DI,
	I8086_FLAGS,
	I8086_ES,
	I8086_CS,
	I8086_SS,
	I8086_DS,
	I8086_VECTOR
};

/* Public functions */
CPU_GET_INFO( i8086 );
#define CPU_I8086 CPU_GET_INFO_NAME( i8086 )

#endif /* __I86INTF_H__ */

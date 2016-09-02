/*
 * Copyright (c) 2000 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */
/*
 * @OSF_COPYRIGHT@
 * 
 */
/*
 * HISTORY
 * 
 * Revision 1.1.1.1  1998/09/22 21:05:51  wsanchez
 * Import of Mac OS X kernel (~semeria)
 *
 * Revision 1.1.1.1  1998/03/07 02:25:36  wsanchez
 * Import of OSF Mach kernel (~mburg)
 *
 * Revision 1.1.2.1  1996/12/09  16:59:05  stephen
 * 	nmklinux_1.0b3_shared into pmk1.1
 * 	[1996/12/09  11:18:55  stephen]
 *
 * Revision 1.1.2.1  1996/09/17  16:56:35  bruel
 * 	created from standalone mach servers
 * 	[1996/09/17  16:16:17  bruel]
 * 
 * $EndLog$
 */

#ifndef	_MACH_MACHINE_TYPES_H_
#define _MACH_MACHINE_TYPES_H_ 1

typedef long		dev_t;		/* device number (major+minor) */

typedef signed char	bit8_t;		/* signed 8-bit quantity */
typedef unsigned char	u_bit8_t;	/* unsigned 8-bit quantity */

typedef short		bit16_t;	/* signed 16-bit quantity */
typedef unsigned short	u_bit16_t;	/* unsigned 16-bit quantity */

typedef int		bit32_t;	/* signed 32-bit quantity */
typedef unsigned int	u_bit32_t;	/* unsigned 32-bit quantity */

/* Only 32 bits of the "bit64_t" are significant on this 32-bit machine */
typedef struct { int __val[2]; } bit64_t;	/* signed 64-bit quantity */
typedef struct { unsigned int __val[2]; } u_bit64_t;/* unsigned 64-bit quantity */
#define	_SIG64_BITS	__val[1]	/* bits of interest (32) */

#endif /*  _MACH_MACHINE_TYPES_H_ */

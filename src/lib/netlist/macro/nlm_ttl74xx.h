// license:GPL-2.0+
// copyright-holders:Couriersud
#ifndef NLD_TTL74XX_H_
#define NLD_TTL74XX_H_

#include "nl_setup.h"

#ifndef __PLIB_PREPROCESSOR__

/* ----------------------------------------------------------------------------
 *  Netlist Macros
 * ---------------------------------------------------------------------------*/

#define TTL_7400_GATE(_name)                                                   \
		NET_REGISTER_DEV(TTL_7400_GATE, _name)

#define TTL_7400_NAND(_name, _A, _B)                                           \
		NET_REGISTER_DEV(TTL_7400_NAND, _name)                         		   \
		NET_CONNECT(_name, A, _A)                                      		   \
		NET_CONNECT(_name, B, _B)

#define TTL_7400_DIP(_name)                                                    \
		NET_REGISTER_DEV(TTL_7400_DIP, _name)


#define TTL_7402_GATE(_name)                                                   \
		NET_REGISTER_DEV(TTL_7402_GATE, _name)

#define TTL_7402_NOR(_name, _I1, _I2)                                          \
		NET_REGISTER_DEV(TTL_7402_NOR, _name)                                  \
		NET_CONNECT(_name, A, _I1)                                             \
		NET_CONNECT(_name, B, _I2)

#define TTL_7402_DIP(_name)                                                    \
		NET_REGISTER_DEV(TTL_7402_DIP, _name)


#define TTL_7404_GATE(_name)                                                   \
		NET_REGISTER_DEV(TTL_7404_GATE, _name)

#define TTL_7404_INVERT(_name, _A)                                             \
		NET_REGISTER_DEV(TTL_7404_INVERT, _name)                               \
		NET_CONNECT(_name, A, _A)

#define TTL_7404_DIP(_name)                                                    \
		NET_REGISTER_DEV(TTL_7404_DIP, _name)


#define TTL_7408_GATE(_name)                                                   \
		NET_REGISTER_DEV(TTL_7408_GATE, _name)

#define TTL_7408_NAND(_name, _A, _B)                                           \
		NET_REGISTER_DEV(TTL_7408_NAND, _name)                         		   \
		NET_CONNECT(_name, A, _A)                                      		   \
		NET_CONNECT(_name, B, _B)

#define TTL_7408_DIP(_name)                                                    \
		NET_REGISTER_DEV(TTL_7408_DIP, _name)


#define TTL_7416_GATE(_name)                                                   \
		NET_REGISTER_DEV(TTL_7416_GATE, _name)

#define TTL_7416_DIP(_name)                                                    \
		NET_REGISTER_DEV(TTL7416_DIP, _name)

/* ----------------------------------------------------------------------------
 *  External declarations
 * ---------------------------------------------------------------------------*/

NETLIST_EXTERNAL(TTL74XX_lib)

#endif

#endif

#ifndef _NIN_H
#define _NIN_H

#define NIN_DBG_PREFIX()                        "nin_dbg(%s@%d):: "
#define NIN_DBG_PREFIX_ARGS()                   __func__, __LINE__

#define NIN_DBG(msg, ...) printf(NIN_DBG_PREFIX() "" msg, NIN_DBG_PREFIX_ARGS(), __VA_ARGS__);

#endif

#include "types.h"

// address: 0x4B7934
//
// error_buf is a temporary buffer for formatted error messages.
char error_buf[256];

// address: 0x4B7A34
//
// terminating specifies whether the game is terminating after a fatal
// application error.
bool32_t terminating;

// address: 0x4B7A38
//
// cleanup_thread_id stores the thread id of the last callee to appfat_cleanup.
int32_t cleanup_thread_id;

// address: 0x4B7A3C
//
// empty_string is a NULL-terminated empty string.
char *empty_string;

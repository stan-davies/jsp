#ifndef JSP_SIO_H
#define JSP_SIO_H

#include <stdlib.h>     // All this for `size_t` ¬_¬

#define JSP_SS_NULLC    0
#define JSP_SS_FINE     0
#define JSP_SS_NOREAD  -1
#define JSP_SS_BADREAD -2

struct jsp_safestr {
        const char     *base    ;       // Null terminated.
        char           *man     ;
        const size_t    len     ;       // Allocated bytes.
};

/*
 *   INPUT  : Pointer to safe string structure to read from.
 *   OUTPUT : Character read, or `JSP_BAD_READ` on error.
 *
 *   DESC.  : Attempts to read out another character from the given string. On
 *            success, increments manipulateable pointer.
 */
char jsp_readchar(
        struct jsp_safestr     *str
);

/*
 *   INPUT  : Pointer to safe string structure to write to.
 *   OUTPUT : Success/failure.
 *
 *   DESC.  : Attempts to write character to string.
 */
int jsp_writechar(
        struct jsp_safestr     *str     ,
        char                    c
);

#endif

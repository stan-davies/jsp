#ifndef JSP_SREAD_H
#define JSP_SREAD_H

#define JSP_BAD_READ

struct jsp_safestr {
        const char      *base   ;
        char            *man    ;
        size_t           len    ;
};

/*
 *   INPUT  : Pointer to safe string structure to read from.
 *   OUTPUT : Character read, or `JSP_BAD_READ` on error.
 *
 *   DESC.  : Attempts to read out another character from the given string.
 */
char jsp_readchar(
        struct jsp_safestr     *str
);

#endif

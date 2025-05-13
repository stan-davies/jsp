#include "jsp-sio.h"

char jsp_readchar(
        struct jsp_safestr     *str
) {
        if (str->man >= str->base + str->len || str->man < str->base) {
                return  JSP_SS_BADREAD;
        }

        char tmp = *str->man;
        if (JSP_SS_NULLC == tmp) {
                return  JSP_SS_NOREAD;
        }
        str->man++;
        return tmp;
}

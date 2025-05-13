#include "jsp-sread.h"

char jsp_readchar(
        struct jsp_safestr      *str
) {
        if (str->man >= str->wall || str->man < str->safe) {
                return  JSP_BAD_READ;
        }

        return *str->man;
}

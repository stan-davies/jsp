#include "jsp-rval.h"

int jsp_readval(
        struct jsp_safestr     *jss     ,
        struct jsp_obj         *pop
) {
        struct jsp_safestr      val;
        if (/*ERROR*/ == jsp_extract_val(jss, &val)) {
                // error
        }

        int type = jsp_valid_val(val);
        switch (type) {
        case JSP_INVAL:
                return //error
        case JSP_NULL:
                pop->val = JSP_NULL:
                break;
        case JSP_STR:
                pop->val = val.base;
                break;
        case JSP_NUM:
                int n = atoi(val.base);
                pop->val = &n;
                break;
        case JSP_BOL:
                int b = val.base[0];
                pop->val = &b;
                break;
        default:
                return //error
        }

        pop->type = type;
        return //fine
}



int jsp_extract_val(
        struct jsp_safestr     *jss     ,
        struct jsp_safestr     *val     ,
) {
        char    c;
        char   *valstr = calloc(JSP_MAX_VAL_LEN, sizeof(char));
        val     = {
                .base  = valstr,
                .man   = valstr,
                .len   = JSP_MAX_VAL_LEN
        };
        int     act    = JSP_VALSEARCH;

        for (;;) {
                c = jsp_readchar(jss);

                switch (c) {
                case JSP_SS_BADREAD:
                        goto errf_valstr;
                case JSP_SS_NOREAD:
                        // currently reading => error (cut off)
                        // finding => error (no value)
                        goto errf_valstr;
                case /* { */:
                        if (JSP_VALREAD == act) {
                                continue;
                        }
                        // handle object ()
                case /* [ */:
                        if (JSP_VALREAD == act) {
                                continue;
                        }
                        // handle array ()
                case /* : */:
                        act = JSP_VALREAD;
                case /* } */:
                case /* ] */:
                case /* , */:
                        if (JSP_VALREAD == act) {
                                continue;
                        }

                        if (/*ERROR*/ == jsp_writechar(&val, JSP_SS_NULLC)) {
                                goto errf_valstr;
                        }
                        goto fine;
                default:
                        if (JSP_VALREAD != act) {
                                continue;
                        }

                        if (/*ERROR*/ == jsp_writechar(&val, c)) {
                                goto errf_valstr;
                        }
                }
        }

fine:
        return // FINE

errf_valstr:
        free(valstr);
        valstr = NULL;
        val = NULL;
        return // ERROR
}

int jsp_valid_val(
        struct jsp_safestr      val
) {
// if first and last characters are ", go for string - remove "'s
// if == null, go for null
// if == true or false, go for boolean - update string to signify persuasion
// validate number
}

// while (fetch character)
// detect { or [
        // count line to } or ]
                // could be used for predictive allocation or
                // multithreading?
        // start parsing child structure right away
// read whole entry between : and , - enforce a maximum
// if first and last characters are ", go for string
// if == null, go for null
// if == true or false, go for boolean
// validate number
// send upto key

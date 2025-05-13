#include "jsp-parse.h"

int jsp_parse(char *jss, size_t jss_c, struct jsp_obj *jso) {
        struct jsp_obj root;
        memcpy(data.name, "root", 4);        

        struct jsp_safestr safe_jss = { jss, jss, jss_c };

        if (JSP_FINE != jsp_rval(&safe_jss, &root)) {
                // error case
        }

        if (JSP_FINE != jsp_valid_obj(root)) {
                // error case
        }

        *jso = root;
        return JSP_FINE;
}

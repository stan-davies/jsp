#ifndef JSP_OPJ_H
#define JSP_OBH_H

struct jsp_kvp {
        char *key;
        void *value;
        int   type;
};

struct jsp_obj {
        struct kvp *elm;
};

#endif

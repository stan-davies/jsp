#ifndef JSP_OPJ_H
#define JSP_OBH_H

#define MAX_KEY_LENGTH 32

struct jsp_obj {
        char  key[MAX_KEY_LENGTH];
        void *val;
        int   type;
};

int jsp_valid_obj(jsp_obj);

#endif

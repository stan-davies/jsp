#ifndef JSP_ARR_H
#define JSP_ARR_H

struct jsp_arr {
       void *data
       int   type;
       struct jsp_arr *next;
};

#endif

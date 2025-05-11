#ifndef JSP_UTIL_H
#define JSP_UTIL_H

/*
 *  value types:
 *   - string
 *   - number (integer or float)
 *   - bool
 *   - array (types mixed)
 *   - object
 *   - null
 */
// types
#define JSP_NUL 0       // null
#define JSP_NUM 1       // number (stored as float so anything)
#define JSP_BOL 2       // boolean
#define JSP_STR 3       // string
#define JSP_ARR 4       // array (of mixed types)
#define JSP_OBJ 5       // object

/*
 *   - each object contains a list of elements
 *   - each element is a key value pair
 *   - each value can be one of the available types, including another object
 */

int jsp_readwrd(char trm, int maxl);

#endif

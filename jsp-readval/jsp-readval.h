#ifndef JSP_RVAL_H
#define JSP_RVAL_H

#define JSP_MAX_VAL_LEN 32

#define JSP_VALSEARCH   0
#define JSP_VALREAD     1

#define JSP_NUL 0       // null
#define JSP_NUM 1       // number (stored as float so anything)
#define JSP_BOL 2       // boolean
#define JSP_STR 3       // string
#define JSP_ARR 4       // array (of mixed types)
#define JSP_OBJ 5       // object

/*
 *   INPUT  : JSON string under operation. Pointer to JSON object structure 
 *            which will be populated with the correct value and type on 
 *            success.
 *   OUTPUT : Success/failure.
 *
 *   DESC.  : Attempts to read a value from the current line.
 */
int jsp_readval(
        struct jsp_safestr     *jss     ,
        struct jsp_obj         *pop
);

/*
 *   INPUT  : Pointer to JSON string under operation. Pointer to value being
 *            extracted.
 *   OUTPUT : Success/failure.
 *
 *   DESC.  : Continues through JSON string and finds the next value. This is
 *            placed in full into `val` as an unvalidated string. This string
 *            must be freed by the caller.
 */
int jsp_extract_val(
        struct jsp_safestr     *jss     ,
        struct jsp_safestr     *val     ,
);

/*
 *   INPUT  : Value to validate.
 *   OUTPUT : Value type, or `JSP_INVAL` for invalid value.
 *
 *   DESC.  : Validates value, determining what type it is.
 */
int jsp_valid_val(
        struct jsp_safestr      val
);

#endif

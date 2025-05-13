#ifndef JSP_RVAL_H
#define JSP_RVAL_H

/*
 *   INPUT  : JSON string under operation. Pointer to JSON object structure 
 *            which will be populated with the correct value and type on 
 *            success.
 *   OUTPUT : Success/failure.
 *
 *   DESC.  : Attempts to read a value from the current line.
 */
int jsp_readval(struct jsp_safestr jss, struct jsp_obj *pop);

#endif

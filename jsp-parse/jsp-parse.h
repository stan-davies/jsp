#ifndef JSP_PARSE_H
#define JSP_PARSE_H

/*
 *   INPUT  : JSON string.
 *   OUTPUT : Success/Fail.
 *
 *   DESC.  : Attempts to convert JSON string into interactive data object.
 */
int jsp_parse(char *jss, int jss_c, struct jsp_obj *jso);

#endif

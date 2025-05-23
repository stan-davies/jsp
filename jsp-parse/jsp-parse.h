#ifndef JSP_PARSE_H
#define JSP_PARSE_H

/*
 *   INPUT  : JSON string. Length of JSON string. Pointer to JSON object that
 *            will be created.
 *   OUTPUT : Success/Fail.
 *
 *   DESC.  : Attempts to convert JSON string into interactive data object.
 */
int jsp_parse(char *jss, size_t jss_c, struct jsp_obj *jso);

#endif

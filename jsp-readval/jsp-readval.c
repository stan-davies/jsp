#include "jsp-rval.h"

int jsp_readval(struct jsp_safestr jss, struct jsp_obj *pop) {
        char c;
        for (;;) {
                if (JSP_BAD_READ == (c = jsp_readchar(jss))) {
                        // error!
                }

                switch (c) {
                case

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
}

// iterative factorial calculation just for 6! and 9! in HERA
// by Dave Wonnacott, Summer 2005 (and later revised), as an example for CMSC 245/240

#include <HERA.h>		/* This is required for HERA projects */
#include <HERA-print.h>	/*  This is needed to use print_reg and print for debugging in HERA-C */

void HERA_main()
{
    // Data comes first, remember...
#include "polling_basics-data.hera"

    // We'll use "single-precision", i.e., one-register values, for most of this course,
    //  so we set the carry-block flag here.

    CBON()

#include "polling_basics.hera"

    HALT()
}

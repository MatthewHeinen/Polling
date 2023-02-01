// iterative factorial calculation just for 6! and 9! in HERA
// by Dave Wonnacott, Summer 2005 (and later revised), as an example for CMSC 245/240

#include <HERA.h>		/* This is required for HERA projects */
#include <HERA-print.h>	/*  This is needed to use print_reg and print for debugging in HERA-C */

void HERA_main()
{
    // We'll use "single-precision", i.e., one-register values, for most of this course,
    //  so we set the carry-block flag here.
    // I label files that assume single-precision "P1", those with two-register precision "P2", etc.

    CBON()

    // Then use a general-purpose factorial to find either 3! or 5!
    SET(R1, 42)
    print("R1 should be 42...")
    print_reg(R1)

  HALT()
}

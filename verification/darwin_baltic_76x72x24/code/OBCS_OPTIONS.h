C $Header: /u/gcmpack/MITgcm_contrib/darwin/verification/darwin_baltic_76x72x24/code/OBCS_OPTIONS.h,v 1.1 2008/01/22 17:30:47 jahn Exp $
C $Name:  $
 
C CPP options file for OBCS package
C
C Use this file for selecting options within the OBCS package
C
C OBCS is enabled with ALLOW_OBCS in CPP_OPTIONS.h

#ifndef OBCS_OPTIONS_H
#define OBCS_OPTIONS_H
#include "PACKAGES_CONFIG.h"
#include "CPP_OPTIONS.h"

#ifdef ALLOW_OBCS

C Enable individual open boundaries
#define ALLOW_OBCS_NORTH
#undef ALLOW_OBCS_SOUTH
#define ALLOW_OBCS_EAST
#define ALLOW_OBCS_WEST

C This include hooks to the Orlanski Open Boundary Radiation code
#undef ALLOW_ORLANSKI

C Enable OB values to be prescribed via external fields that are read
C from a file
#define ALLOW_OBCS_PRESCRIBE

C This includes hooks to sponge layer treatment of uvel, vvel
#undef ALLOW_OBCS_SPONGE

C balance barotropic velocity
#undef ALLOW_OBCS_BALANCE

#endif /* ALLOW_OBCS */
#endif /* OBCS_OPTIONS_H */

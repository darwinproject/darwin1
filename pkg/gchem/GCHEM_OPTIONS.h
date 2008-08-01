C $Header: /u/gcmpack/MITgcm_contrib/darwin/pkg/gchem/Attic/GCHEM_OPTIONS.h,v 1.3 2008/08/01 21:50:14 stephd Exp $
C $Name:  $

#ifndef GCHEM_OPTIONS_H
#define GCHEM_OPTIONS_H
#include "PACKAGES_CONFIG.h"
#ifdef ALLOW_GCHEM

#include "CPP_OPTIONS.h"

CBOP
C    !ROUTINE: GCHEM_OPTIONS.h
C    !INTERFACE:

C    !DESCRIPTION:
C options for biogeochemistry package
CEOP

#define GCHEM_SEPARATE_FORCING
#undef  DIC_BIOTIC
#undef  ALLOW_FE
#undef  CAR_DISS
#define READ_PAR
#undef  USE_QSW
#define MINFE
#undef  NUT_SUPPLY
#undef  CONS_SUPP
#undef  OLD_GRAZE
#undef  ALLOW_DIAZ
#undef  OLD_NSCHEME
#undef  ALLOW_MUTANTS
#define PORT_RAND
#define OLDSEED
#undef GEIDER
#undef WAVEBANDS

#undef  CHECK_CONS
#undef  DAR_DIAG_RSTAR
#undef  DAR_DIAG_DIVER

#endif /* ALLOW_GCHEM */
#endif /* GCHEM_OPTIONS_H */

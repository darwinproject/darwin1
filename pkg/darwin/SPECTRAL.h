c Set parameters:
c tlam = number of wavebands
c        must match number of wavebands in input datafiles
c        must be the same for all data types (water, phyto, CDOM, surface spectra)

c need this if spectral AND/OR oasim
         integer tlam
         PARAMETER (tlam=13)


#ifdef OASIM
         _RL oasim_ed(1-OLx:sNx+OLx,1-OLy:sNy+OLy,tlam,nSx, nSy)
         _RL oasim_es(1-OLx:sNx+OLx,1-OLy:sNy+OLy,tlam,nSx, nSy)
#endif
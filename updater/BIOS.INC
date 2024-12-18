;
; BIOS definitions
;

PSLTRG			equ #A8			; I/O port address of primary slot register

WBOOT			equ #00
RDSLT			equ #0C
WRSLT			equ #14
CALSTL			equ #1C
ENASLT			equ #24
IDBYT0			equ #2B
BASVER			equ #2D
CALLF			equ #30
KEYINT			equ #38
WRTVDP			equ #47
LDIRMV			equ #59
LDIRVM			equ #5C
CHGMOD			equ #5F
INITXT			equ #6C
CHSNS			equ #9C
CHGET			equ #9F
CHPUT			equ #A2
LPTOUT			equ #A5
BREAKX			equ #B7
CKCNTC			equ #BD
ERAFNK			equ #CC
TOTEXT			equ #D2
SNSMAT			equ #141
PHYDIO			equ #144
KILBUF			equ #156
CALBAS			equ #159
EXTROM			equ #15F

RDPRIM			equ #F380
WRPRIM			equ #F385
CLPRIM			equ #F38C
CLPRM1			equ #F398
LINL40			equ #F3AE
LINLEN			equ #F3B0
CNSDFG			equ #F3DE
LPTPOS			equ #F415
PRTFLG			equ #F416
CURLIN			equ #F41C
KBUF			equ #F41F
BUF				equ #F55E
TTYPOS			equ #F661
VALTYP			equ #F663
MEMSIZ			equ #F672
STKTOP			equ #F674
TXTTAB			equ #F676
TEMPPT			equ #F678
TEMPST			equ #F67A
DSCTMP			equ #F698
FRETOP			equ #F69B
AUTLIN			equ #F6AB
SAVSTK			equ #F6B1
VARTAB			equ #F6C2
STREND			equ #F6C6
DAC				equ #F7F6
ARG				equ #F847
MAXFIL			equ #F85F
FILTAB			equ #F860
NULBUF			equ #F862
PTRFIL			equ #F864
FILNAM			equ #F866
NLONLY			equ #F87C
SAVEND			equ #F87D
EXBRSA			equ #FAF0
HOKVLD			equ #FB20
YFB21			equ #FB21					; diskdriver table
YFB29			equ #FB29					; diskdriver interrupt table
BOTTOM			equ #FC48
HIMEM			equ #FC4A
CSRSW			equ #FCA9
FLBMEM			equ #FCAE
RUNBNF			equ #FCBE
SAVENT			equ #FCBF
EXPTBL			equ #FCC1					; slots expanded or not
SLTTBL			equ #FCC5
SLTATR			equ #FCC9
SLTWRK			equ #FD09
PROCNM			equ #FD89
DEVICE			equ #FD99
H.TIMI			equ #FD9F
H.KEYI			equ #FD9A					; interrupt hook
H.DSKO			equ #FDEF
H.NAME			equ #FDF9
H.KILL			equ #FDFE
H.COPY			equ #FE08
H.DSKF			equ #FE12
H.DSKI			equ #FE17
H.LSET			equ #FE21
H.RSET			equ #FE26
H.FIEL			equ #FE2B
H.MKI			equ #FE30
H.MKS			equ #FE35
H.MKD			equ #FE3A
H.CVI			equ #FE3F
H.CVS			equ #FE44
H.CVD			equ #FE49
H.GETP			equ #FE4E
H.NOFO			equ #FE58
H.NULO			equ #FE5D
H.NTFL			equ #FE62
H.BINS			equ #FE71
H.BINL			equ #FE76
H.FILE			equ #FE7B
H.DGET			equ #FE80
H.FILO			equ #FE85
H.INDS			equ #FE8A
H.LOC			equ #FE99
H.LOF			equ #FE9E
H.EOF			equ #FEA3
H.BAKU			equ #FEAD
H.PARD			equ #FEB2
H.NODE			equ #FEB7
H.POSD			equ #FEBC
H.RUNC			equ #FECB
H.CLEA			equ #FED0
H.LOPD			equ #FED5
H.STKE			equ #FEDA
H.ERRP			equ #FEFD
H.PHYD			equ #FFA7
H.FORM			equ #FFAC
EXTBIO			equ #FFCA
DISINT			equ #FFCF
ENAINT			equ #FFD4
EXTVDP			equ #FFE7

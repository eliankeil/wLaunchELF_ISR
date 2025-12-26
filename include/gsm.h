#ifndef GSM_H
#define GSM_H

// Macros para armar los valores de los registros DISPLAY y SYNCV
#define makeDISPLAY(DH, DW, MAGV, MAGH, DY, DX) \
    (((u64)(DH) << 0) | ((u64)(DW) << 12) | ((u64)(MAGV) << 23) | \
     ((u64)(MAGH) << 27) | ((u64)(DY) << 32) | ((u64)(DX) << 43))

#define makeSYNCV(VS, VDP, VBPE, VBP, VFPE, VFP) \
    (((u64)(VS) << 0) | ((u64)(VDP) << 6) | ((u64)(VBPE) << 16) | \
     ((u64)(VBP) << 20) | ((u64)(VFPE) << 26) | ((u64)(VFP) << 32))

#endif

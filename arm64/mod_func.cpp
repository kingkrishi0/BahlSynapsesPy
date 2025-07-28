#include <stdio.h>
#include "hocdec.h"
extern int nrnmpi_myid;
extern int nrn_nobanner_;
#if defined(__cplusplus)
extern "C" {
#endif

extern void _cad_reg(void);
extern void _h_reg(void);
extern void _IKM_reg(void);
extern void _kca_reg(void);
extern void _kfast_reg(void);
extern void _kslow_reg(void);
extern void _my_exp2syn_reg(void);
extern void _mynetstim_reg(void);
extern void _nap_reg(void);
extern void _nat_reg(void);
extern void _SlowCa_reg(void);

void modl_reg() {
  if (!nrn_nobanner_) if (nrnmpi_myid < 1) {
    fprintf(stderr, "Additional mechanisms from files\n");
    fprintf(stderr, " \"cad.mod\"");
    fprintf(stderr, " \"h.mod\"");
    fprintf(stderr, " \"IKM.mod\"");
    fprintf(stderr, " \"kca.mod\"");
    fprintf(stderr, " \"kfast.mod\"");
    fprintf(stderr, " \"kslow.mod\"");
    fprintf(stderr, " \"my_exp2syn.mod\"");
    fprintf(stderr, " \"mynetstim.mod\"");
    fprintf(stderr, " \"nap.mod\"");
    fprintf(stderr, " \"nat.mod\"");
    fprintf(stderr, " \"SlowCa.mod\"");
    fprintf(stderr, "\n");
  }
  _cad_reg();
  _h_reg();
  _IKM_reg();
  _kca_reg();
  _kfast_reg();
  _kslow_reg();
  _my_exp2syn_reg();
  _mynetstim_reg();
  _nap_reg();
  _nat_reg();
  _SlowCa_reg();
}

#if defined(__cplusplus)
}
#endif

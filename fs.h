/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _FS_H_RPCGEN
#define _FS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct dados {
	char *nome;
	char *data;
};
typedef struct dados dados;

#define TRANSF 300000001
#define TRANSF_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define envia 1
extern  void * envia_1(dados *, CLIENT *);
extern  void * envia_1_svc(dados *, struct svc_req *);
extern int transf_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define envia 1
extern  void * envia_1();
extern  void * envia_1_svc();
extern int transf_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_dados (XDR *, dados*);

#else /* K&R C */
extern bool_t xdr_dados ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FS_H_RPCGEN */
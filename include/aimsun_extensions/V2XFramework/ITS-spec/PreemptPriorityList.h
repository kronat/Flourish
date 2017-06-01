/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "ISO_TS_19091.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PreemptPriorityList_H_
#define	_PreemptPriorityList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SignalControlZone;

/* PreemptPriorityList */
typedef struct PreemptPriorityList {
	A_SEQUENCE_OF(struct SignalControlZone) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PreemptPriorityList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PreemptPriorityList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SignalControlZone.h"

#endif	/* _PreemptPriorityList_H_ */
#include <asn_internal.h>
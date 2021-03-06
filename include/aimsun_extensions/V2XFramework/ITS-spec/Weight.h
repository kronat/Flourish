/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_Weight_H_
#define	_Weight_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "RSCUnit.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Weight */
typedef struct Weight {
	long	 value;
	RSCUnit_t	 unit;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Weight_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Weight;

#ifdef __cplusplus
}
#endif

#endif	/* _Weight_H_ */
#include <asn_internal.h>

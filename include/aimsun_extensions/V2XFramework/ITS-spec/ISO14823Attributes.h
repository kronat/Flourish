/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_ISO14823Attributes_H_
#define	_ISO14823Attributes_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "DTM.h"
#include "EDT.h"
#include "DFL.h"
#include "VED.h"
#include "SPE.h"
#include "ROI.h"
#include "DBV.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ISO14823Attributes__Member_PR {
	ISO14823Attributes__Member_PR_NOTHING,	/* No components present */
	ISO14823Attributes__Member_PR_dtm,
	ISO14823Attributes__Member_PR_edt,
	ISO14823Attributes__Member_PR_dfl,
	ISO14823Attributes__Member_PR_ved,
	ISO14823Attributes__Member_PR_spe,
	ISO14823Attributes__Member_PR_roi,
	ISO14823Attributes__Member_PR_dbv,
	ISO14823Attributes__Member_PR_ddd
} ISO14823Attributes__Member_PR;

/* Forward declarations */
struct DDD;

/* Forward definitions */
typedef struct ISO14823Attributes__Member {
	ISO14823Attributes__Member_PR present;
	union ISO14823Attributes__Member_u {
		DTM_t	 dtm;
		EDT_t	 edt;
		DFL_t	 dfl;
		VED_t	 ved;
		SPE_t	 spe;
		ROI_t	 roi;
		DBV_t	 dbv;
		struct DDD	*ddd;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ISO14823Attributes__Member;

/* ISO14823Attributes */
typedef struct ISO14823Attributes {
	A_SEQUENCE_OF(ISO14823Attributes__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ISO14823Attributes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ISO14823Attributes;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DDD.h"

#endif	/* _ISO14823Attributes_H_ */
#include <asn_internal.h>

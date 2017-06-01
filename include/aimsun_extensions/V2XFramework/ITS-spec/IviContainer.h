/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_IviContainer_H_
#define	_IviContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GeographicLocationContainer.h"
#include "GeneralIviContainer.h"
#include "RoadConfigurationContainer.h"
#include "TextContainer.h"
#include "LayoutContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IviContainer_PR {
	IviContainer_PR_NOTHING,	/* No components present */
	IviContainer_PR_glc,
	IviContainer_PR_giv,
	IviContainer_PR_rcc,
	IviContainer_PR_tc,
	IviContainer_PR_lac
	/* Extensions may appear below */
	
} IviContainer_PR;

/* IviContainer */
typedef struct IviContainer {
	IviContainer_PR present;
	union IviContainer_u {
		GeographicLocationContainer_t	 glc;
		GeneralIviContainer_t	 giv;
		RoadConfigurationContainer_t	 rcc;
		TextContainer_t	 tc;
		LayoutContainer_t	 lac;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IviContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IviContainer;

#ifdef __cplusplus
}
#endif

#endif	/* _IviContainer_H_ */
#include <asn_internal.h>
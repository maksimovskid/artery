/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "IS_TS103301/ISO_TS_14906_Application.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_PassengerCapacity_H_
#define	_PassengerCapacity_H_


#include "asn_application.h"

/* Including external dependencies */
#include "Int1.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PassengerCapacity */
typedef struct PassengerCapacity {
	Int1_t	 numberOfSeats;
	Int1_t	 numberOfStandingPlaces;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PassengerCapacity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PassengerCapacity;
extern asn_SEQUENCE_specifics_t asn_SPC_PassengerCapacity_specs_1;
extern asn_TYPE_member_t asn_MBR_PassengerCapacity_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PassengerCapacity_H_ */
#include "asn_internal.h"

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "IS_TS103301/ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_GoodsType_H_
#define	_GoodsType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GoodsType {
	GoodsType_ammunition	= 0,
	GoodsType_chemicals	= 1,
	GoodsType_empty	= 2,
	GoodsType_fuel	= 3,
	GoodsType_glass	= 4,
	GoodsType_dangerous	= 5,
	GoodsType_liquid	= 6,
	GoodsType_liveStock	= 7,
	GoodsType_dangerousForPeople	= 8,
	GoodsType_dangerousForTheEnvironment	= 9,
	GoodsType_dangerousForWater	= 10,
	GoodsType_perishableProducts	= 11,
	GoodsType_pharmaceutical	= 12,
	GoodsType_vehicles	= 13
} e_GoodsType;

/* GoodsType */
typedef long	 GoodsType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_GoodsType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_GoodsType;
asn_struct_free_f GoodsType_free;
asn_struct_print_f GoodsType_print;
asn_constr_check_f GoodsType_constraint;
ber_type_decoder_f GoodsType_decode_ber;
der_type_encoder_f GoodsType_encode_der;
xer_type_decoder_f GoodsType_decode_xer;
xer_type_encoder_f GoodsType_encode_xer;
oer_type_decoder_f GoodsType_decode_oer;
oer_type_encoder_f GoodsType_encode_oer;
per_type_decoder_f GoodsType_decode_uper;
per_type_encoder_f GoodsType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _GoodsType_H_ */
#include "asn_internal.h"

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "IS_TS103301/ISO_TS_19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "EmissionType.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_EmissionType_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_EmissionType_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_EmissionType_value2enum_1[] = {
	{ 0,	5,	"euro1" },
	{ 1,	5,	"euro2" },
	{ 2,	5,	"euro3" },
	{ 3,	5,	"euro4" },
	{ 4,	5,	"euro5" },
	{ 5,	5,	"euro6" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_EmissionType_enum2value_1[] = {
	0,	/* euro1(0) */
	1,	/* euro2(1) */
	2,	/* euro3(2) */
	3,	/* euro4(3) */
	4,	/* euro5(4) */
	5	/* euro6(5) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_EmissionType_specs_1 = {
	asn_MAP_EmissionType_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_EmissionType_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_EmissionType_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_EmissionType = {
	"EmissionType",
	"EmissionType",
	&asn_OP_NativeEnumerated,
	asn_DEF_EmissionType_tags_1,
	sizeof(asn_DEF_EmissionType_tags_1)
		/sizeof(asn_DEF_EmissionType_tags_1[0]), /* 1 */
	asn_DEF_EmissionType_tags_1,	/* Same as above */
	sizeof(asn_DEF_EmissionType_tags_1)
		/sizeof(asn_DEF_EmissionType_tags_1[0]), /* 1 */
	{ &asn_OER_type_EmissionType_constr_1, &asn_PER_type_EmissionType_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_EmissionType_specs_1	/* Additional specs */
};


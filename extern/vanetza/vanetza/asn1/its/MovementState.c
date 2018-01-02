/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "IS_TS103301/ISO_TS_19091.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "MovementState.h"

static int
memb_regional_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 4)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_regional_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_type_regional_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_regional_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..4)) */};
static asn_per_constraints_t asn_PER_memb_regional_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_regional_6[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RegionalExtension_272P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_regional_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_regional_specs_6 = {
	sizeof(struct MovementState__regional),
	offsetof(struct MovementState__regional, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_regional_6 = {
	"regional",
	"regional",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_regional_tags_6,
	sizeof(asn_DEF_regional_tags_6)
		/sizeof(asn_DEF_regional_tags_6[0]) - 1, /* 1 */
	asn_DEF_regional_tags_6,	/* Same as above */
	sizeof(asn_DEF_regional_tags_6)
		/sizeof(asn_DEF_regional_tags_6[0]), /* 2 */
	{ &asn_OER_type_regional_constr_6, &asn_PER_type_regional_constr_6, SEQUENCE_OF_constraint },
	asn_MBR_regional_6,
	1,	/* Single element */
	&asn_SPC_regional_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MovementState_1[] = {
	{ ATF_POINTER, 1, offsetof(struct MovementState, movementName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DescriptiveName,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"movementName"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MovementState, signalGroup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SignalGroupID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"signalGroup"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MovementState, state_time_speed),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MovementEventList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"state-time-speed"
		},
	{ ATF_POINTER, 2, offsetof(struct MovementState, maneuverAssistList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ManeuverAssistList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maneuverAssistList"
		},
	{ ATF_POINTER, 1, offsetof(struct MovementState, regional),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_regional_6,
		0,
		{ &asn_OER_memb_regional_constr_6, &asn_PER_memb_regional_constr_6,  memb_regional_constraint_1 },
		0, 0, /* No default value */
		"regional"
		},
};
static const int asn_MAP_MovementState_oms_1[] = { 0, 3, 4 };
static const ber_tlv_tag_t asn_DEF_MovementState_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MovementState_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* movementName */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* signalGroup */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* state-time-speed */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* maneuverAssistList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* regional */
};
asn_SEQUENCE_specifics_t asn_SPC_MovementState_specs_1 = {
	sizeof(struct MovementState),
	offsetof(struct MovementState, _asn_ctx),
	asn_MAP_MovementState_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_MovementState_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MovementState = {
	"MovementState",
	"MovementState",
	&asn_OP_SEQUENCE,
	asn_DEF_MovementState_tags_1,
	sizeof(asn_DEF_MovementState_tags_1)
		/sizeof(asn_DEF_MovementState_tags_1[0]), /* 1 */
	asn_DEF_MovementState_tags_1,	/* Same as above */
	sizeof(asn_DEF_MovementState_tags_1)
		/sizeof(asn_DEF_MovementState_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MovementState_1,
	5,	/* Elements count */
	&asn_SPC_MovementState_specs_1	/* Additional specs */
};


/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "IS_TS103301/ISO_TS_19321.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#include "DDD-IO.h"

static int
memb_drn_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_dp_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_dr_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_rne_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 999)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_stnId_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 999)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_dp_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_type_dp_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  1,  4 }	/* (SIZE(1..4,...)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dr_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_type_dr_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  1,  4 }	/* (SIZE(1..4,...)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_drn_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (0..7) */,
	-1};
static asn_per_constraints_t asn_PER_memb_drn_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_dp_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_dp_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  1,  4 }	/* (SIZE(1..4,...)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_dr_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_dr_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  1,  4 }	/* (SIZE(1..4,...)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_rne_constr_7 CC_NOTUSED = {
	{ 2, 1 }	/* (1..999) */,
	-1};
static asn_per_constraints_t asn_PER_memb_rne_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  1,  999 }	/* (1..999) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_stnId_constr_8 CC_NOTUSED = {
	{ 2, 1 }	/* (1..999) */,
	-1};
static asn_per_constraints_t asn_PER_memb_stnId_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  1,  999 }	/* (1..999) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_dp_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DestinationPlace,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_dp_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_dp_specs_3 = {
	sizeof(struct DDD_IO__dp),
	offsetof(struct DDD_IO__dp, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dp_3 = {
	"dp",
	"dp",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_dp_tags_3,
	sizeof(asn_DEF_dp_tags_3)
		/sizeof(asn_DEF_dp_tags_3[0]) - 1, /* 1 */
	asn_DEF_dp_tags_3,	/* Same as above */
	sizeof(asn_DEF_dp_tags_3)
		/sizeof(asn_DEF_dp_tags_3[0]), /* 2 */
	{ &asn_OER_type_dp_constr_3, &asn_PER_type_dp_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_dp_3,
	1,	/* Single element */
	&asn_SPC_dp_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_dr_5[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_DestinationRoad,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_dr_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_dr_specs_5 = {
	sizeof(struct DDD_IO__dr),
	offsetof(struct DDD_IO__dr, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dr_5 = {
	"dr",
	"dr",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_dr_tags_5,
	sizeof(asn_DEF_dr_tags_5)
		/sizeof(asn_DEF_dr_tags_5[0]) - 1, /* 1 */
	asn_DEF_dr_tags_5,	/* Same as above */
	sizeof(asn_DEF_dr_tags_5)
		/sizeof(asn_DEF_dr_tags_5[0]), /* 2 */
	{ &asn_OER_type_dr_constr_5, &asn_PER_type_dr_constr_5, SEQUENCE_OF_constraint },
	asn_MBR_dr_5,
	1,	/* Single element */
	&asn_SPC_dr_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_DDD_IO_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DDD_IO, drn),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_drn_constr_2, &asn_PER_memb_drn_constr_2,  memb_drn_constraint_1 },
		0, 0, /* No default value */
		"drn"
		},
	{ ATF_POINTER, 7, offsetof(struct DDD_IO, dp),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_dp_3,
		0,
		{ &asn_OER_memb_dp_constr_3, &asn_PER_memb_dp_constr_3,  memb_dp_constraint_1 },
		0, 0, /* No default value */
		"dp"
		},
	{ ATF_POINTER, 6, offsetof(struct DDD_IO, dr),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_dr_5,
		0,
		{ &asn_OER_memb_dr_constr_5, &asn_PER_memb_dr_constr_5,  memb_dr_constraint_1 },
		0, 0, /* No default value */
		"dr"
		},
	{ ATF_POINTER, 5, offsetof(struct DDD_IO, rne),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_rne_constr_7, &asn_PER_memb_rne_constr_7,  memb_rne_constraint_1 },
		0, 0, /* No default value */
		"rne"
		},
	{ ATF_POINTER, 4, offsetof(struct DDD_IO, stnId),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_stnId_constr_8, &asn_PER_memb_stnId_constr_8,  memb_stnId_constraint_1 },
		0, 0, /* No default value */
		"stnId"
		},
	{ ATF_POINTER, 3, offsetof(struct DDD_IO, stnText),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTF8String,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"stnText"
		},
	{ ATF_POINTER, 2, offsetof(struct DDD_IO, dcp),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DistanceOrDuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dcp"
		},
	{ ATF_POINTER, 1, offsetof(struct DDD_IO, ddp),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DistanceOrDuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ddp"
		},
};
static const int asn_MAP_DDD_IO_oms_1[] = { 1, 2, 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_DDD_IO_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DDD_IO_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* drn */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dp */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dr */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* rne */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* stnId */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* stnText */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* dcp */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* ddp */
};
asn_SEQUENCE_specifics_t asn_SPC_DDD_IO_specs_1 = {
	sizeof(struct DDD_IO),
	offsetof(struct DDD_IO, _asn_ctx),
	asn_MAP_DDD_IO_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_DDD_IO_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DDD_IO = {
	"DDD-IO",
	"DDD-IO",
	&asn_OP_SEQUENCE,
	asn_DEF_DDD_IO_tags_1,
	sizeof(asn_DEF_DDD_IO_tags_1)
		/sizeof(asn_DEF_DDD_IO_tags_1[0]), /* 1 */
	asn_DEF_DDD_IO_tags_1,	/* Same as above */
	sizeof(asn_DEF_DDD_IO_tags_1)
		/sizeof(asn_DEF_DDD_IO_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DDD_IO_1,
	8,	/* Elements count */
	&asn_SPC_DDD_IO_specs_1	/* Additional specs */
};


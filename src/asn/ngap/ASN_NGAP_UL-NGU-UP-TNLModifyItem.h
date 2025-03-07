/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_UL_NGU_UP_TNLModifyItem_H_
#define	_ASN_NGAP_UL_NGU_UP_TNLModifyItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_NGAP_UPTransportLayerInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ASN_NGAP_ProtocolExtensionContainer;

/* ASN_NGAP_UL-NGU-UP-TNLModifyItem */
typedef struct ASN_NGAP_UL_NGU_UP_TNLModifyItem {
	ASN_NGAP_UPTransportLayerInformation_t	 uL_NGU_UP_TNLInformation;
	ASN_NGAP_UPTransportLayerInformation_t	 dL_NGU_UP_TNLInformation;
	struct ASN_NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_UL_NGU_UP_TNLModifyItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_UL_NGU_UP_TNLModifyItem;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_NGAP_UL_NGU_UP_TNLModifyItem_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_UL_NGU_UP_TNLModifyItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_UL_NGU_UP_TNLModifyItem_H_ */
#include <asn_internal.h>

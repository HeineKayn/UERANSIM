/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-OER -gen-PER -no-gen-example -D ngap`
 */

#ifndef	_ASN_NGAP_SensorNameConfig_H_
#define	_ASN_NGAP_SensorNameConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_NGAP_SensorNameConfig_PR {
	ASN_NGAP_SensorNameConfig_PR_NOTHING,	/* No components present */
	ASN_NGAP_SensorNameConfig_PR_uncompensatedBarometricConfig,
	ASN_NGAP_SensorNameConfig_PR_ueSpeedConfig,
	ASN_NGAP_SensorNameConfig_PR_ueOrientationConfig,
	ASN_NGAP_SensorNameConfig_PR_choice_Extensions
} ASN_NGAP_SensorNameConfig_PR;
typedef enum ASN_NGAP_SensorNameConfig__uncompensatedBarometricConfig {
	ASN_NGAP_SensorNameConfig__uncompensatedBarometricConfig_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_SensorNameConfig__uncompensatedBarometricConfig;
typedef enum ASN_NGAP_SensorNameConfig__ueSpeedConfig {
	ASN_NGAP_SensorNameConfig__ueSpeedConfig_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_SensorNameConfig__ueSpeedConfig;
typedef enum ASN_NGAP_SensorNameConfig__ueOrientationConfig {
	ASN_NGAP_SensorNameConfig__ueOrientationConfig_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ASN_NGAP_SensorNameConfig__ueOrientationConfig;

/* Forward declarations */
struct ASN_NGAP_ProtocolIE_SingleContainer;

/* ASN_NGAP_SensorNameConfig */
typedef struct ASN_NGAP_SensorNameConfig {
	ASN_NGAP_SensorNameConfig_PR present;
	union ASN_NGAP_SensorNameConfig_u {
		long	 uncompensatedBarometricConfig;
		long	 ueSpeedConfig;
		long	 ueOrientationConfig;
		struct ASN_NGAP_ProtocolIE_SingleContainer	*choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_NGAP_SensorNameConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_uncompensatedBarometricConfig_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_ueSpeedConfig_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_ueOrientationConfig_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_NGAP_SensorNameConfig;
extern asn_CHOICE_specifics_t asn_SPC_ASN_NGAP_SensorNameConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_NGAP_SensorNameConfig_1[4];
extern asn_per_constraints_t asn_PER_type_ASN_NGAP_SensorNameConfig_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_NGAP_SensorNameConfig_H_ */
#include <asn_internal.h>

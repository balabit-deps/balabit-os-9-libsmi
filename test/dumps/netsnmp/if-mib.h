/*
 * This C header file has been generated by smidump 0.2.17.
 * It is intended to be used with the NET-SNMP package.
 *
 * This header is derived from the IF-MIB module.
 *
 * $Id: if-mib.h 1154 2001-08-24 10:09:18Z strauss $
 */

#ifndef _IF_MIB_H_
#define _IF_MIB_H_

#include <stdlib.h>

#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif

/*
 * C type definitions for IF-MIB::interfaces.
 */

typedef struct interfaces {
    int32_t   *ifNumber;
    void      *_clientData;		/* pointer to client data structure */

    /* private space to hold actual values */

    int32_t   __ifNumber;
} interfaces_t;

/*
 * C manager interface stubs for IF-MIB::interfaces.
 */

extern int
if_mib_mgr_get_interfaces(struct snmp_session *s, interfaces_t **interfaces);

/*
 * C agent interface stubs for IF-MIB::interfaces.
 */

extern int
if_mib_agt_read_interfaces(interfaces_t *interfaces);
extern int
if_mib_agt_register_interfaces();

/*
 * C type definitions for IF-MIB::ifEntry.
 */

typedef struct ifEntry {
    int32_t   *ifIndex;
    u_char    *ifDescr;
    size_t    _ifDescrLength;
    int32_t   *ifType;
    int32_t   *ifMtu;
    uint32_t  *ifSpeed;
    u_char    *ifPhysAddress;
    size_t    _ifPhysAddressLength;
    int32_t   *ifAdminStatus;
    int32_t   *ifOperStatus;
    uint32_t  *ifLastChange;
    uint32_t  *ifInOctets;
    uint32_t  *ifInUcastPkts;
    uint32_t  *ifInNUcastPkts;
    uint32_t  *ifInDiscards;
    uint32_t  *ifInErrors;
    uint32_t  *ifInUnknownProtos;
    uint32_t  *ifOutOctets;
    uint32_t  *ifOutUcastPkts;
    uint32_t  *ifOutNUcastPkts;
    uint32_t  *ifOutDiscards;
    uint32_t  *ifOutErrors;
    uint32_t  *ifOutQLen;
    uint32_t  *ifSpecific;
    size_t    _ifSpecificLength;
    void      *_clientData;		/* pointer to client data structure */
    struct ifEntry *_nextPtr;	/* pointer to next table entry */

    /* private space to hold actual values */

    int32_t   __ifIndex;
    u_char    __ifDescr[255];
    int32_t   __ifType;
    int32_t   __ifMtu;
    uint32_t  __ifSpeed;
    u_char    __ifPhysAddress[65535];
    int32_t   __ifAdminStatus;
    int32_t   __ifOperStatus;
    uint32_t  __ifLastChange;
    uint32_t  __ifInOctets;
    uint32_t  __ifInUcastPkts;
    uint32_t  __ifInNUcastPkts;
    uint32_t  __ifInDiscards;
    uint32_t  __ifInErrors;
    uint32_t  __ifInUnknownProtos;
    uint32_t  __ifOutOctets;
    uint32_t  __ifOutUcastPkts;
    uint32_t  __ifOutNUcastPkts;
    uint32_t  __ifOutDiscards;
    uint32_t  __ifOutErrors;
    uint32_t  __ifOutQLen;
    uint32_t  __ifSpecific[128];
} ifEntry_t;

/*
 * C manager interface stubs for IF-MIB::ifEntry.
 */

extern int
if_mib_mgr_get_ifEntry(struct snmp_session *s, ifEntry_t **ifEntry);

/*
 * C agent interface stubs for IF-MIB::ifEntry.
 */

extern int
if_mib_agt_read_ifEntry(ifEntry_t *ifEntry);
extern int
if_mib_agt_register_ifEntry();

/*
 * C type definitions for IF-MIB::ifMIBObjects.
 */

typedef struct ifMIBObjects {
    uint32_t  *ifTableLastChange;
    uint32_t  *ifStackLastChange;
    void      *_clientData;		/* pointer to client data structure */

    /* private space to hold actual values */

    uint32_t  __ifTableLastChange;
    uint32_t  __ifStackLastChange;
} ifMIBObjects_t;

/*
 * C manager interface stubs for IF-MIB::ifMIBObjects.
 */

extern int
if_mib_mgr_get_ifMIBObjects(struct snmp_session *s, ifMIBObjects_t **ifMIBObjects);

/*
 * C agent interface stubs for IF-MIB::ifMIBObjects.
 */

extern int
if_mib_agt_read_ifMIBObjects(ifMIBObjects_t *ifMIBObjects);
extern int
if_mib_agt_register_ifMIBObjects();

/*
 * C type definitions for IF-MIB::ifXEntry.
 */

typedef struct ifXEntry {
    u_char    *ifName;
    size_t    _ifNameLength;
    uint32_t  *ifInMulticastPkts;
    uint32_t  *ifInBroadcastPkts;
    uint32_t  *ifOutMulticastPkts;
    uint32_t  *ifOutBroadcastPkts;
    uint64_t  *ifHCInOctets; 
    uint64_t  *ifHCInUcastPkts; 
    uint64_t  *ifHCInMulticastPkts; 
    uint64_t  *ifHCInBroadcastPkts; 
    uint64_t  *ifHCOutOctets; 
    uint64_t  *ifHCOutUcastPkts; 
    uint64_t  *ifHCOutMulticastPkts; 
    uint64_t  *ifHCOutBroadcastPkts; 
    int32_t   *ifLinkUpDownTrapEnable;
    uint32_t  *ifHighSpeed;
    int32_t   *ifPromiscuousMode;
    int32_t   *ifConnectorPresent;
    u_char    *ifAlias;
    size_t    _ifAliasLength;
    uint32_t  *ifCounterDiscontinuityTime;
    void      *_clientData;		/* pointer to client data structure */
    struct ifXEntry *_nextPtr;	/* pointer to next table entry */

    /* private space to hold actual values */

    u_char    __ifName[255];
    uint32_t  __ifInMulticastPkts;
    uint32_t  __ifInBroadcastPkts;
    uint32_t  __ifOutMulticastPkts;
    uint32_t  __ifOutBroadcastPkts;
    uint64_t  __ifHCInOctets; 
    uint64_t  __ifHCInUcastPkts; 
    uint64_t  __ifHCInMulticastPkts; 
    uint64_t  __ifHCInBroadcastPkts; 
    uint64_t  __ifHCOutOctets; 
    uint64_t  __ifHCOutUcastPkts; 
    uint64_t  __ifHCOutMulticastPkts; 
    uint64_t  __ifHCOutBroadcastPkts; 
    int32_t   __ifLinkUpDownTrapEnable;
    uint32_t  __ifHighSpeed;
    int32_t   __ifPromiscuousMode;
    int32_t   __ifConnectorPresent;
    u_char    __ifAlias[64];
    uint32_t  __ifCounterDiscontinuityTime;
} ifXEntry_t;

/*
 * C manager interface stubs for IF-MIB::ifXEntry.
 */

extern int
if_mib_mgr_get_ifXEntry(struct snmp_session *s, ifXEntry_t **ifXEntry);

/*
 * C agent interface stubs for IF-MIB::ifXEntry.
 */

extern int
if_mib_agt_read_ifXEntry(ifXEntry_t *ifXEntry);
extern int
if_mib_agt_register_ifXEntry();

/*
 * C type definitions for IF-MIB::ifStackEntry.
 */

typedef struct ifStackEntry {
    int32_t   *ifStackHigherLayer;
    int32_t   *ifStackLowerLayer;
    int32_t   *ifStackStatus;
    void      *_clientData;		/* pointer to client data structure */
    struct ifStackEntry *_nextPtr;	/* pointer to next table entry */

    /* private space to hold actual values */

    int32_t   __ifStackHigherLayer;
    int32_t   __ifStackLowerLayer;
    int32_t   __ifStackStatus;
} ifStackEntry_t;

/*
 * C manager interface stubs for IF-MIB::ifStackEntry.
 */

extern int
if_mib_mgr_get_ifStackEntry(struct snmp_session *s, ifStackEntry_t **ifStackEntry);

/*
 * C agent interface stubs for IF-MIB::ifStackEntry.
 */

extern int
if_mib_agt_read_ifStackEntry(ifStackEntry_t *ifStackEntry);
extern int
if_mib_agt_register_ifStackEntry();

/*
 * C type definitions for IF-MIB::ifTestEntry.
 */

typedef struct ifTestEntry {
    int32_t   *ifTestId;
    int32_t   *ifTestStatus;
    uint32_t  *ifTestType;
    size_t    _ifTestTypeLength;
    int32_t   *ifTestResult;
    uint32_t  *ifTestCode;
    size_t    _ifTestCodeLength;
    u_char    *ifTestOwner;
    size_t    _ifTestOwnerLength;
    void      *_clientData;		/* pointer to client data structure */
    struct ifTestEntry *_nextPtr;	/* pointer to next table entry */

    /* private space to hold actual values */

    int32_t   __ifTestId;
    int32_t   __ifTestStatus;
    uint32_t  __ifTestType[128];
    int32_t   __ifTestResult;
    uint32_t  __ifTestCode[128];
    u_char    __ifTestOwner[255];
} ifTestEntry_t;

/*
 * C manager interface stubs for IF-MIB::ifTestEntry.
 */

extern int
if_mib_mgr_get_ifTestEntry(struct snmp_session *s, ifTestEntry_t **ifTestEntry);

/*
 * C agent interface stubs for IF-MIB::ifTestEntry.
 */

extern int
if_mib_agt_read_ifTestEntry(ifTestEntry_t *ifTestEntry);
extern int
if_mib_agt_register_ifTestEntry();

/*
 * C type definitions for IF-MIB::ifRcvAddressEntry.
 */

typedef struct ifRcvAddressEntry {
    u_char    *ifRcvAddressAddress;
    size_t    _ifRcvAddressAddressLength;
    int32_t   *ifRcvAddressStatus;
    int32_t   *ifRcvAddressType;
    void      *_clientData;		/* pointer to client data structure */
    struct ifRcvAddressEntry *_nextPtr;	/* pointer to next table entry */

    /* private space to hold actual values */

    u_char    __ifRcvAddressAddress[65535];
    int32_t   __ifRcvAddressStatus;
    int32_t   __ifRcvAddressType;
} ifRcvAddressEntry_t;

/*
 * C manager interface stubs for IF-MIB::ifRcvAddressEntry.
 */

extern int
if_mib_mgr_get_ifRcvAddressEntry(struct snmp_session *s, ifRcvAddressEntry_t **ifRcvAddressEntry);

/*
 * C agent interface stubs for IF-MIB::ifRcvAddressEntry.
 */

extern int
if_mib_agt_read_ifRcvAddressEntry(ifRcvAddressEntry_t *ifRcvAddressEntry);
extern int
if_mib_agt_register_ifRcvAddressEntry();


typedef struct if_mib {
    interfaces_t	interfaces;
    ifEntry_t	*ifEntry;
    ifMIBObjects_t	ifMIBObjects;
    ifXEntry_t	*ifXEntry;
    ifStackEntry_t	*ifStackEntry;
    ifTestEntry_t	*ifTestEntry;
    ifRcvAddressEntry_t	*ifRcvAddressEntry;
} if_mib_t;

/*
 * Initialization function:
 */

void if_mib_agt_init(void);

#endif /* _IF_MIB_H_ */

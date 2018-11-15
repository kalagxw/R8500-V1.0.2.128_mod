/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "bin/default/librpc/gen_ndr/clusapi.h"

#ifndef _HEADER_NDR_clusapi
#define _HEADER_NDR_clusapi

#define NDR_CLUSAPI_UUID "b97db8b2-4c63-11cf-bff6-08002be23f2f"
#define NDR_CLUSAPI_VERSION 3.0
#define NDR_CLUSAPI_NAME "clusapi"
#define NDR_CLUSAPI_HELPSTRING "Failover Cluster Management API (clusapi)"
extern const struct ndr_interface_table ndr_table_clusapi;
#define NDR_CLUSAPI_OPENCLUSTER (0x00)

#define NDR_CLUSAPI_CLOSECLUSTER (0x01)

#define NDR_CLUSAPI_SETCLUSTERNAME (0x02)

#define NDR_CLUSAPI_GETCLUSTERNAME (0x03)

#define NDR_CLUSAPI_GETCLUSTERVERSION (0x04)

#define NDR_CLUSAPI_GETQUORUMRESOURCE (0x05)

#define NDR_CLUSAPI_SETQUORUMRESOURCE (0x06)

#define NDR_CLUSAPI_CREATEENUM (0x07)

#define NDR_CLUSAPI_OPENRESOURCE (0x08)

#define NDR_CLUSAPI_CREATERESOURCE (0x09)

#define NDR_CLUSAPI_DELETERESOURCE (0x0a)

#define NDR_CLUSAPI_CLOSERESOURCE (0x0b)

#define NDR_CLUSAPI_GETRESOURCESTATE (0x0c)

#define NDR_CLUSAPI_SETRESOURCENAME (0x0d)

#define NDR_CLUSAPI_GETRESOURCEID (0x0e)

#define NDR_CLUSAPI_GETRESOURCETYPE (0x0f)

#define NDR_CLUSAPI_FAILRESOURCE (0x10)

#define NDR_CLUSAPI_ONLINERESOURCE (0x11)

#define NDR_CLUSAPI_OFFLINERESOURCE (0x12)

#define NDR_CLUSAPI_ADDRESOURCEDEPENDENCY (0x13)

#define NDR_CLUSAPI_REMOVERESOURCEDEPENDENCY (0x14)

#define NDR_CLUSAPI_CANRESOURCEBEDEPENDENT (0x15)

#define NDR_CLUSAPI_CREATERESENUM (0x16)

#define NDR_CLUSAPI_ADDRESOURCENODE (0x17)

#define NDR_CLUSAPI_REMOVERESOURCENODE (0x18)

#define NDR_CLUSAPI_CHANGERESOURCEGROUP (0x19)

#define NDR_CLUSAPI_CREATERESOURCETYPE (0x1a)

#define NDR_CLUSAPI_DELETERESOURCETYPE (0x1b)

#define NDR_CLUSAPI_GETROOTKEY (0x1c)

#define NDR_CLUSAPI_CREATEKEY (0x1d)

#define NDR_CLUSAPI_OPENKEY (0x1e)

#define NDR_CLUSAPI_ENUMKEY (0x1f)

#define NDR_CLUSAPI_SETVALUE (0x20)

#define NDR_CLUSAPI_DELETEVALUE (0x21)

#define NDR_CLUSAPI_QUERYVALUE (0x22)

#define NDR_CLUSAPI_DELETEKEY (0x23)

#define NDR_CLUSAPI_ENUMVALUE (0x24)

#define NDR_CLUSAPI_CLOSEKEY (0x25)

#define NDR_CLUSAPI_QUERYINFOKEY (0x26)

#define NDR_CLUSAPI_SETKEYSECURITY (0x27)

#define NDR_CLUSAPI_GETKEYSECURITY (0x28)

#define NDR_CLUSAPI_OPENGROUP (0x29)

#define NDR_CLUSAPI_CREATEGROUP (0x2a)

#define NDR_CLUSAPI_DELETEGROUP (0x2b)

#define NDR_CLUSAPI_CLOSEGROUP (0x2c)

#define NDR_CLUSAPI_GETGROUPSTATE (0x2d)

#define NDR_CLUSAPI_SETGROUPNAME (0x2e)

#define NDR_CLUSAPI_GETGROUPID (0x2f)

#define NDR_CLUSAPI_GETNODEID (0x30)

#define NDR_CLUSAPI_ONLINEGROUP (0x31)

#define NDR_CLUSAPI_OFFLINEGROUP (0x32)

#define NDR_CLUSAPI_MOVEGROUP (0x33)

#define NDR_CLUSAPI_MOVEGROUPTONODE (0x34)

#define NDR_CLUSAPI_CREATEGROUPRESOURCEENUM (0x35)

#define NDR_CLUSAPI_SETGROUPNODELIST (0x36)

#define NDR_CLUSAPI_CREATENOTIFY (0x37)

#define NDR_CLUSAPI_CLOSENOTIFY (0x38)

#define NDR_CLUSAPI_ADDNOTIFYCLUSTER (0x39)

#define NDR_CLUSAPI_ADDNOTIFYNODE (0x3a)

#define NDR_CLUSAPI_ADDNOTIFYGROUP (0x3b)

#define NDR_CLUSAPI_ADDNOTIFYRESOURCE (0x3c)

#define NDR_CLUSAPI_ADDNOTIFYKEY (0x3d)

#define NDR_CLUSAPI_READDNOTIFYNODE (0x3e)

#define NDR_CLUSAPI_READDNOTIFYGROUP (0x3f)

#define NDR_CLUSAPI_READDNOTIFYRESOURCE (0x40)

#define NDR_CLUSAPI_GETNOTIFY (0x41)

#define NDR_CLUSAPI_OPENNODE (0x42)

#define NDR_CLUSAPI_CLOSENODE (0x43)

#define NDR_CLUSAPI_GETNODESTATE (0x44)

#define NDR_CLUSAPI_PAUSENODE (0x45)

#define NDR_CLUSAPI_RESUMENODE (0x46)

#define NDR_CLUSAPI_EVICTNODE (0x47)

#define NDR_CLUSAPI_NODERESOURCECONTROL (0x48)

#define NDR_CLUSAPI_RESOURCECONTROL (0x49)

#define NDR_CLUSAPI_NODERESOURCETYPECONTROL (0x4a)

#define NDR_CLUSAPI_RESOURCETYPECONTROL (0x4b)

#define NDR_CLUSAPI_NODEGROUPCONTROL (0x4c)

#define NDR_CLUSAPI_GROUPCONTROL (0x4d)

#define NDR_CLUSAPI_NODENODECONTROL (0x4e)

#define NDR_CLUSAPI_NODECONTROL (0x4f)

#define NDR_OPNUM80NOTUSEDONWIRE (0x50)

#define NDR_CLUSAPI_OPENNETWORK (0x51)

#define NDR_CLUSAPI_CLOSENETWORK (0x52)

#define NDR_CLUSAPI_GETNETWORKSTATE (0x53)

#define NDR_CLUSAPI_SETNETWORKNAME (0x54)

#define NDR_CLUSAPI_CREATENETWORKENUM (0x55)

#define NDR_CLUSAPI_GETNETWORKID (0x56)

#define NDR_CLUSAPI_SETNETWORKPRIORITYORDER (0x57)

#define NDR_CLUSAPI_NODENETWORKCONTROL (0x58)

#define NDR_CLUSAPI_NETWORKCONTROL (0x59)

#define NDR_CLUSAPI_ADDNOTIFYNETWORK (0x5a)

#define NDR_CLUSAPI_READDNOTIFYNETWORK (0x5b)

#define NDR_CLUSAPI_OPENNETINTERFACE (0x5c)

#define NDR_CLUSAPI_CLOSENETINTERFACE (0x5d)

#define NDR_CLUSAPI_GETNETINTERFACESTATE (0x5e)

#define NDR_CLUSAPI_GETNETINTERFACE (0x5f)

#define NDR_CLUSAPI_GETNETINTERFACEID (0x60)

#define NDR_CLUSAPI_NODENETINTERFACECONTROL (0x61)

#define NDR_CLUSAPI_NETINTERFACECONTROL (0x62)

#define NDR_CLUSAPI_ADDNOTIFYNETINTERFACE (0x63)

#define NDR_CLUSAPI_READDNOTIFYNETINTERFACE (0x64)

#define NDR_CLUSAPI_CREATENODEENUM (0x65)

#define NDR_CLUSAPI_GETCLUSTERVERSION2 (0x66)

#define NDR_CLUSAPI_CREATERESTYPEENUM (0x67)

#define NDR_CLUSAPI_BACKUPCLUSTERDATABASE (0x68)

#define NDR_CLUSAPI_NODECLUSTERCONTROL (0x69)

#define NDR_CLUSAPI_CLUSTERCONTROL (0x6a)

#define NDR_CLUSAPI_UNBLOCKGETNOTIFYCALL (0x6b)

#define NDR_CLUSAPI_SETSERVICEACCOUNTPASSWORD (0x6c)

#define NDR_CLUSAPI_SETRESOURCEDEPENDENCYEXPRESSION (0x6d)

#define NDR_CLUSAPI_GETRESOURCEDEPENDENCYEXPRESSION (0x6e)

#define NDR_OPNUM111NOTUSEDONWIRE (0x6f)

#define NDR_CLUSAPI_GETRESOURCENETWORKNAME (0x70)

#define NDR_CLUSAPI_EXECUTEBATCH (0x71)

#define NDR_CLUSAPI_CREATEBATCHPORT (0x72)

#define NDR_CLUSAPI_GETBATCHNOTIFICATION (0x73)

#define NDR_CLUSAPI_CLOSEBATCHPORT (0x74)

#define NDR_CLUSAPI_OPENCLUSTEREX (0x75)

#define NDR_CLUSAPI_OPENNODEEX (0x76)

#define NDR_CLUSAPI_OPENGROUPEX (0x77)

#define NDR_CLUSAPI_OPENRESOURCEEX (0x78)

#define NDR_CLUSAPI_OPENNETWORKEX (0x79)

#define NDR_CLUSAPI_OPENNETINTERFACEEX (0x7a)

#define NDR_CLUSAPI_CHANGECSVSTATE (0x7b)

#define NDR_CLUSAPI_CREATENODEENUMEX (0x7c)

#define NDR_CLUSAPI_CREATEENUMEX (0x7d)

#define NDR_CLUSAPI_PAUSENODEEX (0x7e)

#define NDR_CLUSAPI_PAUSENODEWITHDRAINTARGET (0x7f)

#define NDR_CLUSAPI_RESUMENODEEX (0x80)

#define NDR_CLUSAPI_CREATEGROUPEX (0x81)

#define NDR_CLUSAPI_ONLINEGROUPEX (0x82)

#define NDR_CLUSAPI_OFFLINEGROUPEX (0x83)

#define NDR_CLUSAPI_MOVEGROUPEX (0x84)

#define NDR_CLUSAPI_MOVEGROUPTONODEEX (0x85)

#define NDR_CLUSAPI_CANCELCLUSTERGROUPOPERATION (0x86)

#define NDR_CLUSAPI_ONLINERESOURCEEX (0x87)

#define NDR_CLUSAPI_OFFLINERESOURCEEX (0x88)

#define NDR_CLUSAPI_CREATENOTIFYV2 (0x89)

#define NDR_CLUSAPI_ADDNOTIFYV2 (0x8a)

#define NDR_CLUSAPI_GETNOTIFYV2 (0x8b)

#define NDR_CLUSAPI_QUERYALLVALUES (0x8c)

#define NDR_CLUSAPI_STMFINDDISK (0x8d)

#define NDR_CLUSAPI_CLUSTERMRR (0x8e)

#define NDR_CLUSAPI_CREATEGROUPENUM (0x8f)

#define NDR_CLUSAPI_CREATERESOURCEENUM (0x90)

#define NDR_CLUSAPI_EXECUTEREADBATCH (0x91)

#define NDR_CLUSAPI_RESTARTRESOURCE (0x92)

#define NDR_CLUSAPI_GETNOTIFYASYNC (0x93)

#define NDR_CLUSAPI_CALL_COUNT (148)
void ndr_print_RPC_SECURITY_DESCRIPTOR(struct ndr_print *ndr, const char *name, const struct RPC_SECURITY_DESCRIPTOR *r);
void ndr_print_RPC_SECURITY_ATTRIBUTES(struct ndr_print *ndr, const char *name, const struct RPC_SECURITY_ATTRIBUTES *r);
void ndr_print_CLUSTER_OPERATIONAL_VERSION_INFO(struct ndr_print *ndr, const char *name, const struct CLUSTER_OPERATIONAL_VERSION_INFO *r);
void ndr_print_IDL_CLUSTER_SET_PASSWORD_STATUS(struct ndr_print *ndr, const char *name, const struct IDL_CLUSTER_SET_PASSWORD_STATUS *r);
void ndr_print_IDL_CLUSTER_SET_PASSWORD_FLAGS(struct ndr_print *ndr, const char *name, enum IDL_CLUSTER_SET_PASSWORD_FLAGS r);
void ndr_print_CLUSTER_CREATE_GROUP_INFO_RPC(struct ndr_print *ndr, const char *name, const struct CLUSTER_CREATE_GROUP_INFO_RPC *r);
void ndr_print_ClusterEnumType(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_ENUM_ENTRY(struct ndr_print *ndr, const char *name, const struct ENUM_ENTRY *r);
void ndr_print_ENUM_LIST(struct ndr_print *ndr, const char *name, const struct ENUM_LIST *r);
void ndr_print_GROUP_ENUM_ENTRY(struct ndr_print *ndr, const char *name, const struct GROUP_ENUM_ENTRY *r);
void ndr_print_RESOURCE_ENUM_ENTRY(struct ndr_print *ndr, const char *name, const struct RESOURCE_ENUM_ENTRY *r);
void ndr_print_GROUP_ENUM_LIST(struct ndr_print *ndr, const char *name, const struct GROUP_ENUM_LIST *r);
void ndr_print_RESOURCE_ENUM_LIST(struct ndr_print *ndr, const char *name, const struct RESOURCE_ENUM_LIST *r);
void ndr_print_clusapi_CreateResourceFlags(struct ndr_print *ndr, const char *name, enum clusapi_CreateResourceFlags r);
void ndr_print_clusapi_ClusterResourceState(struct ndr_print *ndr, const char *name, enum clusapi_ClusterResourceState r);
void ndr_print_clusapi_ClusterGroupState(struct ndr_print *ndr, const char *name, enum clusapi_ClusterGroupState r);
void ndr_print_clusapi_ClusterNodeState(struct ndr_print *ndr, const char *name, enum clusapi_ClusterNodeState r);
void ndr_print_clusapi_GroupControlCode(struct ndr_print *ndr, const char *name, enum clusapi_GroupControlCode r);
void ndr_print_clusapi_NodeControlCode(struct ndr_print *ndr, const char *name, enum clusapi_NodeControlCode r);
void ndr_print_clusapi_ClusterNetworkState(struct ndr_print *ndr, const char *name, enum clusapi_ClusterNetworkState r);
void ndr_print_clusapi_ClusterNetInterfaceState(struct ndr_print *ndr, const char *name, enum clusapi_ClusterNetInterfaceState r);
void ndr_print_clusapi_ClusterControlCode(struct ndr_print *ndr, const char *name, enum clusapi_ClusterControlCode r);
void ndr_print_CLUSTER_PROPERTY_SYNTAX(struct ndr_print *ndr, const char *name, enum CLUSTER_PROPERTY_SYNTAX r);
void ndr_print_clusapi_propertyValues(struct ndr_print *ndr, const char *name, const struct clusapi_propertyValues *r);
void ndr_print_clusapi_propertyValue(struct ndr_print *ndr, const char *name, const struct clusapi_propertyValue *r);
enum ndr_err_code ndr_push_clusapi_PROPERTY_LIST(struct ndr_push *ndr, int ndr_flags, const struct clusapi_PROPERTY_LIST *r);
enum ndr_err_code ndr_pull_clusapi_PROPERTY_LIST(struct ndr_pull *ndr, int ndr_flags, struct clusapi_PROPERTY_LIST *r);
void ndr_print_clusapi_PROPERTY_LIST(struct ndr_print *ndr, const char *name, const struct clusapi_PROPERTY_LIST *r);
void ndr_print_clusapi_DesiredAccessMask(struct ndr_print *ndr, const char *name, uint32_t r);
void ndr_print_NOTIFY_FILTER_AND_TYPE_RPC(struct ndr_print *ndr, const char *name, const struct NOTIFY_FILTER_AND_TYPE_RPC *r);
void ndr_print_NOTIFICATION_DATA_RPC(struct ndr_print *ndr, const char *name, const struct NOTIFICATION_DATA_RPC *r);
void ndr_print_NOTIFICATION_RPC(struct ndr_print *ndr, const char *name, const struct NOTIFICATION_RPC *r);
void ndr_print_CLUSTER_DISKID(struct ndr_print *ndr, const char *name, const struct CLUSTER_DISKID *r);
void ndr_print_CLUSTER_MRR_NODE_RESPONSE(struct ndr_print *ndr, const char *name, const struct CLUSTER_MRR_NODE_RESPONSE *r);
void ndr_print_CLUSTER_MRR_RESPONSE(struct ndr_print *ndr, const char *name, const struct CLUSTER_MRR_RESPONSE *r);
void ndr_print_NOTIFICATION_DATA_ASYNC_RPC(struct ndr_print *ndr, const char *name, const struct NOTIFICATION_DATA_ASYNC_RPC *r);
void ndr_print_clusapi_OpenCluster(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenCluster *r);
void ndr_print_clusapi_CloseCluster(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CloseCluster *r);
void ndr_print_clusapi_SetClusterName(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_SetClusterName *r);
void ndr_print_clusapi_GetClusterName(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetClusterName *r);
void ndr_print_clusapi_GetClusterVersion(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetClusterVersion *r);
void ndr_print_clusapi_GetQuorumResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetQuorumResource *r);
void ndr_print_clusapi_SetQuorumResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_SetQuorumResource *r);
void ndr_print_clusapi_CreateEnum(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateEnum *r);
void ndr_print_clusapi_OpenResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenResource *r);
void ndr_print_clusapi_CreateResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateResource *r);
void ndr_print_clusapi_DeleteResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_DeleteResource *r);
void ndr_print_clusapi_CloseResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CloseResource *r);
void ndr_print_clusapi_GetResourceState(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetResourceState *r);
void ndr_print_clusapi_SetResourceName(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_SetResourceName *r);
void ndr_print_clusapi_GetResourceId(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetResourceId *r);
void ndr_print_clusapi_GetResourceType(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetResourceType *r);
void ndr_print_clusapi_FailResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_FailResource *r);
void ndr_print_clusapi_OnlineResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OnlineResource *r);
void ndr_print_clusapi_OfflineResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OfflineResource *r);
void ndr_print_clusapi_AddResourceDependency(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_AddResourceDependency *r);
void ndr_print_clusapi_RemoveResourceDependency(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_RemoveResourceDependency *r);
void ndr_print_clusapi_CanResourceBeDependent(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CanResourceBeDependent *r);
void ndr_print_clusapi_CreateResEnum(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateResEnum *r);
void ndr_print_clusapi_AddResourceNode(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_AddResourceNode *r);
void ndr_print_clusapi_RemoveResourceNode(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_RemoveResourceNode *r);
void ndr_print_clusapi_ChangeResourceGroup(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ChangeResourceGroup *r);
void ndr_print_clusapi_CreateResourceType(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateResourceType *r);
void ndr_print_clusapi_DeleteResourceType(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_DeleteResourceType *r);
void ndr_print_clusapi_GetRootKey(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetRootKey *r);
void ndr_print_clusapi_CreateKey(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateKey *r);
void ndr_print_clusapi_OpenKey(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenKey *r);
void ndr_print_clusapi_EnumKey(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_EnumKey *r);
void ndr_print_clusapi_SetValue(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_SetValue *r);
void ndr_print_clusapi_DeleteValue(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_DeleteValue *r);
void ndr_print_clusapi_QueryValue(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_QueryValue *r);
void ndr_print_clusapi_DeleteKey(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_DeleteKey *r);
void ndr_print_clusapi_EnumValue(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_EnumValue *r);
void ndr_print_clusapi_CloseKey(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CloseKey *r);
void ndr_print_clusapi_QueryInfoKey(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_QueryInfoKey *r);
void ndr_print_clusapi_SetKeySecurity(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_SetKeySecurity *r);
void ndr_print_clusapi_GetKeySecurity(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetKeySecurity *r);
void ndr_print_clusapi_OpenGroup(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenGroup *r);
void ndr_print_clusapi_CreateGroup(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateGroup *r);
void ndr_print_clusapi_DeleteGroup(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_DeleteGroup *r);
void ndr_print_clusapi_CloseGroup(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CloseGroup *r);
void ndr_print_clusapi_GetGroupState(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetGroupState *r);
void ndr_print_clusapi_SetGroupName(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_SetGroupName *r);
void ndr_print_clusapi_GetGroupId(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetGroupId *r);
void ndr_print_clusapi_GetNodeId(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetNodeId *r);
void ndr_print_clusapi_OnlineGroup(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OnlineGroup *r);
void ndr_print_clusapi_OfflineGroup(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OfflineGroup *r);
void ndr_print_clusapi_MoveGroup(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_MoveGroup *r);
void ndr_print_clusapi_MoveGroupToNode(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_MoveGroupToNode *r);
void ndr_print_clusapi_CreateGroupResourceEnum(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateGroupResourceEnum *r);
void ndr_print_clusapi_SetGroupNodeList(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_SetGroupNodeList *r);
void ndr_print_clusapi_CreateNotify(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateNotify *r);
void ndr_print_clusapi_CloseNotify(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CloseNotify *r);
void ndr_print_clusapi_AddNotifyCluster(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_AddNotifyCluster *r);
void ndr_print_clusapi_AddNotifyNode(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_AddNotifyNode *r);
void ndr_print_clusapi_AddNotifyGroup(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_AddNotifyGroup *r);
void ndr_print_clusapi_AddNotifyResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_AddNotifyResource *r);
void ndr_print_clusapi_AddNotifyKey(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_AddNotifyKey *r);
void ndr_print_clusapi_ReAddNotifyNode(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ReAddNotifyNode *r);
void ndr_print_clusapi_ReAddNotifyGroup(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ReAddNotifyGroup *r);
void ndr_print_clusapi_ReAddNotifyResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ReAddNotifyResource *r);
void ndr_print_clusapi_GetNotify(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetNotify *r);
void ndr_print_clusapi_OpenNode(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenNode *r);
void ndr_print_clusapi_CloseNode(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CloseNode *r);
void ndr_print_clusapi_GetNodeState(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetNodeState *r);
void ndr_print_clusapi_PauseNode(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_PauseNode *r);
void ndr_print_clusapi_ResumeNode(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ResumeNode *r);
void ndr_print_clusapi_EvictNode(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_EvictNode *r);
void ndr_print_clusapi_NodeResourceControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_NodeResourceControl *r);
void ndr_print_clusapi_ResourceControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ResourceControl *r);
void ndr_print_clusapi_NodeResourceTypeControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_NodeResourceTypeControl *r);
void ndr_print_clusapi_ResourceTypeControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ResourceTypeControl *r);
void ndr_print_clusapi_NodeGroupControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_NodeGroupControl *r);
void ndr_print_clusapi_GroupControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GroupControl *r);
void ndr_print_clusapi_NodeNodeControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_NodeNodeControl *r);
void ndr_print_clusapi_NodeControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_NodeControl *r);
void ndr_print_Opnum80NotUsedOnWire(struct ndr_print *ndr, const char *name, int flags, const struct Opnum80NotUsedOnWire *r);
void ndr_print_clusapi_OpenNetwork(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenNetwork *r);
void ndr_print_clusapi_CloseNetwork(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CloseNetwork *r);
void ndr_print_clusapi_GetNetworkState(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetNetworkState *r);
void ndr_print_clusapi_SetNetworkName(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_SetNetworkName *r);
void ndr_print_clusapi_CreateNetworkEnum(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateNetworkEnum *r);
void ndr_print_clusapi_GetNetworkId(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetNetworkId *r);
void ndr_print_clusapi_SetNetworkPriorityOrder(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_SetNetworkPriorityOrder *r);
void ndr_print_clusapi_NodeNetworkControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_NodeNetworkControl *r);
void ndr_print_clusapi_NetworkControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_NetworkControl *r);
void ndr_print_clusapi_AddNotifyNetwork(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_AddNotifyNetwork *r);
void ndr_print_clusapi_ReAddNotifyNetwork(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ReAddNotifyNetwork *r);
void ndr_print_clusapi_OpenNetInterface(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenNetInterface *r);
void ndr_print_clusapi_CloseNetInterface(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CloseNetInterface *r);
void ndr_print_clusapi_GetNetInterfaceState(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetNetInterfaceState *r);
void ndr_print_clusapi_GetNetInterface(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetNetInterface *r);
void ndr_print_clusapi_GetNetInterfaceId(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetNetInterfaceId *r);
void ndr_print_clusapi_NodeNetInterfaceControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_NodeNetInterfaceControl *r);
void ndr_print_clusapi_NetInterfaceControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_NetInterfaceControl *r);
void ndr_print_clusapi_AddNotifyNetInterface(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_AddNotifyNetInterface *r);
void ndr_print_clusapi_ReAddNotifyNetInterface(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ReAddNotifyNetInterface *r);
void ndr_print_clusapi_CreateNodeEnum(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateNodeEnum *r);
void ndr_print_clusapi_GetClusterVersion2(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetClusterVersion2 *r);
void ndr_print_clusapi_CreateResTypeEnum(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateResTypeEnum *r);
void ndr_print_clusapi_BackupClusterDatabase(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_BackupClusterDatabase *r);
void ndr_print_clusapi_NodeClusterControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_NodeClusterControl *r);
void ndr_print_clusapi_ClusterControl(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ClusterControl *r);
void ndr_print_clusapi_UnblockGetNotifyCall(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_UnblockGetNotifyCall *r);
void ndr_print_clusapi_SetServiceAccountPassword(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_SetServiceAccountPassword *r);
void ndr_print_clusapi_SetResourceDependencyExpression(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_SetResourceDependencyExpression *r);
void ndr_print_clusapi_GetResourceDependencyExpression(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetResourceDependencyExpression *r);
void ndr_print_Opnum111NotUsedOnWire(struct ndr_print *ndr, const char *name, int flags, const struct Opnum111NotUsedOnWire *r);
void ndr_print_clusapi_GetResourceNetworkName(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetResourceNetworkName *r);
void ndr_print_clusapi_ExecuteBatch(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ExecuteBatch *r);
void ndr_print_clusapi_CreateBatchPort(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateBatchPort *r);
void ndr_print_clusapi_GetBatchNotification(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetBatchNotification *r);
void ndr_print_clusapi_CloseBatchPort(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CloseBatchPort *r);
void ndr_print_clusapi_OpenClusterEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenClusterEx *r);
void ndr_print_clusapi_OpenNodeEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenNodeEx *r);
void ndr_print_clusapi_OpenGroupEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenGroupEx *r);
void ndr_print_clusapi_OpenResourceEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenResourceEx *r);
void ndr_print_clusapi_OpenNetworkEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenNetworkEx *r);
void ndr_print_clusapi_OpenNetInterfaceEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OpenNetInterfaceEx *r);
void ndr_print_clusapi_ChangeCsvState(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ChangeCsvState *r);
void ndr_print_clusapi_CreateNodeEnumEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateNodeEnumEx *r);
void ndr_print_clusapi_CreateEnumEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateEnumEx *r);
void ndr_print_clusapi_PauseNodeEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_PauseNodeEx *r);
void ndr_print_clusapi_PauseNodeWithDrainTarget(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_PauseNodeWithDrainTarget *r);
void ndr_print_clusapi_ResumeNodeEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ResumeNodeEx *r);
void ndr_print_clusapi_CreateGroupEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateGroupEx *r);
void ndr_print_clusapi_OnlineGroupEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OnlineGroupEx *r);
void ndr_print_clusapi_OfflineGroupEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OfflineGroupEx *r);
void ndr_print_clusapi_MoveGroupEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_MoveGroupEx *r);
void ndr_print_clusapi_MoveGroupToNodeEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_MoveGroupToNodeEx *r);
void ndr_print_clusapi_CancelClusterGroupOperation(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CancelClusterGroupOperation *r);
void ndr_print_clusapi_OnlineResourceEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OnlineResourceEx *r);
void ndr_print_clusapi_OfflineResourceEx(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_OfflineResourceEx *r);
void ndr_print_clusapi_CreateNotifyV2(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateNotifyV2 *r);
void ndr_print_clusapi_AddNotifyV2(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_AddNotifyV2 *r);
void ndr_print_clusapi_GetNotifyV2(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetNotifyV2 *r);
void ndr_print_clusapi_QueryAllValues(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_QueryAllValues *r);
void ndr_print_clusapi_StmFindDisk(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_StmFindDisk *r);
void ndr_print_clusapi_ClusterMrr(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ClusterMrr *r);
void ndr_print_clusapi_CreateGroupEnum(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateGroupEnum *r);
void ndr_print_clusapi_CreateResourceEnum(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_CreateResourceEnum *r);
void ndr_print_clusapi_ExecuteReadBatch(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_ExecuteReadBatch *r);
void ndr_print_clusapi_RestartResource(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_RestartResource *r);
void ndr_print_clusapi_GetNotifyAsync(struct ndr_print *ndr, const char *name, int flags, const struct clusapi_GetNotifyAsync *r);
#endif /* _HEADER_NDR_clusapi */
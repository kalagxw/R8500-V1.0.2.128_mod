/* server functions auto-generated by pidl */
#include "bin/default/source4/librpc/gen_ndr/ndr_sasl_helpers.h"
#include <util/debug.h>

NTSTATUS dcerpc_server_sasl_helpers_init(void);

/* sasl_helpers - dcerpc server boilerplate generated by pidl */


static NTSTATUS sasl_helpers__op_bind(struct dcesrv_call_state *dce_call, const struct dcesrv_interface *iface, uint32_t if_version)
{
#ifdef DCESRV_INTERFACE_SASL_HELPERS_BIND
	return DCESRV_INTERFACE_SASL_HELPERS_BIND(dce_call,iface);
#else
	return NT_STATUS_OK;
#endif
}

static void sasl_helpers__op_unbind(struct dcesrv_connection_context *context, const struct dcesrv_interface *iface)
{
#ifdef DCESRV_INTERFACE_SASL_HELPERS_UNBIND
	DCESRV_INTERFACE_SASL_HELPERS_UNBIND(context, iface);
#else
	return;
#endif
}

static NTSTATUS sasl_helpers__op_ndr_pull(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_pull *pull, void **r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	dce_call->fault_code = 0;

	if (opnum >= ndr_table_sasl_helpers.num_calls) {
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	*r = talloc_named(mem_ctx,
			  ndr_table_sasl_helpers.calls[opnum].struct_size,
			  "struct %s",
			  ndr_table_sasl_helpers.calls[opnum].name);
	NT_STATUS_HAVE_NO_MEMORY(*r);

        /* unravel the NDR for the packet */
	ndr_err = ndr_table_sasl_helpers.calls[opnum].ndr_pull(pull, NDR_IN, *r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
				  &ndr_table_sasl_helpers, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS sasl_helpers__op_dispatch(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct decode_saslauthd *r2 = (struct decode_saslauthd *)r;
		if (DEBUGLEVEL >= 10) {
			NDR_PRINT_FUNCTION_DEBUG(decode_saslauthd, NDR_IN, r2);
		}
		dcesrv_decode_saslauthd(dce_call, mem_ctx, r2);
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_saslauthd will reply async\n"));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir, 
		          &ndr_table_sasl_helpers, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS sasl_helpers__op_reply(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, void *r)
{
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	switch (opnum) {
	case 0: {
		struct decode_saslauthd *r2 = (struct decode_saslauthd *)r;
		if (dce_call->state_flags & DCESRV_CALL_STATE_FLAG_ASYNC) {
			DEBUG(5,("function decode_saslauthd replied async\n"));
		}
		if (DEBUGLEVEL >= 10 && dce_call->fault_code == 0) {
			NDR_PRINT_FUNCTION_DEBUG(decode_saslauthd, NDR_OUT | NDR_SET_VALUES, r2);
		}
		if (dce_call->fault_code != 0) {
			DEBUG(2,("dcerpc_fault %s in decode_saslauthd\n", dcerpc_errstr(mem_ctx, dce_call->fault_code)));
		}
		break;
	}

	default:
		dce_call->fault_code = DCERPC_FAULT_OP_RNG_ERROR;
		break;
	}

	if (dce_call->fault_code != 0) {
		dcerpc_log_packet(dce_call->conn->packet_log_dir,
		          &ndr_table_sasl_helpers, opnum, NDR_IN,
				  &dce_call->pkt.u.request.stub_and_verifier);
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

static NTSTATUS sasl_helpers__op_ndr_push(struct dcesrv_call_state *dce_call, TALLOC_CTX *mem_ctx, struct ndr_push *push, const void *r)
{
	enum ndr_err_code ndr_err;
	uint16_t opnum = dce_call->pkt.u.request.opnum;

	ndr_err = ndr_table_sasl_helpers.calls[opnum].ndr_push(push, NDR_OUT, r);
	if (!NDR_ERR_CODE_IS_SUCCESS(ndr_err)) {
		dce_call->fault_code = DCERPC_FAULT_NDR;
		return NT_STATUS_NET_WRITE_FAULT;
	}

	return NT_STATUS_OK;
}

const struct dcesrv_interface dcesrv_sasl_helpers_interface = {
	.name		= "sasl_helpers",
	.syntax_id  = {{0x7512b2f4,0x5f4f,0x11e4,{0xbb,0xe6},{0x3c,0x97,0x0e,0x8d,0x82,0x26}},1.0},
	.bind		= sasl_helpers__op_bind,
	.unbind		= sasl_helpers__op_unbind,
	.ndr_pull	= sasl_helpers__op_ndr_pull,
	.dispatch	= sasl_helpers__op_dispatch,
	.reply		= sasl_helpers__op_reply,
	.ndr_push	= sasl_helpers__op_ndr_push
};


static NTSTATUS sasl_helpers__op_init_server(struct dcesrv_context *dce_ctx, const struct dcesrv_endpoint_server *ep_server)
{
	int i;

	for (i=0;i<ndr_table_sasl_helpers.endpoints->count;i++) {
		NTSTATUS ret;
		const char *name = ndr_table_sasl_helpers.endpoints->names[i];

		ret = dcesrv_interface_register(dce_ctx, name, &dcesrv_sasl_helpers_interface, NULL);
		if (!NT_STATUS_IS_OK(ret)) {
			DEBUG(1,("sasl_helpers_op_init_server: failed to register endpoint '%s'\n",name));
			return ret;
		}
	}

	return NT_STATUS_OK;
}

static bool sasl_helpers__op_interface_by_uuid(struct dcesrv_interface *iface, const struct GUID *uuid, uint32_t if_version)
{
	if (dcesrv_sasl_helpers_interface.syntax_id.if_version == if_version &&
		GUID_equal(&dcesrv_sasl_helpers_interface.syntax_id.uuid, uuid)) {
		memcpy(iface,&dcesrv_sasl_helpers_interface, sizeof(*iface));
		return true;
	}

	return false;
}

static bool sasl_helpers__op_interface_by_name(struct dcesrv_interface *iface, const char *name)
{
	if (strcmp(dcesrv_sasl_helpers_interface.name, name)==0) {
		memcpy(iface, &dcesrv_sasl_helpers_interface, sizeof(*iface));
		return true;
	}

	return false;
}

NTSTATUS dcerpc_server_sasl_helpers_init(void)
{
	NTSTATUS ret;
	struct dcesrv_endpoint_server ep_server;

	/* fill in our name */
	ep_server.name = "sasl_helpers";

	/* fill in all the operations */
	ep_server.init_server = sasl_helpers__op_init_server;

	ep_server.interface_by_uuid = sasl_helpers__op_interface_by_uuid;
	ep_server.interface_by_name = sasl_helpers__op_interface_by_name;

	/* register ourselves with the DCERPC subsystem. */
	ret = dcerpc_register_ep_server(&ep_server);

	if (!NT_STATUS_IS_OK(ret)) {
		DEBUG(0,("Failed to register 'sasl_helpers' endpoint server!\n"));
		return ret;
	}

	return ret;
}

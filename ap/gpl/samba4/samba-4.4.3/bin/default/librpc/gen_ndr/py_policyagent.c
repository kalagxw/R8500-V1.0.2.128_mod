
/* Python wrapper functions auto-generated by pidl */
#define PY_SSIZE_T_CLEAN 1 /* We use Py_ssize_t for PyArg_ParseTupleAndKeywords */
#include <Python.h>
#include "includes.h"
#include <pytalloc.h>
#include "librpc/rpc/pyrpc.h"
#include "librpc/rpc/pyrpc_util.h"
#include "bin/default/librpc/gen_ndr/ndr_policyagent.h"
#include "bin/default/librpc/gen_ndr/ndr_policyagent_c.h"

/*
 * These functions are here to ensure they can be optomised out by
 * the compiler based on the constant input values
 */

static inline unsigned long long ndr_sizeof2uintmax(size_t var_size)
{
	switch (var_size) {
	case 8:
		return UINT64_MAX;
	case 4:
		return UINT32_MAX;
	case 2:
		return UINT16_MAX;
	case 1:
		return UINT8_MAX;
	}

	return 0;
}

static inline long long ndr_sizeof2intmax(size_t var_size)
{
	switch (var_size) {
	case 8:
		return INT64_MAX;
	case 4:
		return INT32_MAX;
	case 2:
		return INT16_MAX;
	case 1:
		return INT8_MAX;
	}

	return 0;
}

static inline PyObject *ndr_PyLong_FromLongLong(long long v)
{
	if (v > LONG_MAX || v < LONG_MIN) {
		return PyLong_FromLongLong(v);
	} else {
		return PyInt_FromLong(v);
	}
}

static inline PyObject *ndr_PyLong_FromUnsignedLongLong(unsigned long long v)
{
	if (v > LONG_MAX) {
		return PyLong_FromUnsignedLongLong(v);
	} else {
		return PyInt_FromLong(v);
	}
}

static PyTypeObject policyagent_InterfaceType;

void initpolicyagent(void);static PyTypeObject *ClientConnection_Type;
static PyTypeObject *ndr_syntax_id_Type;

const struct PyNdrRpcMethodDef py_ndr_policyagent_methods[] = {
	{ NULL }
};

static PyObject *interface_policyagent_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_interface_init_helper(type, args, kwargs, &ndr_table_policyagent);
}

#define PY_DOC_POLICYAGENT "IPSec Policy Agent"
static PyTypeObject policyagent_InterfaceType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "policyagent.policyagent",
	.tp_basicsize = sizeof(dcerpc_InterfaceObject),
	.tp_doc = "policyagent(binding, lp_ctx=None, credentials=None) -> connection\n"
"\n"
"binding should be a DCE/RPC binding string (for example: ncacn_ip_tcp:127.0.0.1)\n"
"lp_ctx should be a path to a smb.conf file or a param.LoadParm object\n"
"credentials should be a credentials.Credentials object.\n\n"PY_DOC_POLICYAGENT,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = interface_policyagent_new,
};

static PyObject *syntax_policyagent_new(PyTypeObject *type, PyObject *args, PyObject *kwargs)
{
	return py_dcerpc_syntax_init_helper(type, args, kwargs, &ndr_table_policyagent.syntax_id);
}

#define PY_DOC_POLICYAGENT_SYNTAX "IPSec Policy Agent"
static PyTypeObject policyagent_SyntaxType = {
	PyObject_HEAD_INIT(NULL) 0,
	.tp_name = "policyagent.policyagent",
	.tp_doc = "abstract_syntax()\n"PY_DOC_POLICYAGENT_SYNTAX,
	.tp_flags = Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	.tp_new = syntax_policyagent_new,
};

static PyMethodDef policyagent_methods[] = {
	{ NULL, NULL, 0, NULL }
};

void initpolicyagent(void)
{
	PyObject *m;
	PyObject *dep_samba_dcerpc_base;
	PyObject *dep_samba_dcerpc_misc;

	dep_samba_dcerpc_base = PyImport_ImportModule("samba.dcerpc.base");
	if (dep_samba_dcerpc_base == NULL)
		return;

	dep_samba_dcerpc_misc = PyImport_ImportModule("samba.dcerpc.misc");
	if (dep_samba_dcerpc_misc == NULL)
		return;

	ClientConnection_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_base, "ClientConnection");
	if (ClientConnection_Type == NULL)
		return;

	ndr_syntax_id_Type = (PyTypeObject *)PyObject_GetAttrString(dep_samba_dcerpc_misc, "ndr_syntax_id");
	if (ndr_syntax_id_Type == NULL)
		return;

	policyagent_InterfaceType.tp_base = ClientConnection_Type;

	policyagent_SyntaxType.tp_base = ndr_syntax_id_Type;
	policyagent_SyntaxType.tp_basicsize = pytalloc_BaseObject_size();

	if (PyType_Ready(&policyagent_InterfaceType) < 0)
		return;
	if (PyType_Ready(&policyagent_SyntaxType) < 0)
		return;
	if (!PyInterface_AddNdrRpcMethods(&policyagent_InterfaceType, py_ndr_policyagent_methods))
		return;

#ifdef PY_POLICYAGENT_PATCH
	PY_POLICYAGENT_PATCH(&policyagent_InterfaceType);
#endif
#ifdef PY_ABSTRACT_SYNTAX_PATCH
	PY_ABSTRACT_SYNTAX_PATCH(&policyagent_SyntaxType);
#endif

	m = Py_InitModule3("policyagent", policyagent_methods, "policyagent DCE/RPC");
	if (m == NULL)
		return;

	Py_INCREF((PyObject *)(void *)&policyagent_InterfaceType);
	PyModule_AddObject(m, "policyagent", (PyObject *)(void *)&policyagent_InterfaceType);
	Py_INCREF((PyObject *)(void *)&policyagent_SyntaxType);
	PyModule_AddObject(m, "abstract_syntax", (PyObject *)(void *)&policyagent_SyntaxType);
#ifdef PY_MOD_POLICYAGENT_PATCH
	PY_MOD_POLICYAGENT_PATCH(m);
#endif

}
#include <Python.h>

static PyObject * modulo_soma(PyObject *self, PyObject *args) {
    int v1, v2;

    if (! PyArg_ParseTuple(args, "ll", &v1, &v2))
        return NULL;

    return PyLong_FromLong(v1 + v2);
};

static PyMethodDef moduloMethods[] = {
    {"soma", modulo_soma, METH_VARARGS, "Soma 2 numeros"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef modulo_def = {
    PyModuleDef_HEAD_INIT,
    "modulo",
    NULL,  /* documentacao */
    -1,
    moduloMethods
};

PyMODINIT_FUNC PyInit_modulo(void) {
    return PyModule_Create(&modulo_def);
};

#define PY_SSIZE_T_CLEAN

#include <Python.h>

int

main(int argc, char *argv[])

{

    wchar_t *program = Py_DecodeLocale(argv[0], NULL);

    if (program == NULL) {

        fprintf(stderr, "Fatal error: cannot decode argv[0]\n");

        exit(1);

    }

    Py_SetProgramName(program);  /* optional but recommended */

    Py_Initialize();

    PyRun_SimpleString("print('Hello Body')");

    if (Py_FinalizeEx() < 0) {

        exit(120);

    }

    PyMem_RawFree(program);

    (void)argc;

    return 0;

}

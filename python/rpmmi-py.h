#ifndef H_RPMMI_PY
#define H_RPMMI_PY

/** \ingroup python
 * \file python/rpmmi-py.h
 */

/** \ingroup python
 */
typedef struct rpmmiObject_s rpmmiObject;

/** \ingroup python
 */
struct rpmmiObject_s {
    PyObject_HEAD
    PyObject *md_dict;		/*!< to look like PyModuleObject */
    rpmdbMatchIterator mi;
} ;

/*@unchecked@*/
extern PyTypeObject rpmmi_Type;

rpmmiObject * rpmmi_Wrap(rpmdbMatchIterator mi)
	/*@*/;

#endif

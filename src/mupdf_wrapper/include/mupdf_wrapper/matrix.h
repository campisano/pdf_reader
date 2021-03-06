#ifndef MUPDF_WRAPPER_MATRIX_H
#define MUPDF_WRAPPER_MATRIX_H

#include "mupdf_wrapper.h"

#include <mupdf/fitz.h>

namespace mupdf_wrapper
{
    class MUPDF_WRAPPER_EXPORT Matrix
    {
        fz_matrix* m_mupdf_matrix;

    public:
        Matrix();
        ~Matrix();
        const fz_matrix* get() const;
        void set_zoom(unsigned int zoom) const;
        void set_rotation(float rotation) const;
    };
}

#endif

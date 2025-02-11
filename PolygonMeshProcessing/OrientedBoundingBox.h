//
//  OrientedBoundingBox.h
//  CGAL.Native
//
//  Created by Gil Sunshine on 2/10/25.
//

#pragma once
#include "../CGAL_Native.h"

#ifndef ORIENTEDBOUNDINGBOX_H
#define ORIENTEDBOUNDINGBOX_H

#ifdef __cplusplus
extern "C" {
#endif

void OrientedBoundingBoxBySurfaceMesh(
    double* vert_xyz_array, size_t vert_count, /* input - mesh vertices */
    int* face_index_array, size_t faces_count, /* input - mesh faces */
    double*& obb_pts_xyz
);

void ReleaseDoubleArray(double* arr);
#ifdef __cplusplus
}
#endif

#endif // ORIENTEDBOUNDINGBOX_H

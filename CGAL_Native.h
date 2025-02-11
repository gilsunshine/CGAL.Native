//
//  CGAL_Native.h
//  CGAL.Native
//
//  Created by Gil Sunshine on 2/7/25.
//

# pragma once

//#define CGALNATIVE_API __declspec(dllexport)

#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Cartesian/Cartesian_base.h>
#include <CGAL/Kernel/global_functions.h>
#include <CGAL/Kernel/global_functions_3.h>
#include <CGAL/Eigen_solver_traits.h>

#include <CGAL/Polygon_2.h>
#include <CGAL/Polygon_with_holes_2.h>
#include <CGAL/Point_2.h>

#include <CGAL/Surface_mesh.h>
#include <CGAL/optimal_bounding_box.h>

typedef CGAL::Exact_predicates_inexact_constructions_kernel Kernel;
typedef CGAL::Surface_mesh<Kernel::Point_3> Surface_mesh;
typedef Kernel::Point_3 Point;
typedef Surface_mesh::Vertex_index Vertex_index;


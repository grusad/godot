#ifndef DONUT_H
#define DONUT_H

#include "scene/resources/primitive_meshes.h"

class DonutMesh : public PrimitiveMesh {
    GDCLASS(DonutMesh, PrimitiveMesh);

private:
    float inner_radius;
    float outer_radius;
    int rings;
    int segments;

protected:
    static void _bind_methods();
    virtual void _create_mesh_array(Array &p_arr) const;

public:
    void set_radius(const float p_radius);
    float get_radius() const;

    DonutMesh();
};

#endif
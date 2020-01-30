#include "donut.h"

void DonutMesh::set_radius(const float p_radius){
    outer_radius = p_radius;
    inner_radius = p_radius / 2;
    ERR_FAIL_MSG("blaH");
}

float DonutMesh::get_radius() const {
    return outer_radius;
}

void DonutMesh::_create_mesh_array(Array &p_arr) const {

}

void DonutMesh::_bind_methods() {
	ClassDB::bind_method(D_METHOD("set_radius", "radius"), &DonutMesh::set_radius);
	ClassDB::bind_method(D_METHOD("get_radius"), &DonutMesh::get_radius);
	

	ADD_PROPERTY(PropertyInfo(Variant::REAL, "radius", PROPERTY_HINT_RANGE, "1,50,1"), "set_radius", "get_radius");
	
}

DonutMesh::DonutMesh(){
    inner_radius = 1;
    outer_radius = 1;
    rings = 1;
    segments = 1;
}
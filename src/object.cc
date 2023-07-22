#include <tengine/object.hh>

using namespace tengine;

GameObject::GameObject() { this->mesh.setTransform(&(this->transform)); }
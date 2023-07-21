#include <tengine/object.hh>

using namespace tengine;

GameObject::GameObject() { this->mesh.setTransform(&(this->transform)); }

void GameObject::setTransform(Transform2D t) { this->transform = t; }
project('tengine', 'cpp',
  version: '0.1.0',
  default_options: ['cpp_std=c++20'])

add_global_arguments(
  '-DTENGINE_VERSION=@0@'.format(meson.project_version()),
  language: 'cpp')

################################################################

tengine_src = files(
  'src/app.cc',
  'src/behaviour.cc',
  'src/logger.cc',
  'src/mesh_renderer.cc',
  'src/object.cc',
  'src/rigidbody2d.cc',
  'src/tokina.cc',
  'src/transform2d.cc',
  'src/vec2.cc',
  'src/vec3.cc',
)

tengine_deps = [
  dependency('gl'),
  dependency('glfw3'),
  dependency('glew'),
  dependency('glm'),
]

tengine_inc = include_directories('include')

tengine = library('tengine', tengine_src,
  dependencies: tengine_deps,
  include_directories: tengine_inc,
  install: true)

################################################################

subdir('example')

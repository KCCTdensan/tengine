project('tengine', 'cpp',
  version: '0.1.0',
  default_options: ['cpp_std=c++20'])

ver = meson.project_version()
add_global_arguments(f'-DVERSION=@ver@', language: 'cpp')

src = [
  'src/app.cc',
  'src/behaviour.cc',
  'src/logger.cc',
  'src/object.cc',
  'src/rigidbody2d.cc',
  'src/tokina.cc',
  'src/transform2d.cc',
  'src/vec2.cc',
]

deps = [
  dependency('gl'),
  dependency('glfw3'),
  dependency('glew'),
  dependency('glm'),
]

inc = include_directories('include')

tengine = library('tengine', src,
  dependencies: deps,
  include_directories: inc,
  install: true)

subdir('example')

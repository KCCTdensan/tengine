project('tengine', 'cpp',
  default_options: ['cpp_std=c++20'])

src = [
  'src/app.cc',
  'src/common.cc',
  'src/logger.cc',
  'src/window.cc',
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

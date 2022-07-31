project('tengine', 'cpp',
  default_options: ['cpp_std=c++20'])

haeders = [
  'include/app.hh',
  'include/common.hh',
  'include/logger.hh',
  'include/window.hh',
]

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
library('tengine', src,
        include_directories: inc,
        dependencies: deps,
        install: true)

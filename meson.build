project('tengine', 'cpp')

haeders = [
  'include/common.hh',
]

src = [
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

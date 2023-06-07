src = files(
  '2d/box_collider.cc',

  'core/app.cc',
  'core/logger.cc',

  'behaviour.cc',
  'object.cc',
  'rigidbody2d.cc',
  'tokina.cc',
  'transform2d.cc',
  'vec2.cc',
)

deps = [
  dependency('gl'),
  dependency('glfw3'),
  dependency('glew'),
  dependency('glm'),
]

tengine = library('tengine', src,
  dependencies: deps,
  include_directories: inc,
  install: true)

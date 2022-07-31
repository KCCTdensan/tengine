project('example', 'cpp')

# tengine = dependency('tengine')
tengine = declare_dependency(
  include_directories: ['include'],
  link_with: shared_library('tengine'))

executable('example', 'app.cc', dependencies: tengine)

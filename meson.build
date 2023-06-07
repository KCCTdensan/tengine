project('tengine', 'cpp',
  version: '0.1.0',
  default_options: ['cpp_std=c++20'])

ver = meson.project_version()
add_global_arguments(f'-DTENGINE_VERSION=@ver@', language: 'cpp')

inc = include_directories('include')

subdir('src')
subdir('example')

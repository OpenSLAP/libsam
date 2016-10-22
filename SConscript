import os

Import('global_env')
env = global_env.Clone()

libname = 'libarduino'

# include system library gcc-arm stdlib
libsam_deep_cpp_include = '{}/c++/{}'.format(env['STDLIB_INCLUDE'], env['GCC_VERSION'])
INCLUDE_PATHS = [
    env['STDLIB_INCLUDE'],
    libsam_deep_cpp_include,
    os.path.join(libsam_deep_cpp_include, 'arm-none-eabi', env['CHIP_FAMILY']),
]
env.Prepend(CFLAGS = ['-I{}'.format(x) for x in INCLUDE_PATHS])
env.Prepend(CXXFLAGS = ['-I{}'.format(x) for x in INCLUDE_PATHS])


LIB_PATHS = [
    os.path.join(env['STDLIB_INCLUDE'], '../lib/'),
]
env.Prepend(CFLAGS = ['-L{}'.format(x) for x in LIB_PATHS])
env.Prepend(CXXFLAGS = ['-L{}'.format(x) for x in LIB_PATHS])


# get the source files
sources = []
sources.extend(env.get_files(Dir('.').srcnode().abspath, "c"))
sources.extend(env.get_files(Dir('.').srcnode().abspath, "cpp"))


# make objects of them
lib_obj = env.Object(sources)

# and link into a static library
lib = env.StaticLibrary(libname, lib_obj)
Return('lib')

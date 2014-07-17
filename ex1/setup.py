from distutils.core import setup, Extension

modulo = Extension("modulo", sources=['modulo.c'])

setup(ext_modules=[modulo])

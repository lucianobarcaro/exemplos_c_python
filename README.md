exemplos_c_python
=================

Exemplos de integração C e Python




ex1
---
modulo.c - Exemplo de um módulo simples, composto de um único programa em C com uma função para retornar a soma entre 2 valores inteiros.
setup.py - instalador do módulo (para você não se preocupar com a sujeira dos comandos para compilar o código em C).
Para instalar localmente, basta:

python3 setup.py build_ext --inplace

assim, você terá o modulo.so dentro do seu diretório (ou modulo.pyd, se for windows).

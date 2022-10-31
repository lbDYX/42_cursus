<!--Titulos-->
<h1 align="center"><b>PRINTF</b></h1>
<!--Explicación-->
<p align="left">
La función <b>printf</b> imprime por pantalla utilizando una <b>"cadena de formato"</b> que incluye las instruciones para mezclar múltiples cadenas.<br>
Para resolver este proyecto se tomo como base la información de la siguiente pagina web:
<a href="http://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_es.html"><b>La función printf.</b></a></p>
<img src="https://miro.medium.com/max/1400/1*jB76MLZjiNhGSQQvxm7LSQ.gif" alt="drawing" width="800" height="150"/><h1></h1>
<!--Explicacion ft_printf-->
<h2><b>ft_printf:</b></h2>
<p align="left">
<b>Nombre de programa :</b> libftprintf.a<br>
<b>Archivos a entregar :</b> Makefile, *.h, */*.h, *.c, */*.c<br>
<b>Makefile :</b> NAME, all, clean, fclean, re<br>
<b>Funciones autorizadas :</b> malloc, free, write, va_start, va_arg, va_copy, va_end<br> 
<b>Se permite usar libf :</b> Yes<br>
Descripción Escribe una librería que contenga la función ft_printf(), que imite el printf() original<br>
<b>OBJETIVOS:</b><br>
Crear una función que busque el <b>%</b> y la siguiente posición para asignarle el tipo de formato correspondiente.<br>
Hacer las funciones necesarias para imprimir.<br>
<a href="https://learn.microsoft.com/es-es/cpp/c-runtime-library/reference/va-arg-va-copy-va-end-va-start?view=msvc-170"><b>¿Qué es va_start, va_arg, va_copy, va_end?</b></a><br>
-Resumiendo, un poco es para inicializar los <b>(…)</b> e iterar su contenido.<br>
<pre><code>int ft_printf(char const *, ...);</pre></code><br>
-El proyecto se divide 6 archivos, los cuales son:
<br>
<a href="https://github.com/lbDYX/42_cursus/blob/main/printf/ft_printf.h"><b>ft_printf.h :</b></a>Contiene las librerias y las estructuras que se utilizaran en el proyecto.
<br>
<a href="https://github.com/lbDYX/42_cursus/blob/main/printf/ft_printf.c"><b>ft_printf.c :</b></a> Contiene la función principal, una función para buscar el '%' y otra para llamar las funciones con el tipo de formato que se va aplicar.
<br>
<a href="https://github.com/lbDYX/42_cursus/blob/main/printf/ft_type_cs.c"><b>ft_type_cs.c :</b></a> Contiene dos funciones, una para imprimir los chars y otra para los strings, se tiene en cuenta si <b>write</b> llegara a fallar retornando -1 en caso de que falle.<br>
<pre><code>
if(write(1, &c, 1) == -1)
  return (-1);
</code></pre><br>
<a href="https://github.com/lbDYX/42_cursus/blob/main/printf/ft_type_idu.c"><b>ft_type_idu.c :</b></a> Contiene dos funciones una que se encarga de imprimir los números negativos y otra para los positivos.<br>
<br>
<a href="https://github.com/lbDYX/42_cursus/blob/main/printf/ft_type_pxX.c"><b>ft_type_pxX.c :</b></a> Contiene cuatro funciones, tres de ellas se encargan de convertir a hexadecimal y la otra se encarga de imprimir los punteros.<br>
<a href="https://github.com/lbDYX/42_cursus/blob/main/printf/Makefile"><b>Makefile :</b></a> Contiene las reglas para compilar el proyecto.<br>
<b>NOTA:</b> Para verificar el proyecto antes de entregarlo se realizan pruebas con el programa de <a href="https://github.com/xicodomingues/francinette"><b>francinette</b></a>.
</p>


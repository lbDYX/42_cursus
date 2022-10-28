<!--Titulos-->
<h1 align="center"><b>PRINTF</b></h1>
<!--Explicación-->
<p align="left">
La función <b>printf</b> imprime por pantalla utilizando una <b>"cadena de formato"</b> que incluye las instruciones para mezclar múltiples cadenas.
para resolver este proyecto se tomo como base la información de la siguiente pagina web:
<a href="http://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_printf_es.html"><b>La función printf.</b></a></p>
<img src="https://miro.medium.com/max/1400/1*jB76MLZjiNhGSQQvxm7LSQ.gif" alt="drawing" width="800" height="150"/><h1></h1>
<!--Explicacion ft_printf-->
<h2><b>ft_printf:</b></h2><h1></h1>
<p align="left">
El proyecto se divide 6 archivos, los cuales son:
<br>
<b>ft_printf.h :</b>Contiene las librerias y las estructuras que se utilizaran en el proyecto.
<br>
<b>ft_printf.c :</b> Contiene la función principal, una función para buscar el '%' y otra para llamar las funciones con el tipo de formato que se va aplicar.
<br>
<b>ft_type_cs.c :</b> Contiene dos funciones una para imprimir los chars y otra para los strings, se tiene en cuenta si write llegara a fallar retornando -1 en caso de que falle.<br>

<code>
&nbspif(write(1, &c, 1) == -1)
<br>&nbsp&nbsp
return (-1);</br>
</code><br>
<b>ft_type_idu.c :</b> Contiene dos funciones una que se encarga de imprimir los números negativos y otra para los positivos.<br>
<br>
<b>ft_type_pxX.c :</b> Contiene cuatro funciones tres de ellas se encargan de convertir a hexadecimal y la otra se encarga de imprimir los punteros.<br>
<b>Makefile :</b> Contiene las reglas para compilar el proyecto.<br>
<b>NOTA:</b> para verificar el proyecto antes de entregarlo se realizan pruebas con el programa de <a href="https://github.com/xicodomingues/francinette"><b>francinette</b></a>.
</p>


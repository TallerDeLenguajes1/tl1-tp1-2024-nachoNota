 # RESOLUCION TP1
 Apellido, Nombre: Nota, Jose Ignacio

 ## Archivo .gitignore
 ### ¿Por qué es conveniente incluirlo? 
 - Los archivos ignorados suelen ser archivos generados por el equipo que pueden derivarse de la fuente del repositorio o archivos que simplemente no deben confirmarse por cualquier motivo. Al utilizar .gitignore podemos evitar que se añadan accidentalmente al repositorio y asi mantenerlo legible y ordenado.
 - Ademas, al ignorar archivos innecesarios, reducimos la carga y tamaño del repositorio, lo que luego se ve reflejado en un aumento de velocidad en cuestiones como clonaciones, pushes, etc.

### ¿Cuando se debe hacer?
- Debería configurarse el archivo .gitignore desde el momento en que se inicia un nuevo proyecto en Git, para así poder evitar archivos innecesarios que pueden agregarse accidentalmente en el repositorio en un futuro.

### ¿Como configuraria el archivo .gitignore?
1. creo un archivo .gitignore utilizando touch .gitignore
2. para editarlo utilizo code .gitignore (code es para que abra el vs code y poder editarlo desde ahi).
3. una vez dentro, agrego los archivos o palabras claves para ignorar archivos de mi preferencia. En este caso agrego la linea 'ignorado.txt' porque es el archivo que quiero ignorar. Al finalizar guardo los cambios.
4. añado al área de staging y confirmo con Git utilizando 'git add .gitignore' y hago el commit correspondiente.
5. Luego lo agrego al repositorio remoto utilizando el push.
6. Por ultimo, si quiero agregar un archivo llamado ignorado.txt, sale el siguiente mensaje: 'The following paths are ignored by one of your .gitignore files: ignorado.txt'

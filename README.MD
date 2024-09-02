# Control Pañol - Guillermito System 
## Versión Alpha 1.0

### Introducción
Guillermito System es una aplicación desarrollada en Qt para la gestión de inventarios en un pañol. La aplicación permite agregar y administrar productos y personal autorizado de manera eficiente. Su interfaz gráfica intuitiva facilita la operación para los usuarios, permitiendo un control completo sobre los recursos almacenados.

#### Características destacadas:
- **Gestión de Productos:** Permite agregar productos al inventario, incluyendo detalles como código SAP, código de barras, nombre del producto, stock, descripción, marca, ubicación y si es un producto SHE.
- **Gestión de Personal Autorizado:** Facilita la inclusión de nuevo personal autorizado, gestionando nombres, apellidos, legajos y sectores.
## Estructura del Proyecto

El proyecto está estructurado en varios archivos clave:

- `qdialog_agregarautorizados.cpp`: Implementa la lógica para la adición de personal autorizado al sistema.
- `qdialog_agregarproducto.cpp`: Maneja la lógica para agregar nuevos productos al inventario.
- `qdialog_agregarautorizados.h` y `qdialog_agregarproducto.h`: Archivos de cabecera que declaran las clases y sus métodos correspondientes.
- `main.cpp`: Punto de entrada de la aplicación donde se inicia el programa.

## Base de Datos

La aplicación utiliza **SQLite** como sistema de gestión de bases de datos. SQLite es una base de datos ligera y autocontenida que se integra fácilmente con aplicaciones Qt. Todos los datos relacionados con productos y personal autorizado se almacenan en una base de datos SQLite local. No se requiere ninguna configuración de servidor adicional, lo que simplifica la implementación y el uso del sistema.

## Instalación y Uso

1. **Requisitos:**
   - Qt 5.x o superior.
   - Un compilador compatible (como GCC o MSVC).
   - Una base de datos configurada para almacenar los productos y el personal autorizado.

2. **Compilación:**
   - Clona este repositorio:
     ```bash
     git clone https://github.com/tuusuario/guillermito-system.git
     ```
   - Abre el proyecto en Qt Creator.
   - Configura el proyecto para tu plataforma (Linux, Windows, macOS).
   - Compila y ejecuta el proyecto.

3. **Uso:**
   - Al ejecutar la aplicación, puedes agregar productos y personal autorizado desde las respectivas ventanas de diálogo.
   - La información ingresada se almacenará en la base de datos configurada y se puede gestionar desde la interfaz.

### Capturas de pantalla

| **Login** | **Home** | **Registro Usuario** |
|---|---|---|
|![Pantalla_00_Login](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_00_Login.png)| ![Home](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_01_Home.png) | ![Registro_Usuario](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_02_NuevoUsuario.png) |

| **Nuevo Producto** | **Buscar Producto** | **Listado de Productos** |
|---|---|---|
| ![Nuevo_Producto](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_03_NuevoProducto.png) | ![Buscar_Producto](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_04_BuscarProducto.png) | ![Listado_Productos](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_05_ListadoProducto.png) |

| **Nuevo Vale** | **Buscar Vale** | **Listado de Vales** |
|---|---|---|
| ![Nuevo_Vale](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_06_NuevoVale.png) | ![*Buscar_Vale](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_07_BuscarVale.png) | ![Listado_Vales](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_08_ListadoVales.png) |

| **Nuevo Personal Autorizado** | **Buscar Personal Autorizado** | **Listado de Personal Autorizado** |
|---|---|---|
| ![Nuevo_Autorizado](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_09_NuevoPersonal.png) | ![Buscar_Autorizado](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_10_BuscarPersonal.png) | ![Listado_Personal_Autorizado](https://github.com/CarlosOC/ControlPaniol/blob/main/imagenes/Pantalla_11_ListadoPersonal.png) |

## Contacto

Si tienes alguna pregunta o sugerencia, no dudes en ponerte en contacto conmigo:

- Correo electrónico: carlosoviedolr@gmail.com
- Linkedin: [https://www.linkedin.com/in/carlosnicolasoviedocodigoni/]

¡Espero que disfrutes trabajando en estos ejercicios tanto como yo disfruto enseñándolos!

Happy coding! 🚀

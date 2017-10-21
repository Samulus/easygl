# OpenGL example using SDL2

import sdl2
import opengl
import easygl


discard sdl2.init(INIT_EVERYTHING)

var screenWidth: cint = 800
var screenHeight: cint = 600

let window = createWindow("Learn OpenGL 01", 100, 100, screenWidth, screenHeight, SDL_WINDOW_OPENGL or SDL_WINDOW_RESIZABLE)
discard window.glCreateContext()

# Initialize OpenGL
loadExtensions()

### Build and compile shader program

let shaderProgram = CreateAndLinkProgram("shaders/hello_triangle.vert","shaders/hello_triangle.frag")

# Set up vertex data
let vertices : seq[float32]  = 
  @[   
  0.5'f32,  0.5'f32, 0.0'f32,  # top right
  0.5'f32, -0.5'f32, 0.0'f32,  # bottom right
 -0.5'f32, -0.5'f32, 0.0'f32,  # bottom left
 -0.5'f32,  0.5'f32, 0.0'f32 ] # top left

let indices : seq[uint32] =  
  @[
  0'u32, 1'u32, 3'u32,   # first triangle
  1'u32, 2'u32, 3'u32 ]  # second triangle

let VAO = GenVertexArray()
let VBO = GenBuffer()
let EBO = GenBuffer()

# Bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
BindVertexArray(VAO)

BindBuffer(BufferTarget.ARRAY_BUFFER,VBO)
BufferData(BufferTarget.ARRAY_BUFFER,vertices,BufferDataUsage.STATIC_DRAW)

BindBuffer(BufferTarget.ELEMENT_ARRAY_BUFFER,EBO)
BufferData(BufferTarget.ELEMENT_ARRAY_BUFFER,indices,BufferDataUsage.STATIC_DRAW)

VertexAttribPointer(0,3,VertexAttribType.FLOAT,false,3*float32.sizeof(),0)
EnableVertexAttribArray(0)

# Unbind the VBO and VAO but we need to keep the EBO
BindBuffer(BufferTarget.ARRAY_BUFFER,0.BufferId)
BindVertexArray(0.VertexArrayId)


var
  evt = sdl2.defaultEvent
  run = true

glViewport(0, 0, screenWidth, screenHeight)   # Set the viewport to cover the new window
  
while run:
  while pollEvent(evt):
    if evt.kind == QuitEvent:
      run = false
      break
    if evt.kind == WindowEvent:
      var windowEvent = cast[WindowEventPtr](addr(evt))
      if windowEvent.event == WindowEvent_Resized:
        let newWidth = windowEvent.data1
        let newHeight = windowEvent.data2
        glViewport(0, 0, newWidth, newHeight)   # Set the viewport to cover the new window
        
  # Render
  ClearColor(0.2,0.3,0.3,1.0)
  Clear(ClearBufferMask.COLOR_BUFFER_BIT)
  UseProgram(shaderProgram)
  BindVertexArray(VAO) # Not necessary since we only have one VAO
  DrawElements(DrawMode.TRIANGLES,6,IndexType.UNSIGNED_INT,0)
  window.glSwapWindow()

destroy window
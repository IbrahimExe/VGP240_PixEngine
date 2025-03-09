# VGP240_PixEngine
Understanding Game Engines & their Visualisation Logic by creating my own using Pix.

## Week 1 - Intro to Pix Engine and Simple Point & Colour functions

![Week_1_PixelArt](https://github.com/user-attachments/assets/ad173e55-a12f-4ceb-b170-7290d7958bd5)
- Made Pixel Art using the engine and direct colour coding.


## Week 2 - Vertex to Vertex Line & Triangle Functions

![Week_2_Line](https://github.com/user-attachments/assets/f38b19c6-0511-4e80-aba4-a655908d00f4)
- Visualisation of a Line with Colour Gradients, including Colour and Vertex Mathematics/ Logic.

![Week_2_Triangles](https://github.com/user-attachments/assets/62dcb641-c91c-4a9a-a74b-74f15cf14db9)
- As well as Triangle Visualisation With Wireframe & Fill Mode Logic and Colour Mathematics.


## Week 3 - Viewport & Clipping

![Clipping](https://github.com/user-attachments/assets/048c3046-95e1-4cec-af44-a008aa2ae942)
- Created a Viewport, allowing us to allow for Clipping Logic.
- Implemented Clipping (Responsible for testing primitive visibility against the viewport boundaries).

## Week 4 - 4x4 Vector Math & Logic Implementation
- Implemented Matrix Operations, such as Determinants, Inverse, Cofactor and Dot Product.
- Allowing for Perspective Projections and eventually a Camera System!  

## Week 5 - Camera System!

![Week_5_Showcase](https://github.com/user-attachments/assets/134290f1-6a34-4632-954d-ee16183446c1)
- Created a Camera thats able to Handle & Render 3D Shapes!

## Week 6 - Culling!

![Week_6_Showcase](https://github.com/user-attachments/assets/bc8806a2-ea56-4876-8d1e-ae6dbfc6fd4b)
- Created a Culling System; An Optimization to the Rendering Pipeline that works by Avoiding Drawing Geometry that is not Visible to the Camera, done through Normal and Cross Product Calculations.
- Added a UI Element as well, to allow for the Culling Updates to be Shown Without Needing to Restart the Program.

## Weeks 7 & 8 - Let There Be Light!

![Week_7-8_PointLights](https://github.com/user-attachments/assets/c29e30db-57c6-4d43-93f5-eca5d48b9f81)
- Added Lighting Support to Pix: Through a singleton class, we adjust properties that are specified as color values for different light components including
ambient, diffuse, and specular to create dervied classes from a virtual function; namley Directional Light, Point Light & Spot Light!
- Furthermore, Calculated and implemented Flat, Phong & Gouraud Shading modes using thier respective algorithms!

## Weeks 9 - Textures!

![Week_9_Texturing](https://github.com/user-attachments/assets/796ff61a-bfb9-4bba-b23f-c49cfa2ef65d)
- Added Texturing Support to Pix: Through Texture Casheing & by making it so that textures are equal to colours that are mathematically mapped to a UV coordinate system (Affine Texture Mapping) we allow models/ planes to render a texture.
- We also implement Perspective Correct Texturing; where despite an objects perspective to the camera, the textures are mapped correctly through 1/color.z interpolation.
- Finally, Address Modes and Bilinear Sampling have also been implemented allowing for the textures to be represented in various ways and look pretty too!

# Tower defense allegro
***
I use manjaro to write this code.

To install allegro with pacman.

`
pacman -S allegro
`

To compile.

I write a makefile but not sure it is correct

for just one file ex:main.cpp
you can do this to compile

```
g++ maiin.cpp `pkg-config --libs allegro-5 allegro_font-5 allegro_ttf-5 allegro_dialog-5 allegro_primitives-5 allegro_image-5 allegro_audio-5 allegro_acodec-5`
```

# Musicpad

This is a macropad to control music that plays in your computer

It has 4 keys with underglow, rotary encoder, OLED display and cool claude code logo in the case!!!

I built this macropad for [Hackpad](https://hackpad.hackclub.com/)—an awesome Hack Club YSWS project run by [Alex Ren](https://github.com/qcoral).

- 4 keys
- EC11 rottary encoder
- 128x32 OLED Display
- cool underglow
- claude code logo in the case

## CAD
To assembl it you need 
  - 3x M3 bolts to case (must have)
  - 3x M3 heat inserts to case(must have)
  - 4x M3 bolts and nuts to secure pcb into case(optional)
<img width="444" height="377" alt="Снимок экрана 2026-07-25 152335-Photoroom" src="https://github.com/user-attachments/assets/e626c103-7033-45eb-a4ea-ee1326f3d9c7" />
made in Fusion360

## PCB
Fully designed in KiCad!

<img width="630" height="304" alt="image 1 (1)" src="https://github.com/user-attachments/assets/7ef7af0a-9404-479d-98bb-910f787b523c" />
<---schematic
<img width="552" height="325" alt="image 1" src="https://github.com/user-attachments/assets/b7658673-1cab-42cf-9f6c-5bb0ae60b3d6" />
<---PCB

## Firmware features

  ### 1st (Base features)
  - Key 1 - play/pause
  - Key 2 - prev track
  - Key 3 - next track
  - Key 4 - mute
  - Encoder push - mute
  - Encoder - volume up/down

  ### 2nd (While encoder holded)
  - Key 1 - RGB toggle
  - Key 2 - RGB mode
  - Key 3 - Hue -
  - Key 4 - Heu +
  - Encoder push - Bootloader
  - Encoder - Brightness up/down

Key 1/2/3/4 here = SW 1/2/3/4 in PCB 

## BOM

|Quantity |Component            |Status|
|:------: |-------------------  |------|
|1x |Seeed XIAO RP2040          |Must have|
|1x |0.91 inch OLED display     |Must have|
|1x |EC11 Rotary encoder        |Must have|
|6x |SK6812 MINI-E LEDs         |Must have|
|4x |Cherry MX Switches         |Must have|
|4x |DSA keycaps                |Must have|
|3x |M3x5mx4mm heatset inserts  |Must have|
|3x |M3x16mm screws             |Must have|
|3x |3d printed case parts      |Must have|
|1x |Musicpad PCB               |Must have|
|1x |3d printed Claude code logo|Must have|
|4x |M3x8mm screws              |Optional|
|4x |M3 nuts                    |Optional|


## Assembly

<img width="467" height="488" alt="image" src="https://github.com/user-attachments/assets/21a6bccf-b6dd-4a87-809e-b9664735e7d6" />

    




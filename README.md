# Musicpad

This is a macropad to control music playing on your computer.

It features 4 keys with underglow, a rotary encoder, an OLED display, and a cool Claude Code logo on the case!

I built this macropad for [Hackpad](https://hackpad.hackclub.com/)—an awesome Hack Club YSWS project run by [Alex Ren](https://github.com/qcoral).

- 4 keys
- EC11 rotary encoder
- 128x32 OLED Display
- Cool underglow

## CAD
To assemble it, you will need:
  - 3x M3 bolts for the case (required)
  - 3x M3 heat inserts for the case (required)
  - 4x M3 bolts and nuts to secure the PCB into the case (optional)

<img width="444" height="377" alt="Снимок экрана 2026-07-25 152335-Photoroom" src="https://github.com/user-attachments/assets/e626c103-7033-45eb-a4ea-ee1326f3d9c7" />

*Made in Fusion 360*

## PCB
Fully designed in KiCad!

<img width="630" height="304" alt="image 1 (1)" src="https://github.com/user-attachments/assets/7ef7af0a-9404-479d-98bb-910f787b523c" />
<--- schematic

<img width="552" height="325" alt="image 1" src="https://github.com/user-attachments/assets/b7658673-1cab-42cf-9f6c-5bb0ae60b3d6" />
<--- PCB

## Firmware Features

  ### 1st Layer (Base Features)
  - Key 1 - Play/Pause
  - Key 2 - Prev track
  - Key 3 - Next track
  - Key 4 - Mute
  - Encoder press - Mute
  - Encoder turn - Volume Up/Down

  ### 2nd Layer (While Encoder is Held)
  - Key 1 - RGB Toggle
  - Key 2 - RGB Mode
  - Key 3 - Hue -
  - Key 4 - Hue +
  - Encoder press - Bootloader
  - Encoder turn - Brightness Up/Down

*Note: Key 1/2/3/4 correspond to SW 1/2/3/4 on the PCB.*

## BOM

| Quantity | Component | Status |
| :---: | :--- | :--- |
| 1x | Seeed XIAO RP2040 | Must have |
| 1x | 0.91-inch OLED display | Must have |
| 1x | EC11 Rotary encoder | Must have |
| 6x | SK6812 MINI-E LEDs | Must have |
| 4x | Cherry MX Switches | Must have |
| 4x | DSA keycaps | Must have |
| 3x | M3x5x4mm heat-set inserts | Must have |
| 3x | M3x16mm screws | Must have |
| 3x | 3D printed case parts | Must have |
| 1x | Musicpad PCB | Must have |
| 1x | 3D printed Claude Code logo | Must have |
| 4x | M3x8mm screws | Optional |
| 4x | M3 nuts | Optional |

## Assembly

<img width="467" height="488" alt="image" src="https://github.com/user-attachments/assets/21a6bccf-b6dd-4a87-809e-b9664735e7d6" />

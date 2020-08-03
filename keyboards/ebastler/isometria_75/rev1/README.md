# isometria<sup>75</sup>

![Isometria sample image](https://mpwr.xyz/projects/isometria75/preview/elmo_pc_BOW_overview.png)

A 75% ISO-only board with a rotary encoder, RGB underglow and single color dimmable backlight. The hardware is ready to have Bluetooth support added later on. The design is open source and all files (PCB and case) can be found in my [Github repo](https://github.com/ebastler/isometria-75).

* Keyboard Maintainer: [ebastler](https://github.com/ebastler)
* Hardware Supported: Rev1 PCB, see Github repo linked above
* Hardware Availability: None, feel free to order/manufacture parts yourself.

Layer Toggle: Right menu key (to the right of ralt, left of the arrow cluster)
Bootmagic Lite key: Escape

Alternate layer mod keys (All on layer 1):
* Home: Insert
* Backspace: Delete

Alternate layer hardware control keys (All on layer 1):
* Up: Increase underglow Hue (Shift + Up: Decrease)
* Down: Increase underglow brightness (Shift + Down: Decrease)
* Right: Increase underglow saturation (Shift + Right: Decrease)
* Left: Toggle underglow
* End: Toggle backlight
* Pg Up/Down: Increase/Decrease backlight

Encoder mapping (Layer 0):
* CCW/CW: Decrease/Increase volume
* Click: Play/Pause

Encoder mapping (Layer 1):
* CCW/CW: Previous/Next track
* Click: Mute audio

Make example for this keyboard (after setting up your build environment):

    make ebastler/isometria_75/rev1:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
# litl

Litl is an easy to build 40% keyboard using only through hole components. It uses a separate microcontroller (like the Pro Micro or Elite C) to enable flexibility in connectivity and to further simplify the soldering experience (no more tricksy USB ports).

* Keyboard Maintainer: [mohoyt](https://github.com/mohoyt)
* Hardware Supported: litl, Pro Micro, Elite-C, Puchi-C, Nice!Nano
* Hardware Availability: [Sthlm kb](https://sthlmkb.com/shop/litl-keyboard-kit/)

Make example for this keyboard (after setting up your build environment and dragging the litl folder to your `keyboards` folder):

    make litl:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Alternatively flash one of the precompiled hexes. There's a few options:
* One's a standard QMK one
* Another is one compatible with [Vial](https://get.vial.today) with no OLED support
* Then there's two OLED Vial hexes. One with a WPM HUD and another with Bongocat

The .hex file is if you're using an Atmel chip (like a traditional Pro Micro). The uf2 files are for a RP2040 style pro micro like the Helios. 

# LUFA ported to Aery32 Framework

This port integrates LUFA to Aery32 Framework so you can start using USB
straight away, for example, as a virtual com port, which is implemented in
the example `main.cpp`. The example prints a hello message to virtual com
port (CDC demo).

### What is LUFA?

[LUFA](https://github.com/abcminiuser/lufa) is an open-source USB
library for the USB-enabled AVR microcontrollers, released under the MIT
license. It supports a large number of USB AVR models and boards. It is
designed to provide an easy to use, feature rich framework for the development
of USB peripherals and hosts.

LUFA focuses on the microcontroller side of USB development only; it includes
no PC host USB driver development facilities - other projects such as the
Windows Driver Development Kit, Windows USB Device Mode Framework and libusb
may be of interest for developing custom OS drivers. While custom USB devices
can be made with LUFA using such tools, the included demos all use the inbuilt
OS drivers for each USB class for simplicity.

LUFA is donation supported. To support LUFA, please donate at
http://www.lufa-lib.org/donate

## Installation

[Download](https://github.com/aery32/lufa-port/archive/master.zip) and
unzip the archive of this repo directly under your Aery32 project folder.
Linux users can use wget:

```
cd workspace/my-aery32-project
wget --no-check-certificate https://github.com/aery32/lufa-port/archive/master.tar.gz -O - | tar -xvz --strip 1
```

Be sure that your project compiles (force to rebuild)

```
make reall
```

If everything was ok, you are ready to upload the example program into
your Aery32 development board

```
make programs
```

Windows users have to install `LUFA_VirtaulSerial.inf` driver when the board
identifies.

## Usage

LUFA needs some settings that have been put into the global `settings.h`,
which is a part of the Aery32 Framework. Descriptor files, `Descriptor.c` and
`Descriptor.h` can be found from `LUFA/` directory.

Learn more from [LUFA Library Documentation](http://www.fourwalledcubicle.com/files/LUFA/Doc/130303/html/).

## Licenses

Aery32 Framework is licensed under the new BSD license:

> Copyright (c) 2012-2013, Muiku Oy  
> All rights reserved.
>
> Redistribution and use in source and binary forms, with or without modification,
> are permitted provided that the following conditions are met:
>
>    * Redistributions of source code must retain the above copyright notice,
>      this list of conditions and the following disclaimer.
>
>    * Redistributions in binary form must reproduce the above copyright notice,
>      this list of conditions and the following disclaimer in the documentation
>      and/or other materials provided with the distribution.
>
>    * Neither the name of Muiku Oy nor the names of its contributors may be
>      used to endorse or promote products derived from this software without
>      specific prior written permission.
>
> THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
> ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
> WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
> DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
> ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
> (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
> LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
> ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
> (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
> SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


LUFA Library is released under a modified MIT license:

>                   LUFA Library
>         Copyright (C) Dean Camera, 2013.
> 
>      dean [at] fourwalledcubicle [dot] com
>                 www.lufa-lib.org
> 
> 
> Permission to use, copy, modify, and distribute this software
> and its documentation for any purpose is hereby granted without
> fee, provided that the above copyright notice appear in all
> copies and that both that the copyright notice and this
> permission notice and warranty disclaimer appear in supporting
> documentation, and that the name of the author not be used in
> advertising or publicity pertaining to distribution of the
> software without specific, written prior permission.
> 
> The author disclaims all warranties with regard to this
> software, including all implied warranties of merchantability
> and fitness.  In no event shall the author be liable for any
> special, indirect or consequential damages or any damages
> whatsoever resulting from loss of use, data or profits, whether
> in an action of contract, negligence or other tortious action,
> arising out of or in connection with the use or performance of
> this software.

## Acknowledgements

Thanks to [abcminiuser](https://github.com/abcminiuser)
(the creator of the LUFA) for commenting the issues and
[thewizzy](https://github.com/thewizzy) for tireless testing.

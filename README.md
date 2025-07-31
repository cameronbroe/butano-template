# Butano Template

This repository contains my personal template repository projects for Butano. It is set up to include Butano as a submodule and build ROMs with Docker. It also includes a basic CI/CD set-up with GitHub Actions.


## Building

1. Install the devkitARM toolchain for `gba-dev` from devkitPro: https://devkitpro.org/wiki/Getting_Started
2. Clone this repository with submodules
   ```bash
   git clone --recurse-submodules https://github.com/cameronbroe/butano-template.git
   ```
3. Build the ROM file with `make`:
   ```bash
   make -j 4
   ```
4. Run the file `butano-template.gba` in mGBA to verify the build works correct.

## Build with Docker

1. Ensure you have installed Docker Desktop.
2. Clone the repository with submodules
   ```bash
   git clone --recurse-submodules https://github.com/cameronbroe/butano-template.git
   ```
3. Build the ROM file in Docker with `make`:
   ```bash
   make docker-build
   ```
4. Run the file `butano-template.gba` in mGBA to verify the build works correct.

## License

This file is licensed under the MIT License and can be found in [LICENSE.md](LICENSE.md)


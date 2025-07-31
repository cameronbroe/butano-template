FROM devkitpro/devkitarm:latest
WORKDIR /gba-build
COPY . .
RUN git submodule update --init
RUN ./tools/docker-build.sh


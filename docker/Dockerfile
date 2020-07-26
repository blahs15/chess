# Base image
FROM ubuntu:20.10

# Disable prompt during packages installation
ARG DEBIAN_FRONTEND=noninteractive

# Update Ubuntu software repository
RUN apt update

# Install libraries
RUN apt install -y \
    # for meson
    python3 \
    python3-pip \
    python3-setuptools \
    python3-wheel \
    ninja-build \
    # cleanup
    && \
    rm -rf /var/lib/apt/lists/* && \
    apt clean

RUN \
    # install meson
    pip3 install meson && \
    # end run command with true so that all previous lines end in "&& \"
    true

CMD ["/bin/bash"]

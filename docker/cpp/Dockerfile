# 参考: https://qiita.com/forno/items/11c4a0f8169d987f232b
# GCCのバージョンを変える時は CXX="g++-9" CC="gcc-9" toolset=gcc-9 toolset=gcc-9 のそれぞれ変更する
FROM ubuntu:18.04
ENV CXX="g++-9" \
    CC="gcc-9" \
    CPP_PATH="/home/cpp"
WORKDIR $CPP_PATH

RUN apt-get update && \
    apt-get install -y software-properties-common && \
    add-apt-repository -y ppa:ubuntu-toolchain-r/test && \
    apt-get update && \
    apt-get install -y g++-9 git build-essential libssl-dev

# # Cmake 最新版をインストール
RUN git clone https://gitlab.kitware.com/cmake/cmake.git && \
    cd cmake && \
    ./bootstrap && \
    make -j5 && \
    make install && \
    cd ../

# Boostのダウンロードとインストール
RUN git clone https://github.com/boostorg/boost.git && \
    cd boost && \
    git checkout boost-1.73.0 && \
    git submodule update --init && \
    ./bootstrap.sh && \
    ./b2 toolset=gcc-9 --prefix=/usr/local -j5 && \
    ./b2 install toolset=gcc-9 --prefix=/usr/local -j5 && \
    cd ../

# 追加のライブラリをインストール
RUN apt install -y gdb
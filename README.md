# ffmpeg
DownLoad:
    git clone https://github.com/aaron201912/ffmpeg.git

BuildCodeFlow:
    1. ./configure --disable-ffmpeg --disable-ffplay --disable-ffprobe --enable-protocols --enable-decoder=hevc --enable-decoder=h264 --enable-demuxer=h264 --enable-decoder=ssh264 --enable-demuxer=hevc --cc="arm-linux-gnueabihf-gcc" --prefix=host --enable-cross-compile --arch=arm --target-os=linux --cross-prefix=arm-linux-gnueabihf- --enable-shared   --enable-gpl --enable-nonfree --enable-pthreads --enable-avcodec --enable-error-resilience --enable-debug --enable-parsers --enable-swscale --enable-avformat --extra-cflags=-I/home/jianfeizhou/work/github/ffmpeg/sstar/include --extra-ldflags=-L/home/jianfeizhou/work/github/ffmpeg/ffmpeg/sstar/lib
    2. make clean;make
    3. make install

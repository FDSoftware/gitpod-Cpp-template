FROM ubuntu:focal

ENV TZ=Europe/Kiev
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

RUN apt-get update \
    && apt-get install -y \
    software-properties-common \
    wget \
    make \
    git \
    gcc \
    g++

RUN ln -s /usr/bin/python3 /usr/bin/python

RUN python -V
RUN gcc -v

WORKDIR /src
#example run:
#sudo docker build -t cpp_gitpod:latest .
#sudo docker run --rm -v full_path:/src container_ID 
CMD [ "make" ]
#!/bin/bash
STARTTIME=$(date +%s)

export PROJECT_BASH_OPTS=-x
apt-get update
apt-get upgrade
apt-get install -y build-essentials 

# c/c++
apt-get install -y cmake gcc g++

#python
apt-get install -y python

#python3
apt-get install -y python3

# rust
curl -sSf https://static.rust-lang.org/rustup.sh | sh

# go
add-apt-repository ppa:ubuntu-lxc/lxd-stable
apt-get update
apt-get install -y golang

USER=ubuntu
BASHRC=/home/$USER/.bashrc
if [ ! -f $BASHRC ]; then
	echo "" >> $BASHRC
fi

CMD="source /vagrant/bashrc"
if ! grep -Fxq "$CMD" $BASHRC; then
    echo $CMD >> $BASHRC
fi


ENDTIME=$(date +%s)
echo "Provisioned in $(($ENDTIME - $STARTTIME))S"

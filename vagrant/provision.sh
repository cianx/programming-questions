#!/bin/bash
STARTTIME=$(date +%s)

export PROJECT_BASH_OPTS=-x
apt-get update
apt-get upgrade
apt-get install -y build-essentials cmake gcc g++ python python3

# rust
curl -sSf https://static.rust-lang.org/rustup.sh | sh

# go
add-apt-repository ppa:ubuntu-lxc/lxd-stable
apt-get update
apt-get install -y golang

CMD="source /home/vagrant/vagrant/bashrc"
if ! grep -Fxq "$CMD" /home/vagrant/.bashrc; then
    echo $CMD >> /home/vagrant/.bashrc
fi


ENDTIME=$(date +%s)
echo "Provisioned in $(($ENDTIME - $STARTTIME))S"

#docker network create -d macvlan \
#  --subnet=192.168.1.0/24 \
#  --ip-range=192.168.1.100/25 \
#  --gateway=192.168.1.40 \
#  -o parent=wlp3s0 macnet
# bridge=my-bridge

docker network create -d ghcr.io/devplayer0/docker-net-dhcp:release-linux-amd64 --ipam-driver null -o bridge=wlp3s0  my-dhcp-net 

docker network create -d ipvlan \
    --subnet=192.168.1.0/24 \
    --gateway=192.168.1.40 \
    -o ipvlan_mode=l2 -o parent=wlp3s0 my-ipvlan2

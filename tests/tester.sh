#!/bin/bash

read -p "Digite o valor minimo: " first
read -p "Digite o valor maximo: " max

if [ $first -ge $max ]; then 
    echo "Erro, numero máximo maior que o minimo!"
    exit 1
fi
    random=$(seq $first $max | shuf)

#./push_swap $random
./push_swap $random | ./checker_linux $random
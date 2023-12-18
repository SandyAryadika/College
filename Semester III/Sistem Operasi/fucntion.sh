#!/bin/bash

# Fungsi untuk menghitung luas persegi
function hitung_luas_persegi {
  # Menerima 2 parameter panjang dan lebar
  panjang=$1
  lebar=$2
  
  # Menghitung luas
  luas=$((panjang * lebar))
  
  # Menampilkan hasil
  echo "Luas Persegi: $luas" 
}

# Input panjang dan lebar
echo "Masukkan Panjang: "
read panjang

echo "Masukkan Lebar: "
read lebar

# Memanggil fungsi hitung_luas_persegi
hitung_luas_persegi $panjang $lebar

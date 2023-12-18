declare -a IPSMahasiswa

echo -n "Masukkan jumlah data IPS: "
read jumlahData

for ((i=0; i<$jumlahData; i++)) do
  echo -n "Masukkan nilai IPS untuk mata kuliah ke-$((i+1)): "
  read IPSMahasiswa[$i]
done

jumlahIPS=0
for nilai in "${IPSMahasiswa[@]}"; do
  jumlahIPS=$(echo "$jumlahIPS + $nilai" | bc)
done

IPK=$(echo "scale=2; $jumlahIPS / $jumlahData" | bc)

echo "IPK Mahasiswa: $IPK"

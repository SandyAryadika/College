echo "input : "
read acuan

echo "Masukkan Bilangan :"

for ((i=$acuan; i>=1; i--))
do
  if [ $((i % 2)) -ne 0 ] && [ $i -gt 0 ]; then
   echo $i
  fi
done

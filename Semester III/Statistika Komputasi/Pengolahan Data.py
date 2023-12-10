mport pandas as pd

# Baca data excel
file_name = "T1 PENGOLAHAN DATA_FIFA19Dataset_Sandy Aryadika Widodo_22081010323.xlsx" # Menggunakan folder Tugas 2
excel = pd.ExcelFile(file_name)

# Baca sheet 2 dan hitung jumlah data
sheet1 = excel.parse("pythonSort")
print("\nJumlah Data: ", len(sheet1), "\n")

# Definisikan kolom-kolom yang akan dihitung statistiknya
kolom1 = "Acceleration"
kolom2 = "Agility"
kolom3 = "Stamina"
kolom4 = "Strength"

# Fungsi untuk menghitung dan mencetak statistik untuk sebuah kolom
def print_stats(data, kolom_nama):
    mean = data.mean()
    median = data.median()
    modus = data.mode().iloc[0]  # Mengambil data pertama jika ada yang kembar
    deviasi = data.std()
    varian = data.var()
    
    print(f"Data kolom {kolom_nama}")
    print(f"Mean             : {mean}")
    print(f"Median           : {median}")
    print(f"Modus            : {modus}")
    print(f"Standar Deviasi  : {deviasi}")
    print(f"Varian           : {varian}\n")

# Menghitung dan mencetak statistik untuk masing-masing kolom
print_stats(sheet1[kolom1], kolom1)
print_stats(sheet1[kolom2], kolom2)
print_stats(sheet1[kolom3], kolom3)
print_stats(sheet1[kolom4], kolom4)










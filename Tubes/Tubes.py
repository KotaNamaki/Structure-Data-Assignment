   # Struct sederhana untuk menyimpan data film
import os
import time
class Movie:
    def __init__(film, name, rating):
        film.name = name  # Nama film
        film.rating = rating  # Rating film

# Dictionary untuk menambah dan menyimpan data film
film_data = {}

# Fungsi untuk menambahkan film ke dalam dictionary
def kamusPush(genre, movie_name, rating):
    if genre not in film_data:
        film_data[genre] = []
    film_data[genre].append(Movie(movie_name, rating))
# Fungsi untuk mencari film Marvel atau DC dengan rating tertinggi
#   def find_best_movie(genre):
#       if genre in film_data and film_data[genre]:  # Mengecek apakah genre tersedia dan tidak kosong
#           best_movie = max(film_data[genre], key=lambda movie: movie.rating)  # Mencari film dengan rating tertinggi
#           print(f"Film terbaik {genre} adalah: {best_movie.name} (IMDb: {best_movie.rating})")
#       else:
#           print(f"Maaf, tidak ada film dalam kategori {genre} saat ini.")
#
def RatingSearching(genre, max_rating):
    max_rating = float(max_rating)
    found = False  # Menyimpan status apakah film ditemukan atau tidak
    print(f"\nHasil pencarian untuk film dengan rating maksimum {max_rating}:\n")
    if genre in film_data:  # Mengecek apakah ada genre dalam Kamus
            for movie in film_data[genre]:  # Mengiterasi setiap film dalam list genre 
                if movie.rating <= max_rating:  # Mengecek apakah rating film kurang dari atau sama dengan rating maksimum
                    print(f"- {genre}, {movie.name} (Rating: {movie.rating})")  # Menampilkan nama dan rating film
                    found = True  # Mengupdate status jika film ditemukan'
    if not found:  # Jika film tidak ditemukan
        print(f"\nMaaf, tidak ditemukan film dengan rating maksimum {max_rating}.")
    print("\n")

# Contoh penggunaan:
# RatingSearching(8.0)



def main():
    
    # Menambahkan data film Marvel dan DC ke dalam dictionary
    kamusPush("Marvel", "X-Men, 2000", 7.3)
    kamusPush("Marvel", "Spider-Man, 2002", 7.4)
    kamusPush("Marvel", "Avengers: Infinity War, 2018", 8.5)
    kamusPush("Marvel", "Avengers: Endgame, 2019", 8.4)

    kamusPush("DC", "The Dark Knight, 2008", 9.0)
    kamusPush("DC", "Joker, 2019", 8.4)
    kamusPush("DC", "The Batman, 2022", 7.8)

    print("Selamat datang di Sistem Pencarian Film Terbaik Marvel dan DC!")
    nama = input("Masukkan nama Anda: ")
    os.system('cls')

    while True:
        os.system('cls')
        print("\nPilih opsi berikut:")
        print("1. Cari film Marvel dengan rating tertinggi")
        print("2. Cari film DC dengan rating tertinggi")
        print("3. Keluar")
        pilihan = input("Masukkan pilihan Anda (1/2/3): ")
        
        if pilihan == '1':
            os.system('cls')
            rating_Marvel = input(f"Halo {nama}, masukan rating yang anda inginkan: ")
            start_time = time.time()
            RatingSearching("Marvel", rating_Marvel )
            durasi = time.time() - start_time
            print(f"Waktu: {durasi:.12f} detik")
            os.system('pause')
        elif pilihan == '2':
            os.system('cls')
            rating_DC = input(f"Halo {nama}, masukan rating yang anda inginkan: ")
            start_time = time.time()
            RatingSearching("DC", rating_DC)
            durasi = time.time() - start_time
            print(f"Waktu: {durasi:.12f} detik")
            os.system('pause')
        elif pilihan == '3':
            os.system('cls')
            print("Terima kasih telah menggunakan Sistem Pencarian Film Terbaik Marvel dan DC!")
            durasi = time.time() - start_time
            os.system('pause')
            break
        else:
            print("Pilihan tidak valid, silakan coba lagi.")

if __name__ == "__main__":
    main()

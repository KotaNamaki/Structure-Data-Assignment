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
    kamusPush("Marvel", "Iron Man", 7.9)
    kamusPush("Marvel", "The Incredible Hulk", 6.7)
    kamusPush("Marvel", "Iron Man 2", 7.0)
    kamusPush("Marvel", "Thor", 7.0)
    kamusPush("Marvel", "Captain America: The First Avenger", 6.9)
    kamusPush("Marvel", "The Avengers", 8.0)
    kamusPush("Marvel", "Iron Man 3", 7.1)
    kamusPush("Marvel", "Thor: The Dark World", 6.8)
    kamusPush("Marvel", "Captain America: The Winter Soldier", 7.8)
    kamusPush("Marvel", "Guardians of the Galaxy", 8.0)
    kamusPush("Marvel", "Avengers: Age of Ultron", 7.3)
    kamusPush("Marvel", "Ant-Man", 7.3)
    kamusPush("Marvel", "Captain America: Civil War", 7.8)
    kamusPush("Marvel", "Doctor Strange", 7.5)
    kamusPush("Marvel", "Guardians of the Galaxy Vol. 2", 7.6)
    kamusPush("Marvel", "Spider-Man: Homecoming", 7.4)
    kamusPush("Marvel", "Thor: Ragnarok", 7.9)
    kamusPush("Marvel", "Black Panther", 7.3)
    kamusPush("Marvel", "Avengers: Infinity War", 8.4)
    kamusPush("Marvel", "Ant-Man and the Wasp", 7.0)
    kamusPush("Marvel", "Captain Marvel", 6.8)
    kamusPush("Marvel", "Avengers: Endgame", 8.4)
    kamusPush("Marvel", "Spider-Man: Far From Home", 7.4)
    kamusPush("Marvel", "Shang-Chi and the Legend of the Ten Rings", 7.4)
    kamusPush("Marvel", "Eternals", 6.3)
    kamusPush("Marvel", "Spider-Man: No Way Home", 8.3)
    kamusPush("Marvel", "Doctor Strange in the Multiverse of Madness", 6.9)
    kamusPush("Marvel", "Thor: Love and Thunder", 6.3)
    kamusPush("Marvel", "Black Panther: Wakanda Forever", 6.9)


    kamusPush("DC", "The Dark Knight, 2008", 9.0)
    kamusPush("DC", "Joker, 2019", 8.4)
    kamusPush("DC", "The Batman, 2022", 7.8)
    kamusPush("DC", "The Dark Knight, 2008", 9.0)
    kamusPush("DC", "The Lion King, 1994", 8.5)
    kamusPush("DC", "Aladdin, 1992", 8.0)
    kamusPush("DC", "Frozen, 2013", 7.4)
    kamusPush("DC", "Toy Story, 1995", 8.3)
    kamusPush("DC", "Zootopia, 2016", 8.0)
    kamusPush("DC", "Moana, 2016", 7.6)
    kamusPush("DC", "Beauty and the Beast, 1991", 8.0)
    kamusPush("DC", "Tangled, 2010", 7.7)
    kamusPush("DC", "Mulan, 1998", 7.6)
    kamusPush("DC", "The Little Mermaid, 1989", 7.6)
    kamusPush("DC", "Cinderella, 1950", 7.3)
    kamusPush("DC", "Big Hero 6, 2014", 7.8)
    kamusPush("DC", "Ratatouille, 2007", 8.1)
    kamusPush("DC", "Wreck-It Ralph, 2012", 7.7)
    kamusPush("DC", "Finding Nemo, 2003", 8.2)
    kamusPush("DC", "Up, 2009", 8.3)
    kamusPush("DC", "Inside Out, 2015", 8.1)
    kamusPush("DC", "Coco, 2017", 8.4)
    kamusPush("DC", "The Incredibles, 2004", 8.0)
    kamusPush("DC", "Soul, 2020", 8.0)
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
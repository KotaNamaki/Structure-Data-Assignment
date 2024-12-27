   # Struct sederhana untuk menyimpan data film
import matplotlib.pyplot as plt
import os
import time
from datetime import datetime
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
def RatingSearching(genre, max_rating, index=0):
    max_rating = float(max_rating)
    if genre not in film_data:  # Base case: Genre not found in the dictionary
        print(f"\nMaaf, tidak ditemukan film dengan genre {genre}.\n")
        return False

    movies = film_data[genre]
    if index >= len(movies):  # Base case: Reached the end of the movie list
        print("\n")
        return False

    movie = movies[index]
    found = False

    if movie.rating <= max_rating:  # Check if the movie matches the criteria
        print(f"- {genre}, {movie.name} (Rating: {movie.rating})")
        found = True

    # Recursive call to check the next movie in the list
    next_found = RatingSearching(genre, max_rating, index + 1)
    
    if not (found or next_found) and index == 0:  # If no movies are found after full recursion
        print(f"\nMaaf, tidak ditemukan film dengan rating maksimum {max_rating}.\n")

    return found or next_found

# Contoh penggunaan:
# RatingSearching(8.0)



def main():
    time_logs = []  # List untuk menyimpan waktu eksekusi
    rating_inputs = []  # List untuk menyimpan rating yang diinput pengguna
    time_logs_dc = []  
    rating_inputs_dc = []
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


    kamusPush("DC", "The Dark Knight", 9.0)
    kamusPush("DC", "The Dark Knight Rises", 8.4)
    kamusPush("DC", "Batman Begins", 8.2)
    kamusPush("DC", "Wonder Woman", 7.4)
    kamusPush("DC", "Man of Steel", 7.1)
    kamusPush("DC", "Aquaman", 6.8)
    kamusPush("DC", "Shazam!", 7.0)
    kamusPush("DC", "Justice League", 6.1)
    kamusPush("DC", "Batman v Superman: Dawn of Justice", 6.4)
    kamusPush("DC", "Suicide Squad", 5.9)
    kamusPush("DC", "Birds of Prey", 6.1)
    kamusPush("DC", "Wonder Woman 1984", 5.4)
    kamusPush("DC", "The Suicide Squad", 7.2)
    kamusPush("DC", "Black Adam", 6.3)
    kamusPush("DC", "The Flash", 6.7)
    kamusPush("DC", "Blue Beetle", 6.1)
    kamusPush("DC", "Aquaman and the Lost Kingdom", 5.9)
    kamusPush("DC", "Joker", 8.4)
    kamusPush("DC", "The Batman", 7.8)
    kamusPush("DC", "Superman Returns", 6.0)
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
            rating = input(f"Halo {nama}, masukan rating yang anda inginkan: ")
            start_time = time.time()
            RatingSearching("Marvel", rating)
            durasi = time.time() - start_time
            time_logs.append(durasi)
            rating_inputs.append(f"Marvel {rating}")
            print(f"Waktu: {durasi:.12f} detik")
            os.system('pause')
        elif pilihan == '2':
            os.system('cls')
            rating = input(f"Halo {nama}, masukan rating yang anda inginkan: ")
            start_time = time.time()
            RatingSearching("DC", rating)
            durasi = time.time() - start_time
            time_logs_dc.append(durasi)
            rating_inputs_dc.append(f"DC {rating}")
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
    plt.figure(figsize=(10, 6))
    plt.plot(rating_inputs, time_logs, marker='o')
    plt.plot(rating_inputs_dc, time_logs_dc, marker='i')
    plt.title('Waktu Eksekusi RatingSearching')
    plt.xlabel('Input Pencarian')
    plt.ylabel('Waktu (detik)')
    plt.grid()
    plt.tight_layout()  # Mengatur tata letak agar tidak terpotong
    plt.show()
if __name__ == "__main__":
    main()

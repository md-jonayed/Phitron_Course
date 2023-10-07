class Star_Cinema:
    hall_list = []

    def entry_hall(self, hall_Object):
        self.hall_list.append(hall_Object)


class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self.seats = {}
        self.show_list = []
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        super().__init__()

    def entry_show(self, id, movie_name, time):
        t = (id, movie_name, time)
        self.show_list.append(t)
        rows = self.rows
        cols = self.cols
        seat = [[False for col in range(cols)] for row in range(rows)]
        self.seats[id] = seat

    def book_seats(self, show_id, row_col):
        if show_id in self.show_list[0]:
            if not self.seats[show_id][row_col[0]][row_col[1]]:
                print("Seat available for booking")
                self.seats[show_id][row_col[0]][row_col[1]] = True
            else:
                print("Seat is not available for booking")
        else:
            print("Invalid show id")
            return

    def view_show_list(self):
        for show in self.show_list:
            print(
                f"show id = {show[0]}, Movie name = {show[1]}, time = {show[2]}")

    def view_available_seats(self, show_id):
        if show_id in self.seats:
            available_seats = sum(sum(not seat for seat in row)
                                  for row in self.seats[show_id])
            print(f"Available seats for show ID {show_id}: {available_seats}")
        else:
            print(f"Invalid show ID")
            return


try:
    hall1 = Hall(5, 5, 1)
    hall1.entry_show("1", "Jawan", "12:00")

    while True:
        print("1. View all shows today")
        print("2. View available seats")
        print("3. Book tickets")
        print("4. Exit")
        a = int(input())
        if a == 1:
            hall1.view_show_list()
        elif a == 2:
            show_id = input("Enter show ID: ")
            hall1.view_available_seats(show_id)
        elif a == 3:
            seats = int(input("Enter how many seats you want to book: "))
            for i in range(seats):
                show_id = input("Enter show ID: ")
                row_col = tuple(
                    map(int, input("Enter row and column (comma-separated): ").split(',')))
                hall1.book_seats(show_id, row_col)
        elif a == 4:
            break
except:
    print("facing errors")


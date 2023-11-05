import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="shetaginaga101514"
)
print(mydb)

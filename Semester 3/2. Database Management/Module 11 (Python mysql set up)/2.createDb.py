import mysql.connector

myDbConnection = mysql.connector.connect(
    host = "localhost",
    user="root",
    password="shetaginaga101514"
)

print(myDbConnection)
dbName ="pythonDb"
myCursor = myDbConnection.cursor()
sqlQuery = "CREATE DATABASE "+dbName
myCursor.execute(sqlQuery)
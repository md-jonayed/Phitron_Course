import mysql.connector

myDbConnection = mysql.connector.connect(
    host = "localhost",
    user="root",
    password="password"
)

print(myDbConnection)
dbName ="pythonTestDb"
myCursor = myDbConnection.cursor()
sqlQuery = "CREATE DATABASE "+dbName
myCursor.execute(sqlQuery)
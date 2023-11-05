import mysql.connector
dbName ="pythonDb"
myDbConnection = mysql.connector.connect(
    host = "localhost",
    user="root",
    password="shetaginaga101514",
    database = dbName
)


myCursor = myDbConnection.cursor()
sqlQuery = """
    create table student(
         roll varchar(50) not null,
         name varchar(50) not null
    )
"""
myCursor.execute(sqlQuery)
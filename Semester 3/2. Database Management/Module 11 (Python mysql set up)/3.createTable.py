import mysql.connector
dbName ="pythonTestDb"
myDbConnection = mysql.connector.connect(
    host = "localhost",
    user="root",
    password="password",
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
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
update student
set name = "Mohammad"
where name = "jonayed"
"""
myCursor.execute(sqlQuery)
# after insert or update we need to commit or save:
myDbConnection.commit()
import mysql.connector
dbName = "pythonDb"
myDbConnection = mysql.connector.connect(
    host="localhost",
    user="root",
    password="shetaginaga101514",
    database=dbName
)


myCursor = myDbConnection.cursor()
sqlQuery = """
    insert into student(roll,name)
    values('101','jonayed')
"""
myCursor.execute(sqlQuery)
# after insert or update we need to commit or save:
myDbConnection.commit()
